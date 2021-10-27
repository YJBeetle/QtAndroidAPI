#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::hardware
{
	class Camera_Area : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject rect();
		jint weight();
		
		Camera_Area(QAndroidJniObject obj);
		// Constructors
		Camera_Area(android::graphics::Rect &arg0, jint &arg1);
		Camera_Area() = default;
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::hardware

