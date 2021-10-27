#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_Groups : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_SUMMARY_URI();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newEntityIterator(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_Groups::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_Groups::CONTENT_SUMMARY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_SUMMARY_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_Groups::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_Groups::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void ContactsContract_Groups::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Groups",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ContactsContract_Groups::newEntityIterator(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$Groups",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Groups : public __jni_impl::android::provider::ContactsContract_Groups
	{
	public:
		ContactsContract_Groups(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Groups()
		{
			__constructor();
		}
	};
} // namespace android::provider

