#include "Bird.h"

void Bird::launch()
{
	b2BodyDef* bodyDef = new b2BodyDef();
	bodyDef->type = b2_dynamicBody;
	bodyDef->position.Set(dimbody_x, dimbody_y);

	b2CircleShape* dynamicBox = new b2CircleShape();
	dynamicBox->m_radius = 16 / common::met_to_pix;
	b2FixtureDef* fixtureDef = new b2FixtureDef();
	fixtureDef->shape = dynamicBox;
	fixtureDef->density = 0.1f;
	fixtureDef->friction = 1.0f;

	bodyDef->position.Set(sprite.getPosition().x / common::met_to_pix, sprite.getPosition().y / common::met_to_pix);
	body = world.CreateBody(bodyDef);
	body->CreateFixture(fixtureDef);
	body->SetBullet(true);
	float force = std::min(dist,  max_length)/60;
	body->ApplyLinearImpulseToCenter({ force * cos(atang), force * sin(atang) }, true);
	
}

Bird::Bird(std::string str, b2World& world_) : world(world_)
{
	bird.loadFromFile(str);
	sprite = sf::Sprite(bird, sf::IntRect(0, 0, frame_width, frame_height));
	sprite.setPosition(dimbody_x, dimbody_y);
	sprite.setOrigin(frame_width / 2, frame_height / 2);
}

void Bird::update()
{
	if (body)
	{
		sprite.setPosition(body->GetPosition().x * common::met_to_pix, body->GetPosition().y * common::met_to_pix);
		sprite.setRotation(body->GetAngle() / b2_pi * 180);
		if (clock() - this->time >= 1000/8 && sprite.getPosition().x<=500)
		{
			sprite.setTextureRect(sf::IntRect(num_frame*frame_width, 0, frame_width, frame_height));
			if (flag)
			{
				num_frame += 1;
				if (num_frame == 3) flag = false;
			}
			else
			{
				num_frame -= 1;
				if (num_frame == 0) flag = true;
			}
			this->time = clock();
		}
	}
}

void Bird::event_handle(sf::Vector2i& mouse_coords, sf::Event& event)
{
	float bird_x, bird_y;
	switch (event.type)
	{
	case sf::Event::MouseButtonPressed:
		//������� ������
		if (dimbody_x - frame_width / 2 <= mouse_coords.x && mouse_coords.x <= dimbody_x + frame_width / 2 && dimbody_y - frame_height / 2 <= mouse_coords.y && mouse_coords.y <= dimbody_y + frame_height / 2)
			mouse_press = true;
		break;
	case sf::Event::MouseMoved:
		//����������� ������
		if (mouse_press)
		{
			dist = sqrt((dimbody_x - mouse_coords.x)*(dimbody_x - mouse_coords.x) + (dimbody_y - mouse_coords.y)*(dimbody_y - mouse_coords.y));
			if (dist >= max_length)
			{
				bird_x = dimbody_x - max_length*((dimbody_x - mouse_coords.x) / dist);
				bird_y = dimbody_y - max_length*((dimbody_y - mouse_coords.y) / dist);
				sprite.setPosition(bird_x, bird_y);
			}
			else
			{
				sprite.setPosition(mouse_coords.x, mouse_coords.y);
			}
			atang = atanf((dimbody_y - mouse_coords.y) / (dimbody_x - mouse_coords.x));
		}
		break;
	case sf::Event::MouseButtonReleased:
		//��������� ������ �� �������� ����������
		if (mouse_press)
		{
			launch();
			mouse_press = false;
		}
		break;
	}
}

void Bird::draw(sf::RenderWindow& window)
{
	window.draw(sprite);
}