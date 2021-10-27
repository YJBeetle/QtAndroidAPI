#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./Shape.hpp"

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
namespace android::graphics
{
	class RectF;
}
namespace android::graphics::drawable::shapes
{
	class Shape;
}

namespace android::graphics::drawable::shapes
{
	class RectShape : public android::graphics::drawable::shapes::Shape
	{
	public:
		// Fields
		
		RectShape(QAndroidJniObject obj);
		// Constructors
		RectShape();
		
		// Methods
		QAndroidJniObject clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		void getOutline(android::graphics::Outline arg0);
		jint hashCode();
	};
} // namespace android::graphics::drawable::shapes

