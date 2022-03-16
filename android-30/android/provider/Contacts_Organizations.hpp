#pragma once

#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Contacts_Organizations.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_Organizations::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_Organizations::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_Organizations::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Organizations",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString Contacts_Organizations::getDisplayLabel(android::content::Context arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$Organizations",
			"getDisplayLabel",
			"(Landroid/content/Context;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

