#include "../../JString.hpp"
#include "./MediaFeature_HdrType.hpp"

namespace android::media
{
	// Fields
	JString MediaFeature_HdrType::DOLBY_VISION()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"DOLBY_VISION",
			"Ljava/lang/String;"
		);
	}
	JString MediaFeature_HdrType::HDR10()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HDR10",
			"Ljava/lang/String;"
		);
	}
	JString MediaFeature_HdrType::HDR10_PLUS()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HDR10_PLUS",
			"Ljava/lang/String;"
		);
	}
	JString MediaFeature_HdrType::HLG()
	{
		return getStaticObjectField(
			"android.media.MediaFeature$HdrType",
			"HLG",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

