#include "./MediaCas_Session.hpp"
#include "./MediaCodec_CryptoInfo.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaDescrambler.hpp"

namespace android::media
{
	// Fields
	jbyte MediaDescrambler::SCRAMBLE_CONTROL_EVEN_KEY()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_EVEN_KEY"
		);
	}
	jbyte MediaDescrambler::SCRAMBLE_CONTROL_ODD_KEY()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_ODD_KEY"
		);
	}
	jbyte MediaDescrambler::SCRAMBLE_CONTROL_RESERVED()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_RESERVED"
		);
	}
	jbyte MediaDescrambler::SCRAMBLE_CONTROL_UNSCRAMBLED()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_UNSCRAMBLED"
		);
	}
	jbyte MediaDescrambler::SCRAMBLE_FLAG_PES_HEADER()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_FLAG_PES_HEADER"
		);
	}
	
	// Constructors
	MediaDescrambler::MediaDescrambler(jint arg0)
		: JObject(
			"android.media.MediaDescrambler",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void MediaDescrambler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint MediaDescrambler::descramble(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_CryptoInfo arg2) const
	{
		return callMethod<jint>(
			"descramble",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;Landroid/media/MediaCodec$CryptoInfo;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean MediaDescrambler::requiresSecureDecoderComponent(JString arg0) const
	{
		return callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void MediaDescrambler::setMediaCasSession(android::media::MediaCas_Session arg0) const
	{
		callMethod<void>(
			"setMediaCasSession",
			"(Landroid/media/MediaCas$Session;)V",
			arg0.object()
		);
	}
} // namespace android::media

