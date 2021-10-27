#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_DisplayPhoto : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_MAX_DIMENSIONS_URI();
		static QAndroidJniObject CONTENT_URI();
		static jstring DISPLAY_MAX_DIM();
		static jstring THUMBNAIL_MAX_DIM();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_DisplayPhoto::CONTENT_MAX_DIMENSIONS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"CONTENT_MAX_DIMENSIONS_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_DisplayPhoto::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_DisplayPhoto::DISPLAY_MAX_DIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"DISPLAY_MAX_DIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_DisplayPhoto::THUMBNAIL_MAX_DIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DisplayPhoto",
			"THUMBNAIL_MAX_DIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_DisplayPhoto::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$DisplayPhoto",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_DisplayPhoto : public __jni_impl::android::provider::ContactsContract_DisplayPhoto
	{
	public:
		ContactsContract_DisplayPhoto(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_DisplayPhoto()
		{
			__constructor();
		}
	};
} // namespace android::provider

