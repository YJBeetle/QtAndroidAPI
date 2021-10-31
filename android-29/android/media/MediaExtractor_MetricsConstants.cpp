#include "./MediaExtractor_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring MediaExtractor_MetricsConstants::FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaExtractor_MetricsConstants::MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaExtractor_MetricsConstants::TRACKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"TRACKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	MediaExtractor_MetricsConstants::MediaExtractor_MetricsConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

