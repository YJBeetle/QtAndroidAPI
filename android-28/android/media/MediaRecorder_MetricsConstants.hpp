#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaRecorder_MetricsConstants : public JObject
	{
	public:
		// Fields
		static JString AUDIO_BITRATE();
		static JString AUDIO_CHANNELS();
		static JString AUDIO_SAMPLERATE();
		static JString AUDIO_TIMESCALE();
		static JString CAPTURE_FPS();
		static JString CAPTURE_FPS_ENABLE();
		static JString FRAMERATE();
		static JString HEIGHT();
		static JString MOVIE_TIMESCALE();
		static JString ROTATION();
		static JString VIDEO_BITRATE();
		static JString VIDEO_IFRAME_INTERVAL();
		static JString VIDEO_LEVEL();
		static JString VIDEO_PROFILE();
		static JString VIDEO_TIMESCALE();
		static JString WIDTH();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRecorder_MetricsConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_MetricsConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

