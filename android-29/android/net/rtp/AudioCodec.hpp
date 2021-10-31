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
		
		AudioCodec(QAndroidJniObject obj);
		// Constructors
		AudioCodec() = default;
		
		// Methods
		static QAndroidJniObject getCodec(jint arg0, jstring arg1, jstring arg2);
		static jarray getCodecs();
	};
} // namespace android::net::rtp

