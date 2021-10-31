#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::rtp
{
	class AudioCodec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AMR();
		static QAndroidJniObject GSM();
		static QAndroidJniObject GSM_EFR();
		static QAndroidJniObject PCMA();
		static QAndroidJniObject PCMU();
		jstring fmtp();
		jstring rtpmap();
		jint type();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioCodec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioCodec(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getCodec(jint arg0, jstring arg1, jstring arg2);
		static jarray getCodecs();
	};
} // namespace android::net::rtp

