#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRecorder;
}

namespace android::media
{
	class MediaRecorder_VideoSource : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAMERA();
		static jint DEFAULT();
		static jint SURFACE();
		
		MediaRecorder_VideoSource(QAndroidJniObject obj);
		// Constructors
		MediaRecorder_VideoSource() = default;
		
		// Methods
	};
} // namespace android::media

