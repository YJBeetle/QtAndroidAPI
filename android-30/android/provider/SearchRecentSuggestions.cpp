#include "../../JArray.hpp"
#include "../content/ContentResolver.hpp"
#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./SearchRecentSuggestions.hpp"

namespace android::provider
{
	// Fields
	JArray SearchRecentSuggestions::QUERIES_PROJECTION_1LINE()
	{
		return getStaticObjectField(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_1LINE",
			"[Ljava/lang/String;"
		);
	}
	JArray SearchRecentSuggestions::QUERIES_PROJECTION_2LINE()
	{
		return getStaticObjectField(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_2LINE",
			"[Ljava/lang/String;"
		);
	}
	jint SearchRecentSuggestions::QUERIES_PROJECTION_DATE_INDEX()
	{
		return getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DATE_INDEX"
		);
	}
	jint SearchRecentSuggestions::QUERIES_PROJECTION_DISPLAY1_INDEX()
	{
		return getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DISPLAY1_INDEX"
		);
	}
	jint SearchRecentSuggestions::QUERIES_PROJECTION_DISPLAY2_INDEX()
	{
		return getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DISPLAY2_INDEX"
		);
	}
	jint SearchRecentSuggestions::QUERIES_PROJECTION_QUERY_INDEX()
	{
		return getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_QUERY_INDEX"
		);
	}
	
	// Constructors
	SearchRecentSuggestions::SearchRecentSuggestions(android::content::Context arg0, JString arg1, jint arg2)
		: JObject(
			"android.provider.SearchRecentSuggestions",
			"(Landroid/content/Context;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	void SearchRecentSuggestions::clearHistory() const
	{
		callMethod<void>(
			"clearHistory",
			"()V"
		);
	}
	void SearchRecentSuggestions::saveRecentQuery(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"saveRecentQuery",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

