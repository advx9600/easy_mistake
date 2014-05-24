void init()
{
	vecTouchStar = new std::vector<Sprite*>();
	vecTouchStar->push_back(Sprite::create("1.png"));
	vecTouchStar->push_back(Sprite::create("2.png"));
}

void doclick()
{
	// when click is wrong
	std::vector<Sprite*>::iterator begin = vecTouchStar->begin();
	std::vector<Sprite*>::iterator end = vecTouchStar->end();	
	for(begin;begin<end;begin++)
	{
		this->removeChild((*begin));
		log("x:%f,y:%f",(*begin)->getPosition().x,\
				(*begin)->getPosition().y  );
	}
}
