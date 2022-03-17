#pragma once

#include "../../JString.hpp"
#include "./ContactsContract_SearchSnippets.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_SearchSnippets::DEFERRED_SNIPPETING_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SearchSnippets",
			"DEFERRED_SNIPPETING_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_SearchSnippets::SNIPPET()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SearchSnippets",
			"SNIPPET",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ContactsContract_SearchSnippets::ContactsContract_SearchSnippets()
		: JObject(
			"android.provider.ContactsContract$SearchSnippets",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
