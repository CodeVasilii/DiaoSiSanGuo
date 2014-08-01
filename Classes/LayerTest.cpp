#include "LayerTest.h"

bool LayerTest::init()
{
	do 
	{
		if (!Layer::init())
		{
			break;
		}

		auto map = TMXTiledMap::create("map/1010100.tmx");
		this->addChild(map);

		auto mask = map->getLayer("mask");
		mask->setVisible(false);
		//mask->getTileAt(Point(1,1)) == true;

		return true;
	} while (0);

	return false;
}