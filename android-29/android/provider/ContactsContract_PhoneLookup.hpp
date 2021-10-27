#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_PhoneLookup : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_FILTER_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_FILTER_URI();
		static jstring QUERY_PARAMETER_SIP_ADDRESS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_PhoneLookup::CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_PhoneLookup::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_PhoneLookup::QUERY_PARAMETER_SIP_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"QUERY_PARAMETER_SIP_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_PhoneLookup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$PhoneLookup",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_PhoneLookup : public __jni_impl::android::provider::ContactsContract_PhoneLookup
	{
	public:
		ContactsContract_PhoneLookup(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_PhoneLookup()
		{
			__constructor();
		}
	};
} // namespace android::provider

