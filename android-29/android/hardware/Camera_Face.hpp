#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}

namespace android::hardware
{
	class Camera_Face : public __JniBaseClass
	{
	public:
		// Fields
		jint id();
		QAndroidJniObject leftEye();
		QAndroidJniObject mouth();
		QAndroidJniObject rect();
		QAndroidJniObject rightEye();
		jint score();
		
		Camera_Face(QAndroidJniObject obj);
		// Constructors
		Camera_Face();
		
		// Methods
	};
} // namespace android::hardware

