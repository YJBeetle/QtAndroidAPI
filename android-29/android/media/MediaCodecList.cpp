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
	
	// QAndroidJniObject forward
	MediaCodecList::MediaCodecList(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaCodecList::MediaCodecList(jint arg0)
		: __JniBaseClass(
			"android.media.MediaCodecList",
			"(I)V",
			arg0
		) {}
	
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
		return callObjectMethod(
			"findDecoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring MediaCodecList::findEncoderForFormat(android::media::MediaFormat arg0)
	{
		return callObjectMethod(
			"findEncoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jarray MediaCodecList::getCodecInfos()
	{
		return callObjectMethod(
			"getCodecInfos",
			"()[Landroid/media/MediaCodecInfo;"
		).object<jarray>();
	}
} // namespace android::media

