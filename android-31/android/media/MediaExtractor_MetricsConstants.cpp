#include "../../JString.hpp"
#include "./MediaExtractor_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	JString MediaExtractor_MetricsConstants::FORMAT()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"FORMAT",
			"Ljava/lang/String;"
		);
	}
	JString MediaExtractor_MetricsConstants::MIME_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString MediaExtractor_MetricsConstants::TRACKS()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"TRACKS",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	MediaExtractor_MetricsConstants::MediaExtractor_MetricsConstants(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

