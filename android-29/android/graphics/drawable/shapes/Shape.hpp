#pragma once

#include "../../../../__JniBaseClass.hpp"

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
	class Shape : public __JniBaseClass
	{
	public:
		// Fields
		
		Shape(QAndroidJniObject obj);
		// Constructors
		Shape();
		
		// Methods
		QAndroidJniObject clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		jfloat getHeight();
		void getOutline(android::graphics::Outline arg0);
		jfloat getWidth();
		jboolean hasAlpha();
		jint hashCode();
		void resize(jfloat arg0, jfloat arg1);
	};
} // namespace android::graphics::drawable::shapes

