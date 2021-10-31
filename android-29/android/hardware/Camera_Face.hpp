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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Camera_Face(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Camera_Face(QAndroidJniObject obj);
		
		// Constructors
		Camera_Face();
		
		// Methods
	};
} // namespace android::hardware

