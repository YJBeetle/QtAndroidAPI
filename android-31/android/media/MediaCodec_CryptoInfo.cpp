#include "./MediaCodec_CryptoInfo_Pattern.hpp"
#include "./MediaCodec_CryptoInfo.hpp"

namespace android::media
{
	// Fields
	jbyteArray MediaCodec_CryptoInfo::iv()
	{
		return getObjectField(
			"iv",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray MediaCodec_CryptoInfo::key()
	{
		return getObjectField(
			"key",
			"[B"
		).object<jbyteArray>();
	}
	jint MediaCodec_CryptoInfo::mode()
	{
		return getField<jint>(
			"mode"
		);
	}
	jintArray MediaCodec_CryptoInfo::numBytesOfClearData()
	{
		return getObjectField(
			"numBytesOfClearData",
			"[I"
		).object<jintArray>();
	}
	jintArray MediaCodec_CryptoInfo::numBytesOfEncryptedData()
	{
		return getObjectField(
			"numBytesOfEncryptedData",
			"[I"
		).object<jintArray>();
	}
	jint MediaCodec_CryptoInfo::numSubSamples()
	{
		return getField<jint>(
			"numSubSamples"
		);
	}
	
	// QJniObject forward
	MediaCodec_CryptoInfo::MediaCodec_CryptoInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaCodec_CryptoInfo::MediaCodec_CryptoInfo()
		: JObject(
			"android.media.MediaCodec$CryptoInfo",
			"()V"
		) {}
	
	// Methods
	android::media::MediaCodec_CryptoInfo_Pattern MediaCodec_CryptoInfo::getPattern()
	{
		return callObjectMethod(
			"getPattern",
			"()Landroid/media/MediaCodec$CryptoInfo$Pattern;"
		);
	}
	void MediaCodec_CryptoInfo::set(jint arg0, jintArray arg1, jintArray arg2, jbyteArray arg3, jbyteArray arg4, jint arg5)
	{
		callMethod<void>(
			"set",
			"(I[I[I[B[BI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void MediaCodec_CryptoInfo::setPattern(android::media::MediaCodec_CryptoInfo_Pattern arg0)
	{
		callMethod<void>(
			"setPattern",
			"(Landroid/media/MediaCodec$CryptoInfo$Pattern;)V",
			arg0.object()
		);
	}
	jstring MediaCodec_CryptoInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

