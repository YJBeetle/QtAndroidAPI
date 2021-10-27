#include "./MediaCodec_CryptoInfo_Pattern.hpp"
#include "./MediaCodec_CryptoInfo.hpp"

namespace android::media
{
	// Fields
	jbyteArray MediaCodec_CryptoInfo::iv()
	{
		return __thiz.getObjectField(
			"iv",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray MediaCodec_CryptoInfo::key()
	{
		return __thiz.getObjectField(
			"key",
			"[B"
		).object<jbyteArray>();
	}
	jint MediaCodec_CryptoInfo::mode()
	{
		return __thiz.getField<jint>(
			"mode"
		);
	}
	jintArray MediaCodec_CryptoInfo::numBytesOfClearData()
	{
		return __thiz.getObjectField(
			"numBytesOfClearData",
			"[I"
		).object<jintArray>();
	}
	jintArray MediaCodec_CryptoInfo::numBytesOfEncryptedData()
	{
		return __thiz.getObjectField(
			"numBytesOfEncryptedData",
			"[I"
		).object<jintArray>();
	}
	jint MediaCodec_CryptoInfo::numSubSamples()
	{
		return __thiz.getField<jint>(
			"numSubSamples"
		);
	}
	
	MediaCodec_CryptoInfo::MediaCodec_CryptoInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCodec_CryptoInfo::MediaCodec_CryptoInfo()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$CryptoInfo",
			"()V"
		);
	}
	
	// Methods
	void MediaCodec_CryptoInfo::set(jint arg0, jintArray arg1, jintArray arg2, jbyteArray arg3, jbyteArray arg4, jint arg5)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setPattern",
			"(Landroid/media/MediaCodec$CryptoInfo$Pattern;)V",
			arg0.__jniObject().object()
		);
	}
	jstring MediaCodec_CryptoInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

