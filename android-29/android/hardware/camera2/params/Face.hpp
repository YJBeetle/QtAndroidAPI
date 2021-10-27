#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}

namespace android::hardware::camera2::params
{
	class Face : public __JniBaseClass
	{
	public:
		// Fields
		static jint ID_UNSUPPORTED();
		static jint SCORE_MAX();
		static jint SCORE_MIN();
		
		Face(QAndroidJniObject obj);
		// Constructors
		Face() = default;
		
		// Methods
		QAndroidJniObject getBounds();
		jint getId();
		QAndroidJniObject getLeftEyePosition();
		QAndroidJniObject getMouthPosition();
		QAndroidJniObject getRightEyePosition();
		jint getScore();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

