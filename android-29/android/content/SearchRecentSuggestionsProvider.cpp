#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "./SearchRecentSuggestionsProvider.hpp"

namespace android::content
{
	// Fields
	jint SearchRecentSuggestionsProvider::DATABASE_MODE_2LINES()
	{
		return getStaticField<jint>(
			"android.content.SearchRecentSuggestionsProvider",
			"DATABASE_MODE_2LINES"
		);
	}
	jint SearchRecentSuggestionsProvider::DATABASE_MODE_QUERIES()
	{
		return getStaticField<jint>(
			"android.content.SearchRecentSuggestionsProvider",
			"DATABASE_MODE_QUERIES"
		);
	}
	
	// QJniObject forward
	SearchRecentSuggestionsProvider::SearchRecentSuggestionsProvider(QJniObject obj) : android::content::ContentProvider(obj) {}
	
	// Constructors
	SearchRecentSuggestionsProvider::SearchRecentSuggestionsProvider()
		: android::content::ContentProvider(
			"android.content.SearchRecentSuggestionsProvider",
			"()V"
		) {}
	
	// Methods
	jint SearchRecentSuggestionsProvider::_delete(android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring SearchRecentSuggestionsProvider::getType(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	android::net::Uri SearchRecentSuggestionsProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean SearchRecentSuggestionsProvider::onCreate()
	{
		return callMethod<jboolean>(
			"onCreate",
			"()Z"
		);
	}
	__JniBaseClass SearchRecentSuggestionsProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint SearchRecentSuggestionsProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::content

