#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioMetadata_Format : public JObject
	{
	public:
		// Fields
		static JObject KEY_ATMOS_PRESENT();
		static JObject KEY_AUDIO_ENCODING();
		static JObject KEY_BIT_RATE();
		static JObject KEY_BIT_WIDTH();
		static JObject KEY_CHANNEL_MASK();
		static JObject KEY_MIME();
		static JObject KEY_PRESENTATION_CONTENT_CLASSIFIER();
		static JObject KEY_PRESENTATION_ID();
		static JObject KEY_PRESENTATION_LANGUAGE();
		static JObject KEY_PROGRAM_ID();
		static JObject KEY_SAMPLE_RATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioMetadata_Format(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioMetadata_Format(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

