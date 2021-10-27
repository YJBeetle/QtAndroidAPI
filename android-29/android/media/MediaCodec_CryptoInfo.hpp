#pragma once

#ifndef ANDROID_MEDIA_MEDIACODEC_CRYPTOINFO
#define ANDROID_MEDIA_MEDIACODEC_CRYPTOINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaCodec_CryptoInfo_Pattern;
}

namespace __jni_impl::android::media
{
	class MediaCodec_CryptoInfo : public __JniBaseClass
	{
	public:
		// Fields
		jbyteArray iv();
		jbyteArray key();
		jint mode();
		jintArray numBytesOfClearData();
		jintArray numBytesOfEncryptedData();
		jint numSubSamples();
		
		// Constructors
		void __constructor();
		
		// Methods
		void set(jint arg0, jintArray arg1, jintArray arg2, jbyteArray arg3, jbyteArray arg4, jint arg5);
		void setPattern(__jni_impl::android::media::MediaCodec_CryptoInfo_Pattern arg0);
		jstring toString();
	};
} // namespace __jni_impl::android::media

#include "MediaCodec_CryptoInfo_Pattern.hpp"

namespace __jni_impl::android::media
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
	
	// Constructors
	void MediaCodec_CryptoInfo::__constructor()
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
	void MediaCodec_CryptoInfo::setPattern(__jni_impl::android::media::MediaCodec_CryptoInfo_Pattern arg0)
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodec_CryptoInfo : public __jni_impl::android::media::MediaCodec_CryptoInfo
	{
	public:
		MediaCodec_CryptoInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodec_CryptoInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODEC_CRYPTOINFO

