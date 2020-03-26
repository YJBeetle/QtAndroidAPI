#pragma once

#ifndef ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS
#define ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class AudioTrack_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CHANNELMASK();
		static jstring CONTENTTYPE();
		static jstring SAMPLERATE();
		static jstring STREAMTYPE();
		static jstring USAGE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jstring AudioTrack_MetricsConstants::CHANNELMASK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"CHANNELMASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioTrack_MetricsConstants::CONTENTTYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"CONTENTTYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioTrack_MetricsConstants::SAMPLERATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioTrack_MetricsConstants::STREAMTYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"STREAMTYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioTrack_MetricsConstants::USAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void AudioTrack_MetricsConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTrack$MetricsConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioTrack_MetricsConstants : public __jni_impl::android::media::AudioTrack_MetricsConstants
	{
	public:
		AudioTrack_MetricsConstants(QAndroidJniObject obj) { __thiz = obj; }
		AudioTrack_MetricsConstants()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOTRACK_METRICSCONSTANTS

