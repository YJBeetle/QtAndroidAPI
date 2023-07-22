#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaPlayer_MetricsConstants : public JObject
	{
	public:
		// Fields
		static JString CODEC_AUDIO();
		static JString CODEC_VIDEO();
		static JString DURATION();
		static JString ERRORS();
		static JString ERROR_CODE();
		static JString FRAMES();
		static JString FRAMES_DROPPED();
		static JString HEIGHT();
		static JString MIME_TYPE_AUDIO();
		static JString MIME_TYPE_VIDEO();
		static JString PLAYING();
		static JString WIDTH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaPlayer_MetricsConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_MetricsConstants(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

