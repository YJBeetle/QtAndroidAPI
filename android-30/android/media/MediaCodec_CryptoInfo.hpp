#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "./MediaCodec_CryptoInfo_Pattern.def.hpp"
#include "../../JString.hpp"
#include "./MediaCodec_CryptoInfo.def.hpp"

namespace android::media
{
	// Fields
	inline JByteArray MediaCodec_CryptoInfo::iv()
	{
		return getObjectField(
			"iv",
			"[B"
		);
	}
	inline JByteArray MediaCodec_CryptoInfo::key()
	{
		return getObjectField(
			"key",
			"[B"
		);
	}
	inline jint MediaCodec_CryptoInfo::mode()
	{
		return getField<jint>(
			"mode"
		);
	}
	inline JIntArray MediaCodec_CryptoInfo::numBytesOfClearData()
	{
		return getObjectField(
			"numBytesOfClearData",
			"[I"
		);
	}
	inline JIntArray MediaCodec_CryptoInfo::numBytesOfEncryptedData()
	{
		return getObjectField(
			"numBytesOfEncryptedData",
			"[I"
		);
	}
	inline jint MediaCodec_CryptoInfo::numSubSamples()
	{
		return getField<jint>(
			"numSubSamples"
		);
	}
	
	// Constructors
	inline MediaCodec_CryptoInfo::MediaCodec_CryptoInfo()
		: JObject(
			"android.media.MediaCodec$CryptoInfo",
			"()V"
		) {}
	
	// Methods
	inline void MediaCodec_CryptoInfo::set(jint arg0, JIntArray arg1, JIntArray arg2, JByteArray arg3, JByteArray arg4, jint arg5) const
	{
		callMethod<void>(
			"set",
			"(I[I[I[B[BI)V",
			arg0,
			arg1.object<jintArray>(),
			arg2.object<jintArray>(),
			arg3.object<jbyteArray>(),
			arg4.object<jbyteArray>(),
			arg5
		);
	}
	inline void MediaCodec_CryptoInfo::setPattern(android::media::MediaCodec_CryptoInfo_Pattern arg0) const
	{
		callMethod<void>(
			"setPattern",
			"(Landroid/media/MediaCodec$CryptoInfo$Pattern;)V",
			arg0.object()
		);
	}
	inline JString MediaCodec_CryptoInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

