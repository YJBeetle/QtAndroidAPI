#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./Shape.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics::drawable::shapes
{
	class Shape;
}

namespace android::graphics::drawable::shapes
{
	class PathShape : public android::graphics::drawable::shapes::Shape
	{
	public:
		// Fields
		
		PathShape(QAndroidJniObject obj);
		// Constructors
		PathShape(android::graphics::Path &arg0, jfloat &arg1, jfloat &arg2);
		PathShape() = default;
		
		// Methods
		QAndroidJniObject clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::graphics::drawable::shapes

