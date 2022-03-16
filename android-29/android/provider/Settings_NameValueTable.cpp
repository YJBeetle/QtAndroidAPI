#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Settings_NameValueTable.hpp"

namespace android::provider
{
	// Fields
	JString Settings_NameValueTable::NAME()
	{
		return getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	JString Settings_NameValueTable::VALUE()
	{
		return getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"VALUE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	Settings_NameValueTable::Settings_NameValueTable()
		: JObject(
			"android.provider.Settings$NameValueTable",
			"()V"
		) {}
	
	// Methods
	android::net::Uri Settings_NameValueTable::getUriFor(android::net::Uri arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Settings$NameValueTable",
			"getUriFor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

