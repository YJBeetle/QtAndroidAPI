#pragma once

#ifndef ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE
#define ANDROID_PROVIDER_SETTINGS_NAMEVALUETABLE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}

namespace __jni_impl::android::provider
{
	class Settings_NameValueTable : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject NAME();
		static QAndroidJniObject VALUE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getUriFor(__jni_impl::android::net::Uri arg0, jstring arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Settings_NameValueTable::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Settings_NameValueTable::VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"VALUE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Settings_NameValueTable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$NameValueTable",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Settings_NameValueTable::getUriFor(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$NameValueTable",
			"getUriFor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1);
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

