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
	class ArcShape : public android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		ArcShape(QAndroidJniObject obj);
		// Constructors
		ArcShape(jfloat arg0, jfloat arg1);
		ArcShape() = default;
		
		// Methods
		QAndroidJniObject clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		void getOutline(android::graphics::Outline arg0);
		jfloat getStartAngle();
		jfloat getSweepAngle();
		jint hashCode();
	};
} // namespace android::graphics::drawable::shapes

