#include "./AudioTrack_MetricsConstants.hpp"

namespace android::media
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
	
	// QAndroidJniObject forward
	AudioTrack_MetricsConstants::AudioTrack_MetricsConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

