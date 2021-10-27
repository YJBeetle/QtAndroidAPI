#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ContentProvider.hpp"

namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::content
{
	class SearchRecentSuggestionsProvider : public __jni_impl::android::content::ContentProvider
	{
	public:
		// Fields
		static jint DATABASE_MODE_2LINES();
		static jint DATABASE_MODE_QUERIES();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint _delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2);
		jint _delete(__jni_impl::android::net::Uri arg0, const QString &arg1, jarray arg2);
		jstring getType(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1);
		jboolean onCreate();
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4);
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3);
	};
} // namespace __jni_impl::android::content

#include "./ContentValues.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::content
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
	
	// Constructors
	void SearchRecentSuggestionsProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.SearchRecentSuggestionsProvider",
			"()V"
		);
	}
	
	// Methods
	jint SearchRecentSuggestionsProvider::_delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint SearchRecentSuggestionsProvider::_delete(__jni_impl::android::net::Uri arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jstring SearchRecentSuggestionsProvider::getType(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject SearchRecentSuggestionsProvider::insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
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
	QAndroidJniObject SearchRecentSuggestionsProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
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
	QAndroidJniObject SearchRecentSuggestionsProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	jint SearchRecentSuggestionsProvider::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3)
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
	jint SearchRecentSuggestionsProvider::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class SearchRecentSuggestionsProvider : public __jni_impl::android::content::SearchRecentSuggestionsProvider
	{
	public:
		SearchRecentSuggestionsProvider(QAndroidJniObject obj) { __thiz = obj; }
		SearchRecentSuggestionsProvider()
		{
			__constructor();
		}
	};
} // namespace android::content

