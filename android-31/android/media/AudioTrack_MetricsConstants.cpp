#include "./AudioTrack_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring AudioTrack_MetricsConstants::CHANNELMASK()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"CHANNELMASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioTrack_MetricsConstants::CONTENTTYPE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"CONTENTTYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioTrack_MetricsConstants::SAMPLERATE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"SAMPLERATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioTrack_MetricsConstants::STREAMTYPE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"STREAMTYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioTrack_MetricsConstants::USAGE()
	{
		return getStaticObjectField(
			"android.media.AudioTrack$MetricsConstants",
			"USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	AudioTrack_MetricsConstants::AudioTrack_MetricsConstants(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

