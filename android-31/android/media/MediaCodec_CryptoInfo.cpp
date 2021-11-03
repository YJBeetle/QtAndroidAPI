#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "./MediaCodec_CryptoInfo_Pattern.hpp"
#include "../../JString.hpp"
#include "./MediaCodec_CryptoInfo.hpp"

namespace android::media
{
	// Fields
	JByteArray MediaCodec_CryptoInfo::iv()
	{
		return getObjectField(
			"iv",
			"[B"
		);
	}
	JByteArray MediaCodec_CryptoInfo::key()
	{
		return getObjectField(
			"key",
			"[B"
		);
	}
	jint MediaCodec_CryptoInfo::mode()
	{
		return getField<jint>(
			"mode"
		);
	}
	JIntArray MediaCodec_CryptoInfo::numBytesOfClearData()
	{
		return getObjectField(
			"numBytesOfClearData",
			"[I"
		);
	}
	JIntArray MediaCodec_CryptoInfo::numBytesOfEncryptedData()
	{
		return getObjectField(
			"numBytesOfEncryptedData",
			"[I"
		);
	}
	jint MediaCodec_CryptoInfo::numSubSamples()
	{
		return getField<jint>(
			"numSubSamples"
		);
	}
	
	// QAndroidJniObject forward
	MediaCodec_CryptoInfo::MediaCodec_CryptoInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaCodec_CryptoInfo::MediaCodec_CryptoInfo()
		: JObject(
			"android.media.MediaCodec$CryptoInfo",
			"()V"
		) {}
	
	// Methods
	android::media::MediaCodec_CryptoInfo_Pattern MediaCodec_CryptoInfo::getPattern() const
	{
		return callObjectMethod(
			"getPattern",
			"()Landroid/media/MediaCodec$CryptoInfo$Pattern;"
		);
	}
	void MediaCodec_CryptoInfo::set(jint arg0, JIntArray arg1, JIntArray arg2, JByteArray arg3, JByteArray arg4, jint arg5) const
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
	void MediaCodec_CryptoInfo::setPattern(android::media::MediaCodec_CryptoInfo_Pattern arg0) const
	{
		callMethod<void>(
			"setPattern",
			"(Landroid/media/MediaCodec$CryptoInfo$Pattern;)V",
			arg0.object()
		);
	}
	JString MediaCodec_CryptoInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

