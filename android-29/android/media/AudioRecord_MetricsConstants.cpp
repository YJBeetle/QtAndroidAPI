#include "./AudioRecord_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring AudioRecord_MetricsConstants::CHANNELS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"CHANNELS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioRecord_MetricsConstants::ENCODING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"ENCODING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioRecord_MetricsConstants::LATENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"LATENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioRecord_MetricsConstants::SAMPLERATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioRecord_MetricsConstants::SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	AudioRecord_MetricsConstants::AudioRecord_MetricsConstants(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::media

