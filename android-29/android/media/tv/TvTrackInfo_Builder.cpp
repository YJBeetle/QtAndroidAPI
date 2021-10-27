#include "./TvTrackInfo.hpp"
#include "../../os/Bundle.hpp"
#include "./TvTrackInfo_Builder.hpp"

namespace android::media::tv
{
	// Fields
	
	TvTrackInfo_Builder::TvTrackInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvTrackInfo_Builder::TvTrackInfo_Builder(jint &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvTrackInfo$Builder",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	TvTrackInfo_Builder::TvTrackInfo_Builder(jint &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvTrackInfo$Builder",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TvTrackInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/tv/TvTrackInfo;"
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setAudioChannelCount(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioChannelCount",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setAudioSampleRate(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioSampleRate",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/tv/TvTrackInfo$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setExtra(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtra",
			"(Landroid/os/Bundle;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setLanguage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setLanguage(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/media/tv/TvTrackInfo$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setVideoActiveFormatDescription(jbyte arg0)
	{
		return __thiz.callObjectMethod(
			"setVideoActiveFormatDescription",
			"(B)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setVideoFrameRate(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setVideoFrameRate",
			"(F)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setVideoHeight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setVideoHeight",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setVideoPixelAspectRatio(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setVideoPixelAspectRatio",
			"(F)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvTrackInfo_Builder::setVideoWidth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setVideoWidth",
			"(I)Landroid/media/tv/TvTrackInfo$Builder;",
			arg0
		);
	}
} // namespace android::media::tv

