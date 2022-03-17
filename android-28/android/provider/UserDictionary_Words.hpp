#pragma once

#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./UserDictionary_Words.def.hpp"

namespace android::provider
{
	// Fields
	inline JString UserDictionary_Words::APP_ID()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"APP_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString UserDictionary_Words::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString UserDictionary_Words::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri UserDictionary_Words::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString UserDictionary_Words::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString UserDictionary_Words::FREQUENCY()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"FREQUENCY",
			"Ljava/lang/String;"
		);
	}
	inline JString UserDictionary_Words::LOCALE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"LOCALE",
			"Ljava/lang/String;"
		);
	}
	inline jint UserDictionary_Words::LOCALE_TYPE_ALL()
	{
		return getStaticField<jint>(
			"android.provider.UserDictionary$Words",
			"LOCALE_TYPE_ALL"
		);
	}
	inline jint UserDictionary_Words::LOCALE_TYPE_CURRENT()
	{
		return getStaticField<jint>(
			"android.provider.UserDictionary$Words",
			"LOCALE_TYPE_CURRENT"
		);
	}
	inline JString UserDictionary_Words::SHORTCUT()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"SHORTCUT",
			"Ljava/lang/String;"
		);
	}
	inline JString UserDictionary_Words::WORD()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"WORD",
			"Ljava/lang/String;"
		);
	}
	inline JString UserDictionary_Words::_ID()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline UserDictionary_Words::UserDictionary_Words()
		: JObject(
			"android.provider.UserDictionary$Words",
			"()V"
		) {}
	
	// Methods
	inline void UserDictionary_Words::addWord(android::content::Context arg0, JString arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;II)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline void UserDictionary_Words::addWord(android::content::Context arg0, JString arg1, jint arg2, JString arg3, java::util::Locale arg4)
	{
		callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>(),
			arg4.object()
		);
	}
} // namespace android::provider

// Base class headers

