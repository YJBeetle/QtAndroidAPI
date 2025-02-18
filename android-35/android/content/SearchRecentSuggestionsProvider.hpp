#pragma once

#include "../../JArray.hpp"
#include "./ContentValues.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./SearchRecentSuggestionsProvider.def.hpp"

namespace android::content
{
	// Fields
	inline jint SearchRecentSuggestionsProvider::DATABASE_MODE_2LINES()
	{
		return getStaticField<jint>(
			"android.content.SearchRecentSuggestionsProvider",
			"DATABASE_MODE_2LINES"
		);
	}
	inline jint SearchRecentSuggestionsProvider::DATABASE_MODE_QUERIES()
	{
		return getStaticField<jint>(
			"android.content.SearchRecentSuggestionsProvider",
			"DATABASE_MODE_QUERIES"
		);
	}
	
	// Constructors
	inline SearchRecentSuggestionsProvider::SearchRecentSuggestionsProvider()
		: android::content::ContentProvider(
			"android.content.SearchRecentSuggestionsProvider",
			"()V"
		) {}
	
	// Methods
	inline jint SearchRecentSuggestionsProvider::delete_(android::net::Uri arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline JString SearchRecentSuggestionsProvider::getType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::net::Uri SearchRecentSuggestionsProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean SearchRecentSuggestionsProvider::onCreate() const
	{
		return callMethod<jboolean>(
			"onCreate",
			"()Z"
		);
	}
	inline JObject SearchRecentSuggestionsProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>()
		);
	}
	inline jint SearchRecentSuggestionsProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
} // namespace android::content

// Base class headers
#include "./ContentProvider.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
