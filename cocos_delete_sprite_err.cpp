void init()
{
	vecTouchStar = new std::vector<Sprite*>();
	auto s1=Sprite::create("1.png");
	auto s2=Sprite::create("2.png");
	vecTouchStar->push_back(s1);
	vecTouchStar->push_back(s2);
	this->addChild(s1);
	this->addChild(s2);
}

void doclick()
{
	// when click is wrong, may be a bug
	std::vector<Sprite*>::iterator begin = vecTouchStar->begin();
	std::vector<Sprite*>::iterator end = vecTouchStar->end();	
	for(begin;begin<end;begin++)
	{
		this->removeChild((*begin));
		log("x:%f,y:%f",(*begin)->getPosition().x,\
				(*begin)->getPosition().y  );
	}
}
