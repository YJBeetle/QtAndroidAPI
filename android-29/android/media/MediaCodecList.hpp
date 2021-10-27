#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaCodecInfo;
}
namespace __jni_impl::android::media
{
	class MediaFormat;
}

namespace __jni_impl::android::media
{
	class MediaCodecList : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL_CODECS();
		static jint REGULAR_CODECS();
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		static jint getCodecCount();
		static QAndroidJniObject getCodecInfoAt(jint arg0);
		jstring findDecoderForFormat(__jni_impl::android::media::MediaFormat arg0);
		jstring findEncoderForFormat(__jni_impl::android::media::MediaFormat arg0);
		jarray getCodecInfos();
	};
} // namespace __jni_impl::android::media

#include "MediaCodecInfo.hpp"
#include "MediaFormat.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaCodecList::ALL_CODECS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecList",
			"ALL_CODECS"
		);
	}
	jint MediaCodecList::REGULAR_CODECS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecList",
			"REGULAR_CODECS"
		);
	}
	
	// Constructors
	void MediaCodecList::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodecList",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint MediaCodecList::getCodecCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.MediaCodecList",
			"getCodecCount",
			"()I"
		);
	}
	QAndroidJniObject MediaCodecList::getCodecInfoAt(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodecList",
			"getCodecInfoAt",
			"(I)Landroid/media/MediaCodecInfo;",
			arg0
		);
	}
	jstring MediaCodecList::findDecoderForFormat(__jni_impl::android::media::MediaFormat arg0)
	{
		return __thiz.callObjectMethod(
			"findDecoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring MediaCodecList::findEncoderForFormat(__jni_impl::android::media::MediaFormat arg0)
	{
		return __thiz.callObjectMethod(
			"findEncoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jarray MediaCodecList::getCodecInfos()
	{
		return __thiz.callObjectMethod(
			"getCodecInfos",
			"()[Landroid/media/MediaCodecInfo;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodecList : public __jni_impl::android::media::MediaCodecList
	{
	public:
		MediaCodecList(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodecList(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

