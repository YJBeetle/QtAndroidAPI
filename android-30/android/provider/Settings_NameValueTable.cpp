#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./Settings_NameValueTable.hpp"

namespace android::provider
{
	// Fields
	jstring Settings_NameValueTable::NAME()
	{
		return getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_NameValueTable::VALUE()
	{
		return getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Settings_NameValueTable::Settings_NameValueTable(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Settings_NameValueTable::Settings_NameValueTable()
		: __JniBaseClass(
			"android.provider.Settings$NameValueTable",
			"()V"
		) {}
	
	// Methods
	android::net::Uri Settings_NameValueTable::getUriFor(android::net::Uri arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Settings$NameValueTable",
			"getUriFor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

