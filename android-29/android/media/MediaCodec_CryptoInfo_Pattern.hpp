#pragma once

#ifndef ANDROID_MEDIA_MEDIACODEC_CRYPTOINFO_PATTERN
#define ANDROID_MEDIA_MEDIACODEC_CRYPTOINFO_PATTERN

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaCodec_CryptoInfo_Pattern : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		void set(jint arg0, jint arg1);
		jint getSkipBlocks();
		jint getEncryptBlocks();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCodec_CryptoInfo_Pattern::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$CryptoInfo$Pattern",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	void MediaCodec_CryptoInfo_Pattern::set(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint MediaCodec_CryptoInfo_Pattern::getSkipBlocks()
	{
		return __thiz.callMethod<jint>(
			"getSkipBlocks",
			"()I"
		);
	}
	jint MediaCodec_CryptoInfo_Pattern::getEncryptBlocks()
	{
		return __thiz.callMethod<jint>(
			"getEncryptBlocks",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodec_CryptoInfo_Pattern : public __jni_impl::android::media::MediaCodec_CryptoInfo_Pattern
	{
	public:
		MediaCodec_CryptoInfo_Pattern(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodec_CryptoInfo_Pattern(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODEC_CRYPTOINFO_PATTERN

