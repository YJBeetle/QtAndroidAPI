#include "../net/Uri.hpp"
#include "./CallLog_Locations.hpp"

namespace android::provider
{
	// Fields
	jstring CallLog_Locations::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Locations::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Locations::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CallLog_Locations::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CallLog_Locations::LATITUDE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"LATITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Locations::LONGITUDE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Locations",
			"LONGITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	CallLog_Locations::CallLog_Locations(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

