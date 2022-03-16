#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./CallLog_Locations.hpp"

namespace android::provider
{
	// Fields
	JString CallLog_Locations::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	JString CallLog_Locations::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString CallLog_Locations::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri CallLog_Locations::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString CallLog_Locations::LATITUDE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"LATITUDE",
			"Ljava/lang/String;"
		);
	}
	JString CallLog_Locations::LONGITUDE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"LONGITUDE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

