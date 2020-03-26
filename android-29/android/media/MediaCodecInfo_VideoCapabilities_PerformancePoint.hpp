#pragma once

#ifndef ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES_PERFORMANCEPOINT
#define ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES_PERFORMANCEPOINT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaFormat;
}

namespace __jni_impl::android::media
{
	class MediaCodecInfo_VideoCapabilities_PerformancePoint : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject FHD_100();
		static QAndroidJniObject FHD_120();
		static QAndroidJniObject FHD_200();
		static QAndroidJniObject FHD_24();
		static QAndroidJniObject FHD_240();
		static QAndroidJniObject FHD_25();
		static QAndroidJniObject FHD_30();
		static QAndroidJniObject FHD_50();
		static QAndroidJniObject FHD_60();
		static QAndroidJniObject HD_100();
		static QAndroidJniObject HD_120();
		static QAndroidJniObject HD_200();
		static QAndroidJniObject HD_24();
		static QAndroidJniObject HD_240();
		static QAndroidJniObject HD_25();
		static QAndroidJniObject HD_30();
		static QAndroidJniObject HD_50();
		static QAndroidJniObject HD_60();
		static QAndroidJniObject SD_24();
		static QAndroidJniObject SD_25();
		static QAndroidJniObject SD_30();
		static QAndroidJniObject SD_48();
		static QAndroidJniObject SD_50();
		static QAndroidJniObject SD_60();
		static QAndroidJniObject UHD_100();
		static QAndroidJniObject UHD_120();
		static QAndroidJniObject UHD_200();
		static QAndroidJniObject UHD_24();
		static QAndroidJniObject UHD_240();
		static QAndroidJniObject UHD_25();
		static QAndroidJniObject UHD_30();
		static QAndroidJniObject UHD_50();
		static QAndroidJniObject UHD_60();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jboolean covers(__jni_impl::android::media::MediaFormat arg0);
		jboolean covers(__jni_impl::android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint arg0);
	};
} // namespace __jni_impl::android::media

#include "MediaFormat.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_100()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_100",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_120()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_120",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_200()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_200",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_24()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_24",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_240()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_240",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_25()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_25",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_30()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_30",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_50()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_50",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::FHD_60()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"FHD_60",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_100()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_100",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_120()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_120",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_200()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_200",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_24()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_24",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_240()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_240",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_25()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_25",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_30()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_30",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_50()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_50",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::HD_60()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"HD_60",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::SD_24()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"SD_24",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::SD_25()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"SD_25",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::SD_30()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"SD_30",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::SD_48()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"SD_48",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::SD_50()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"SD_50",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::SD_60()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"SD_60",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_100()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_100",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_120()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_120",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_200()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_200",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_24()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_24",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_240()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_240",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_25()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_25",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_30()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_30",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_50()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_50",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities_PerformancePoint::UHD_60()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"UHD_60",
			"Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;"
		);
	}
	
	// Constructors
	void MediaCodecInfo_VideoCapabilities_PerformancePoint::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodecInfo$VideoCapabilities$PerformancePoint",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean MediaCodecInfo_VideoCapabilities_PerformancePoint::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MediaCodecInfo_VideoCapabilities_PerformancePoint::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaCodecInfo_VideoCapabilities_PerformancePoint::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MediaCodecInfo_VideoCapabilities_PerformancePoint::covers(__jni_impl::android::media::MediaFormat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"covers",
			"(Landroid/media/MediaFormat;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean MediaCodecInfo_VideoCapabilities_PerformancePoint::covers(__jni_impl::android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"covers",
			"(Landroid/media/MediaCodecInfo$VideoCapabilities$PerformancePoint;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodecInfo_VideoCapabilities_PerformancePoint : public __jni_impl::android::media::MediaCodecInfo_VideoCapabilities_PerformancePoint
	{
	public:
		MediaCodecInfo_VideoCapabilities_PerformancePoint(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodecInfo_VideoCapabilities_PerformancePoint(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODECINFO_VIDEOCAPABILITIES_PERFORMANCEPOINT

