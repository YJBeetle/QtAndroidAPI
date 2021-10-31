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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaPlayer_MetricsConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_MetricsConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media
