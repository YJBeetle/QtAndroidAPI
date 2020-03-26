#pragma once

#ifndef ANDROID_MEDIA_MEDIACODEC_BUFFERINFO
#define ANDROID_MEDIA_MEDIACODEC_BUFFERINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaCodec_BufferInfo : public __JniBaseClass
	{
	public:
		// Fields
		jint flags();
		jint offset();
		jlong presentationTimeUs();
		jint size();
		
		// Constructors
		void __constructor();
		
		// Methods
		void set(jint arg0, jint arg1, jlong arg2, jint arg3);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint MediaCodec_BufferInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jint MediaCodec_BufferInfo::offset()
	{
		return __thiz.getField<jint>(
			"offset"
		);
	}
	jlong MediaCodec_BufferInfo::presentationTimeUs()
	{
		return __thiz.getField<jlong>(
			"presentationTimeUs"
		);
	}
	jint MediaCodec_BufferInfo::size()
	{
		return __thiz.getField<jint>(
			"size"
		);
	}
	
	// Constructors
	void MediaCodec_BufferInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$BufferInfo",
			"()V");
	}
	
	// Methods
	void MediaCodec_BufferInfo::set(jint arg0, jint arg1, jlong arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIJI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodec_BufferInfo : public __jni_impl::android::media::MediaCodec_BufferInfo
	{
	public:
		MediaCodec_BufferInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodec_BufferInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODEC_BUFFERINFO

