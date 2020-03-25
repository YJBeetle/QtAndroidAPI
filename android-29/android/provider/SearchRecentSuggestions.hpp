#pragma once

#ifndef ANDROID_PROVIDER_SEARCHRECENTSUGGESTIONS
#define ANDROID_PROVIDER_SEARCHRECENTSUGGESTIONS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}

namespace __jni_impl::android::provider
{
	class SearchRecentSuggestions : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject QUERIES_PROJECTION_1LINE();
		static QAndroidJniObject QUERIES_PROJECTION_2LINE();
		static jint QUERIES_PROJECTION_DATE_INDEX();
		static jint QUERIES_PROJECTION_DISPLAY1_INDEX();
		static jint QUERIES_PROJECTION_DISPLAY2_INDEX();
		static jint QUERIES_PROJECTION_QUERY_INDEX();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2);
		
		// Methods
		void clearHistory();
		void saveRecentQuery(jstring arg0, jstring arg1);
	};
} // namespace __jni_impl::android::provider

#include "../content/Context.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject SearchRecentSuggestions::QUERIES_PROJECTION_1LINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_1LINE",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject SearchRecentSuggestions::QUERIES_PROJECTION_2LINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_2LINE",
			"[Ljava/lang/String;");
	}
	jint SearchRecentSuggestions::QUERIES_PROJECTION_DATE_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DATE_INDEX");
	}
	jint SearchRecentSuggestions::QUERIES_PROJECTION_DISPLAY1_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DISPLAY1_INDEX");
	}
	jint SearchRecentSuggestions::QUERIES_PROJECTION_DISPLAY2_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_DISPLAY2_INDEX");
	}
	jint SearchRecentSuggestions::QUERIES_PROJECTION_QUERY_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.SearchRecentSuggestions",
			"QUERIES_PROJECTION_QUERY_INDEX");
	}
	
	// Constructors
	void SearchRecentSuggestions::__constructor(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.provider.SearchRecentSuggestions",
			"(Landroid/content/Context;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	
	// Methods
	void SearchRecentSuggestions::clearHistory()
	{
		__thiz.callMethod<void>(
			"clearHistory",
			"()V");
	}
	void SearchRecentSuggestions::saveRecentQuery(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"saveRecentQuery",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class SearchRecentSuggestions : public __jni_impl::android::provider::SearchRecentSuggestions
	{
	public:
		SearchRecentSuggestions(QAndroidJniObject obj) { __thiz = obj; }
		SearchRecentSuggestions(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SEARCHRECENTSUGGESTIONS

