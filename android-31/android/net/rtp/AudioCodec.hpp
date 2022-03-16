#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::net::rtp
{
	class AudioCodec : public JObject
	{
	public:
		// Fields
		static android::net::rtp::AudioCodec AMR();
		static android::net::rtp::AudioCodec GSM();
		static android::net::rtp::AudioCodec GSM_EFR();
		static android::net::rtp::AudioCodec PCMA();
		static android::net::rtp::AudioCodec PCMU();
		JString fmtp();
		JString rtpmap();
		jint type();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioCodec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioCodec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::rtp::AudioCodec getCodec(jint arg0, JString arg1, JString arg2);
		static JArray getCodecs();
	};
} // namespace android::net::rtp

