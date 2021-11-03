#include "../content/ContentResolver.hpp"
#include "../content/Context.hpp"
#include "./SearchRecentSuggestions.hpp"

namespace android::provider
{
	// Fields
	jarray SearchRecentSuggestions::QUERIES_PROJECTION_1LINE()
	{
		return getStaticObjectField(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_1LINE",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SearchRecentSuggestions::QUERIES_PROJECTION_2LINE()
	{
		return getStaticObjectField(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_2LINE",
			"[Ljava/lang/String;"
		).object<jarray>();
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
	
	// QJniObject forward
	SearchRecentSuggestions::SearchRecentSuggestions(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SearchRecentSuggestions::SearchRecentSuggestions(android::content::Context arg0, jstring arg1, jint arg2)
		: JObject(
			"android.provider.SearchRecentSuggestions",
			"(Landroid/content/Context;Ljava/lang/String;I)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	void SearchRecentSuggestions::clearHistory()
	{
		callMethod<void>(
			"clearHistory",
			"()V"
		);
	}
	void SearchRecentSuggestions::saveRecentQuery(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"saveRecentQuery",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::provider

