#include "./MediaCodecInfo.hpp"
#include "./MediaFormat.hpp"
#include "./MediaCodecList.hpp"

namespace android::media
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
	
	MediaCodecList::MediaCodecList(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCodecList::MediaCodecList(jint arg0)
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
	jstring MediaCodecList::findDecoderForFormat(android::media::MediaFormat arg0)
	{
		return __thiz.callObjectMethod(
			"findDecoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring MediaCodecList::findEncoderForFormat(android::media::MediaFormat arg0)
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
} // namespace android::media

