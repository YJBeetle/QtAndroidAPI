#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_ProviderStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DATABASE_CREATION_TIMESTAMP();
		static jstring STATUS();
		static jint STATUS_BUSY();
		static jint STATUS_EMPTY();
		static jint STATUS_NORMAL();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_ProviderStatus::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_ProviderStatus::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_ProviderStatus::DATABASE_CREATION_TIMESTAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"DATABASE_CREATION_TIMESTAMP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_ProviderStatus::STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_ProviderStatus::STATUS_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_BUSY"
		);
	}
	jint ContactsContract_ProviderStatus::STATUS_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_EMPTY"
		);
	}
	jint ContactsContract_ProviderStatus::STATUS_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_NORMAL"
		);
	}
	
	// Constructors
	void ContactsContract_ProviderStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$ProviderStatus",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_ProviderStatus : public __jni_impl::android::provider::ContactsContract_ProviderStatus
	{
	public:
		ContactsContract_ProviderStatus(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_ProviderStatus()
		{
			__constructor();
		}
	};
} // namespace android::provider

