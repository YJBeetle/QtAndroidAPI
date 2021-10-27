#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaCas_Session;
}
namespace android::media
{
	class MediaCodec_CryptoInfo;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaDescrambler : public __JniBaseClass
	{
	public:
		// Fields
		static jbyte SCRAMBLE_CONTROL_EVEN_KEY();
		static jbyte SCRAMBLE_CONTROL_ODD_KEY();
		static jbyte SCRAMBLE_CONTROL_RESERVED();
		static jbyte SCRAMBLE_CONTROL_UNSCRAMBLED();
		static jbyte SCRAMBLE_FLAG_PES_HEADER();
		
		MediaDescrambler(QAndroidJniObject obj);
		// Constructors
		MediaDescrambler(jint &arg0);
		MediaDescrambler() = default;
		
		// Methods
		void close();
		jint descramble(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_CryptoInfo arg2);
		jboolean requiresSecureDecoderComponent(jstring arg0);
		jboolean requiresSecureDecoderComponent(const QString &arg0);
		void setMediaCasSession(android::media::MediaCas_Session arg0);
	};
} // namespace android::media

