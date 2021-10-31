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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Face(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Face(QAndroidJniObject obj);
		
		// Constructors
		
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

