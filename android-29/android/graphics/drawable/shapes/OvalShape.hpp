#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./Shape.hpp"
#include "./RectShape.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics::drawable::shapes
{
	class RectShape;
}
namespace android::graphics::drawable::shapes
{
	class Shape;
}

namespace android::graphics::drawable::shapes
{
	class OvalShape : public android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		OvalShape(QAndroidJniObject obj);
		// Constructors
		OvalShape();
		
		// Methods
		QAndroidJniObject clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		void getOutline(android::graphics::Outline arg0);
	};
} // namespace android::graphics::drawable::shapes

