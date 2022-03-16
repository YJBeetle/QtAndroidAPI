#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Settings_NameValueTable.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Settings_NameValueTable::NAME()
	{
		return getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_NameValueTable::VALUE()
	{
		return getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"VALUE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Settings_NameValueTable::Settings_NameValueTable()
		: JObject(
			"android.provider.Settings$NameValueTable",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri Settings_NameValueTable::getUriFor(android::net::Uri arg0, JString arg1)
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

// Base class headers

