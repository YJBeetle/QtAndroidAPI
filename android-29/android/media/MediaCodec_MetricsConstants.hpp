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
		static jstring CODEC();
		static jstring ENCODER();
		static jstring HEIGHT();
		static jstring MIME_TYPE();
		static jstring MODE();
		static jstring MODE_AUDIO();
		static jstring MODE_VIDEO();
		static jstring ROTATION();
		static jstring SECURE();
		static jstring WIDTH();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jstring MediaCodec_MetricsConstants::CODEC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"CODEC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::ENCODER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ENCODER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
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

