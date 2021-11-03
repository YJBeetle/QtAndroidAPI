#include "./MediaFeature_HdrType.hpp"

namespace android::media
{
	// Fields
	jstring MediaFeature_HdrType::DOLBY_VISION()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"DOLBY_VISION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFeature_HdrType::HDR10()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HDR10",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFeature_HdrType::HDR10_PLUS()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HDR10_PLUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFeature_HdrType::HLG()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HLG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	MediaFeature_HdrType::MediaFeature_HdrType(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

