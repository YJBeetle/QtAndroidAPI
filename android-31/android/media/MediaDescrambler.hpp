#pragma once

#include "./MediaCas_Session.def.hpp"
#include "./MediaCodec_CryptoInfo.def.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MediaDescrambler.def.hpp"

namespace android::media
{
	// Fields
	inline jbyte MediaDescrambler::SCRAMBLE_CONTROL_EVEN_KEY()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_EVEN_KEY"
		);
	}
	inline jbyte MediaDescrambler::SCRAMBLE_CONTROL_ODD_KEY()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_ODD_KEY"
		);
	}
	inline jbyte MediaDescrambler::SCRAMBLE_CONTROL_RESERVED()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_RESERVED"
		);
	}
	inline jbyte MediaDescrambler::SCRAMBLE_CONTROL_UNSCRAMBLED()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_CONTROL_UNSCRAMBLED"
		);
	}
	inline jbyte MediaDescrambler::SCRAMBLE_FLAG_PES_HEADER()
	{
		return getStaticField<jbyte>(
			"android.media.MediaDescrambler",
			"SCRAMBLE_FLAG_PES_HEADER"
		);
	}
	
	// Constructors
	inline MediaDescrambler::MediaDescrambler(jint arg0)
		: JObject(
			"android.media.MediaDescrambler",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void MediaDescrambler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint MediaDescrambler::descramble(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_CryptoInfo arg2) const
	{
		return callMethod<jint>(
			"descramble",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;Landroid/media/MediaCodec$CryptoInfo;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean MediaDescrambler::requiresSecureDecoderComponent(JString arg0) const
	{
		return callMethod<jboolean>(
			"requiresSecureDecoderComponent",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void MediaDescrambler::setMediaCasSession(android::media::MediaCas_Session arg0) const
	{
		callMethod<void>(
			"setMediaCasSession",
			"(Landroid/media/MediaCas$Session;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

