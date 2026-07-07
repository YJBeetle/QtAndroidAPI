#pragma once

#include "../../JString.hpp"
#include "./Contacts_Intents.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_Intents::ATTACH_IMAGE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents",
			"ATTACH_IMAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents::EXTRA_CREATE_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents",
			"EXTRA_CREATE_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents::EXTRA_FORCE_CREATE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents",
			"EXTRA_FORCE_CREATE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents::SEARCH_SUGGESTION_CLICKED()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_CLICKED",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents::SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents::SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents::SHOW_OR_CREATE_CONTACT()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SHOW_OR_CREATE_CONTACT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Contacts_Intents::Contacts_Intents()
		: JObject(
			"android.provider.Contacts$Intents",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
