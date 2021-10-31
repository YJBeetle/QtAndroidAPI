#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "./SearchRecentSuggestionsProvider.hpp"

namespace android::content
{
	// Fields
	jint SearchRecentSuggestionsProvider::DATABASE_MODE_2LINES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.SearchRecentSuggestionsProvider",
			"DATABASE_MODE_2LINES"
		);
	}
	jint SearchRecentSuggestionsProvider::DATABASE_MODE_QUERIES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.SearchRecentSuggestionsProvider",
			"DATABASE_MODE_QUERIES"
		);
	}
	
	SearchRecentSuggestionsProvider::SearchRecentSuggestionsProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SearchRecentSuggestionsProvider::SearchRecentSuggestionsProvider()
	{
		__thiz = QAndroidJniObject(
			"android.content.SearchRecentSuggestionsProvider",
			"()V"
		);
	}
	
	// Methods
	jint SearchRecentSuggestionsProvider::_delete(android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jstring SearchRecentSuggestionsProvider::getType(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject SearchRecentSuggestionsProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean SearchRecentSuggestionsProvider::onCreate()
	{
		return __thiz.callMethod<jboolean>(
			"onCreate",
			"()Z"
		);
	}
	QAndroidJniObject SearchRecentSuggestionsProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint SearchRecentSuggestionsProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
} // namespace android::content

