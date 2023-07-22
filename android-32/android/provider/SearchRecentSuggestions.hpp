#pragma once

#include "../../JArray.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./SearchRecentSuggestions.def.hpp"

namespace android::provider
{
	// Fields
	inline JArray SearchRecentSuggestions::QUERIES_PROJECTION_1LINE()
	{
		return getStaticObjectField(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_1LINE",
			"[Ljava/lang/String;"
		);
	}
	inline JArray SearchRecentSuggestions::QUERIES_PROJECTION_2LINE()
	{
		return getStaticObjectField(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_2LINE",
			"[Ljava/lang/String;"
		);
	}
	inline jint SearchRecentSuggestions::QUERIES_PROJECTION_DATE_INDEX()
	{
		return getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DATE_INDEX"
		);
	}
	inline jint SearchRecentSuggestions::QUERIES_PROJECTION_DISPLAY1_INDEX()
	{
		return getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DISPLAY1_INDEX"
		);
	}
	inline jint SearchRecentSuggestions::QUERIES_PROJECTION_DISPLAY2_INDEX()
	{
		return getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DISPLAY2_INDEX"
		);
	}
	inline jint SearchRecentSuggestions::QUERIES_PROJECTION_QUERY_INDEX()
	{
		return getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_QUERY_INDEX"
		);
	}
	
	// Constructors
	inline SearchRecentSuggestions::SearchRecentSuggestions(android::content::Context arg0, JString arg1, jint arg2)
		: JObject(
			"android.provider.SearchRecentSuggestions",
			"(Landroid/content/Context;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline void SearchRecentSuggestions::clearHistory() const
	{
		callMethod<void>(
			"clearHistory",
			"()V"
		);
	}
	inline void SearchRecentSuggestions::saveRecentQuery(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"saveRecentQuery",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
