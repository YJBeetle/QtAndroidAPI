#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaPlayer_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CODEC_AUDIO();
		static jstring CODEC_VIDEO();
		static jstring DURATION();
		static jstring ERRORS();
		static jstring ERROR_CODE();
		static jstring FRAMES();
		static jstring FRAMES_DROPPED();
		static jstring HEIGHT();
		static jstring MIME_TYPE_AUDIO();
		static jstring MIME_TYPE_VIDEO();
		static jstring PLAYING();
		static jstring WIDTH();
		
		MediaPlayer_MetricsConstants(QAndroidJniObject obj);
		// Constructors
		MediaPlayer_MetricsConstants() = default;
		
		// Methods
	};
} // namespace android::media

