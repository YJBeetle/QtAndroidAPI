#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaRecorder_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUDIO_BITRATE();
		static jstring AUDIO_CHANNELS();
		static jstring AUDIO_SAMPLERATE();
		static jstring AUDIO_TIMESCALE();
		static jstring CAPTURE_FPS();
		static jstring CAPTURE_FPS_ENABLE();
		static jstring FRAMERATE();
		static jstring HEIGHT();
		static jstring MOVIE_TIMESCALE();
		static jstring ROTATION();
		static jstring VIDEO_BITRATE();
		static jstring VIDEO_IFRAME_INTERVAL();
		static jstring VIDEO_LEVEL();
		static jstring VIDEO_PROFILE();
		static jstring VIDEO_TIMESCALE();
		static jstring WIDTH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRecorder_MetricsConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_MetricsConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

