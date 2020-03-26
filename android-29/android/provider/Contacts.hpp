#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS
#define ANDROID_PROVIDER_CONTACTS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Contacts : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		static jint KIND_EMAIL();
		static jint KIND_IM();
		static jint KIND_ORGANIZATION();
		static jint KIND_PHONE();
		static jint KIND_POSTAL();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Contacts::KIND_EMAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_EMAIL"
		);
	}
	jint Contacts::KIND_IM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_IM"
		);
	}
	jint Contacts::KIND_ORGANIZATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_ORGANIZATION"
		);
	}
	jint Contacts::KIND_PHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_PHONE"
		);
	}
	jint Contacts::KIND_POSTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_POSTAL"
		);
	}
	
	// Constructors
	void Contacts::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts : public __jni_impl::android::provider::Contacts
	{
	public:
		Contacts(QAndroidJniObject obj) { __thiz = obj; }
		Contacts()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS

