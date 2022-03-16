#include "../../JString.hpp"
#include "./Settings_Panel.hpp"

namespace android::provider
{
	// Fields
	JString Settings_Panel::ACTION_INTERNET_CONNECTIVITY()
	{
		return getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_INTERNET_CONNECTIVITY",
			"Ljava/lang/String;"
		);
	}
	JString Settings_Panel::ACTION_NFC()
	{
		return getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_NFC",
			"Ljava/lang/String;"
		);
	}
	JString Settings_Panel::ACTION_VOLUME()
	{
		return getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_VOLUME",
			"Ljava/lang/String;"
		);
	}
	JString Settings_Panel::ACTION_WIFI()
	{
		return getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_WIFI",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

