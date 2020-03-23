#pragma once

#ifndef ANDROID_MEDIA_MEDIACODEC_METRICSCONSTANTS
#define ANDROID_MEDIA_MEDIACODEC_METRICSCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaCodec_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CODEC();
		static QAndroidJniObject ENCODER();
		static QAndroidJniObject HEIGHT();
		static QAndroidJniObject MIME_TYPE();
		static QAndroidJniObject MODE();
		static QAndroidJniObject MODE_AUDIO();
		static QAndroidJniObject MODE_VIDEO();
		static QAndroidJniObject ROTATION();
		static QAndroidJniObject SECURE();
		static QAndroidJniObject WIDTH();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject MediaCodec_MetricsConstants::CODEC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"CODEC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::ENCODER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ENCODER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::MODE_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_AUDIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::MODE_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_VIDEO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"SECURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodec_MetricsConstants::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MediaCodec_MetricsConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$MetricsConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodec_MetricsConstants : public __jni_impl::android::media::MediaCodec_MetricsConstants
	{
	public:
		MediaCodec_MetricsConstants(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodec_MetricsConstants()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODEC_METRICSCONSTANTS

