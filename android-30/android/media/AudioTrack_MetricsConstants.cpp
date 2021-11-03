#include "../../JString.hpp"
#include "./AudioTrack_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	JString AudioTrack_MetricsConstants::CHANNELMASK()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"CHANNELMASK",
			"Ljava/lang/String;"
		);
	}
	JString AudioTrack_MetricsConstants::CONTENTTYPE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"CONTENTTYPE",
			"Ljava/lang/String;"
		);
	}
	JString AudioTrack_MetricsConstants::SAMPLERATE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;"
		);
	}
	JString AudioTrack_MetricsConstants::STREAMTYPE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"STREAMTYPE",
			"Ljava/lang/String;"
		);
	}
	JString AudioTrack_MetricsConstants::USAGE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"USAGE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	AudioTrack_MetricsConstants::AudioTrack_MetricsConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

