#pragma once

#include "../../../JObject.hpp"


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
		jstring fmtp();
		jstring rtpmap();
		jint type();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioCodec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioCodec(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::rtp::AudioCodec getCodec(jint arg0, jstring arg1, jstring arg2);
		static jarray getCodecs();
	};
} // namespace android::net::rtp

