#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::provider
{
	class UserDictionary_Words : public __JniBaseClass
	{
	public:
		// Fields
		static jstring APP_ID();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring FREQUENCY();
		static jstring LOCALE();
		static jint LOCALE_TYPE_ALL();
		static jint LOCALE_TYPE_CURRENT();
		static jstring SHORTCUT();
		static jstring WORD();
		static jstring _ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void addWord(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jint arg3);
		static void addWord(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2, jint arg3);
		static void addWord(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::java::util::Locale arg4);
		static void addWord(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2, const QString &arg3, __jni_impl::java::util::Locale arg4);
	};
} // namespace __jni_impl::android::provider

#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring UserDictionary_Words::APP_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"APP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject UserDictionary_Words::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring UserDictionary_Words::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::FREQUENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"FREQUENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::LOCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"LOCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint UserDictionary_Words::LOCALE_TYPE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.UserDictionary$Words",
			"LOCALE_TYPE_ALL"
		);
	}
	jint UserDictionary_Words::LOCALE_TYPE_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.UserDictionary$Words",
			"LOCALE_TYPE_CURRENT"
		);
	}
	jstring UserDictionary_Words::SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::WORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"WORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void UserDictionary_Words::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.UserDictionary$Words",
			"()V"
		);
	}
	
	// Methods
	void UserDictionary_Words::addWord(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void UserDictionary_Words::addWord(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;II)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	void UserDictionary_Words::addWord(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::java::util::Locale arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void UserDictionary_Words::addWord(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2, const QString &arg3, __jni_impl::java::util::Locale arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class UserDictionary_Words : public __jni_impl::android::provider::UserDictionary_Words
	{
	public:
		UserDictionary_Words(QAndroidJniObject obj) { __thiz = obj; }
		UserDictionary_Words()
		{
			__constructor();
		}
	};
} // namespace android::provider

