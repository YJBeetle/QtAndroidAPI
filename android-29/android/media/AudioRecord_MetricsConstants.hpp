#pragma once

#ifndef ANDROID_MEDIA_AUDIORECORD_METRICSCONSTANTS
#define ANDROID_MEDIA_AUDIORECORD_METRICSCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class AudioRecord_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CHANNELS();
		static QAndroidJniObject ENCODING();
		static QAndroidJniObject LATENCY();
		static QAndroidJniObject SAMPLERATE();
		static QAndroidJniObject SOURCE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject AudioRecord_MetricsConstants::CHANNELS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"CHANNELS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AudioRecord_MetricsConstants::ENCODING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"ENCODING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AudioRecord_MetricsConstants::LATENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"LATENCY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AudioRecord_MetricsConstants::SAMPLERATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AudioRecord_MetricsConstants::SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SOURCE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void AudioRecord_MetricsConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioRecord$MetricsConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioRecord_MetricsConstants : public __jni_impl::android::media::AudioRecord_MetricsConstants
	{
	public:
		AudioRecord_MetricsConstants(QAndroidJniObject obj) { __thiz = obj; }
		AudioRecord_MetricsConstants()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIORECORD_METRICSCONSTANTS

