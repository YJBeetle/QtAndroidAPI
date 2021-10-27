#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::tv
{
	class TvTrackInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media::tv
{
	class TvTrackInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jstring arg1);
		void __constructor(jint arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAudioChannelCount(jint arg0);
		QAndroidJniObject setAudioSampleRate(jint arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setExtra(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setLanguage(jstring arg0);
		QAndroidJniObject setLanguage(const QString &arg0);
		QAndroidJniObject setVideoActiveFormatDescription(jbyte arg0);
		QAndroidJniObject setVideoFrameRate(jfloat arg0);
		QAndroidJniObject setVideoHeight(jint arg0);
		QAndroidJniObject setVideoPixelAspectRatio(jfloat arg0);
		QAndroidJniObject setVideoWidth(jint arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "TvTrackInfo.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvTrackInfo_Builder::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvTrackInfo$Builder",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void TvTrackInfo_Builder::__constructor(jint arg0, const QString &arg1)
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
	QAndroidJniObject TvTrackInfo_Builder::setExtra(__jni_impl::android::os::Bundle arg0)
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
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvTrackInfo_Builder : public __jni_impl::android::media::tv::TvTrackInfo_Builder
	{
	public:
		TvTrackInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TvTrackInfo_Builder(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::tv

