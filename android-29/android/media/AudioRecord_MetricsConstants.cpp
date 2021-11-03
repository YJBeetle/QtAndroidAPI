#include "../../JString.hpp"
#include "./AudioRecord_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	JString AudioRecord_MetricsConstants::CHANNELS()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"CHANNELS",
			"Ljava/lang/String;"
		);
	}
	JString AudioRecord_MetricsConstants::ENCODING()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"ENCODING",
			"Ljava/lang/String;"
		);
	}
	JString AudioRecord_MetricsConstants::LATENCY()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"LATENCY",
			"Ljava/lang/String;"
		);
	}
	JString AudioRecord_MetricsConstants::SAMPLERATE()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;"
		);
	}
	JString AudioRecord_MetricsConstants::SOURCE()
	{
		return getStaticObjectField(
			"android.media.AudioRecord$MetricsConstants",
			"SOURCE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	AudioRecord_MetricsConstants::AudioRecord_MetricsConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

