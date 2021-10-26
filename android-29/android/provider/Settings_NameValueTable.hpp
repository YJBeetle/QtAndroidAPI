#pragma once

#ifndef ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE
#define ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Settings_NameValueTable : public __JniBaseClass
	{
	public:
		// Fields
		static jstring NAME();
		static jstring VALUE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getUriFor(__jni_impl::android::net::Uri arg0, jstring arg1);
		static QAndroidJniObject getUriFor(__jni_impl::android::net::Uri arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Settings_NameValueTable::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_NameValueTable::VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Settings_NameValueTable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$NameValueTable",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Settings_NameValueTable::getUriFor(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$NameValueTable",
			"getUriFor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Settings_NameValueTable::getUriFor(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$NameValueTable",
			"getUriFor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Settings_NameValueTable : public __jni_impl::android::provider::Settings_NameValueTable
	{
	public:
		Settings_NameValueTable(QAndroidJniObject obj) { __thiz = obj; }
		Settings_NameValueTable()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE

