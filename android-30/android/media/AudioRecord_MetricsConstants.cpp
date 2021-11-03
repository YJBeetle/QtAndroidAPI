#include "./AudioRecord_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring AudioRecord_MetricsConstants::CHANNELS()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"CHANNELS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioRecord_MetricsConstants::ENCODING()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"ENCODING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioRecord_MetricsConstants::LATENCY()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"LATENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioRecord_MetricsConstants::SAMPLERATE()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioRecord_MetricsConstants::SOURCE()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	AudioRecord_MetricsConstants::AudioRecord_MetricsConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

