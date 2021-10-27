#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore_Playback : public __JniBaseClass
	{
	public:
		// Fields
		static jint PAUSE();
		static jint RESUME();
		static jint START();
		static jint STOP();
		
		DrmStore_Playback(QAndroidJniObject obj);
		// Constructors
		DrmStore_Playback();
		
		// Methods
	};
} // namespace android::drm

