#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Contacts_Settings.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_Settings::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Settings",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_Settings::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Settings",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_Settings::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Settings",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Settings::SYNC_EVERYTHING()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Settings",
			"SYNC_EVERYTHING",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString Contacts_Settings::getSetting(android::content::ContentResolver arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$Settings",
			"getSetting",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void Contacts_Settings::setSetting(android::content::ContentResolver arg0, JString arg1, JString arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.provider.Contacts$Settings",
			"setSetting",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

