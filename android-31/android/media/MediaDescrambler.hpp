#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCas_Session;
}
namespace android::media
{
	class MediaCodec_CryptoInfo;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaDescrambler : public JObject
	{
	public:
		// Fields
		static jbyte SCRAMBLE_CONTROL_EVEN_KEY();
		static jbyte SCRAMBLE_CONTROL_ODD_KEY();
		static jbyte SCRAMBLE_CONTROL_RESERVED();
		static jbyte SCRAMBLE_CONTROL_UNSCRAMBLED();
		static jbyte SCRAMBLE_FLAG_PES_HEADER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDescrambler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDescrambler(QAndroidJniObject obj);
		
		// Constructors
		MediaDescrambler(jint arg0);
		
		// Methods
		void close() const;
		jint descramble(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_CryptoInfo arg2) const;
		jboolean requiresSecureDecoderComponent(JString arg0) const;
		void setMediaCasSession(android::media::MediaCas_Session arg0) const;
	};
} // namespace android::media

