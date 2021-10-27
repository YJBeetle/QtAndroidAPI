#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaActionSound : public __JniBaseClass
	{
	public:
		// Fields
		static jint FOCUS_COMPLETE();
		static jint SHUTTER_CLICK();
		static jint START_VIDEO_RECORDING();
		static jint STOP_VIDEO_RECORDING();
		
		MediaActionSound(QAndroidJniObject obj);
		// Constructors
		MediaActionSound();
		
		// Methods
		void load(jint arg0);
		void play(jint arg0);
		void release();
	};
} // namespace android::media

