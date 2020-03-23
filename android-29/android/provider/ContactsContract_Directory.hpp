#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_DIRECTORY
#define ANDROID_PROVIDER_CONTACTSCONTRACT_DIRECTORY

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
	class ContactsContract_Directory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACCOUNT_NAME();
		static QAndroidJniObject ACCOUNT_TYPE();
		static QAndroidJniObject CALLER_PACKAGE_PARAM_KEY();
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jlong DEFAULT();
		static QAndroidJniObject DIRECTORY_AUTHORITY();
		static QAndroidJniObject DISPLAY_NAME();
		static QAndroidJniObject ENTERPRISE_CONTENT_URI();
		static jlong ENTERPRISE_DEFAULT();
		static jlong ENTERPRISE_LOCAL_INVISIBLE();
		static QAndroidJniObject EXPORT_SUPPORT();
		static jint EXPORT_SUPPORT_ANY_ACCOUNT();
		static jint EXPORT_SUPPORT_NONE();
		static jint EXPORT_SUPPORT_SAME_ACCOUNT_ONLY();
		static jlong LOCAL_INVISIBLE();
		static QAndroidJniObject PACKAGE_NAME();
		static QAndroidJniObject PHOTO_SUPPORT();
		static jint PHOTO_SUPPORT_FULL();
		static jint PHOTO_SUPPORT_FULL_SIZE_ONLY();
		static jint PHOTO_SUPPORT_NONE();
		static jint PHOTO_SUPPORT_THUMBNAIL_ONLY();
		static QAndroidJniObject SHORTCUT_SUPPORT();
		static jint SHORTCUT_SUPPORT_DATA_ITEMS_ONLY();
		static jint SHORTCUT_SUPPORT_FULL();
		static jint SHORTCUT_SUPPORT_NONE();
		static QAndroidJniObject TYPE_RESOURCE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isRemoteDirectoryId(jlong arg0);
		static jboolean isEnterpriseDirectoryId(jlong arg0);
		static void notifyDirectoryChange(__jni_impl::android::content::ContentResolver arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_Directory::ACCOUNT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ACCOUNT_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Directory::ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ACCOUNT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Directory::CALLER_PACKAGE_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CALLER_PACKAGE_PARAM_KEY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Directory::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Directory::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Directory::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	jlong ContactsContract_Directory::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"DEFAULT");
	}
	QAndroidJniObject ContactsContract_Directory::DIRECTORY_AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"DIRECTORY_AUTHORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Directory::DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"DISPLAY_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Directory::ENTERPRISE_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	jlong ContactsContract_Directory::ENTERPRISE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_DEFAULT");
	}
	jlong ContactsContract_Directory::ENTERPRISE_LOCAL_INVISIBLE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_LOCAL_INVISIBLE");
	}
	QAndroidJniObject ContactsContract_Directory::EXPORT_SUPPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT",
			"Ljava/lang/String;");
	}
	jint ContactsContract_Directory::EXPORT_SUPPORT_ANY_ACCOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_ANY_ACCOUNT");
	}
	jint ContactsContract_Directory::EXPORT_SUPPORT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_NONE");
	}
	jint ContactsContract_Directory::EXPORT_SUPPORT_SAME_ACCOUNT_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_SAME_ACCOUNT_ONLY");
	}
	jlong ContactsContract_Directory::LOCAL_INVISIBLE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"LOCAL_INVISIBLE");
	}
	QAndroidJniObject ContactsContract_Directory::PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"PACKAGE_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Directory::PHOTO_SUPPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT",
			"Ljava/lang/String;");
	}
	jint ContactsContract_Directory::PHOTO_SUPPORT_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_FULL");
	}
	jint ContactsContract_Directory::PHOTO_SUPPORT_FULL_SIZE_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_FULL_SIZE_ONLY");
	}
	jint ContactsContract_Directory::PHOTO_SUPPORT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_NONE");
	}
	jint ContactsContract_Directory::PHOTO_SUPPORT_THUMBNAIL_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_THUMBNAIL_ONLY");
	}
	QAndroidJniObject ContactsContract_Directory::SHORTCUT_SUPPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT",
			"Ljava/lang/String;");
	}
	jint ContactsContract_Directory::SHORTCUT_SUPPORT_DATA_ITEMS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_DATA_ITEMS_ONLY");
	}
	jint ContactsContract_Directory::SHORTCUT_SUPPORT_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_FULL");
	}
	jint ContactsContract_Directory::SHORTCUT_SUPPORT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_NONE");
	}
	QAndroidJniObject ContactsContract_Directory::TYPE_RESOURCE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"TYPE_RESOURCE_ID",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract_Directory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Directory",
			"(V)V");
	}
	
	// Methods
	jboolean ContactsContract_Directory::isRemoteDirectoryId(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.ContactsContract$Directory",
			"isRemoteDirectoryId",
			"(J)Z",
			arg0);
	}
	jboolean ContactsContract_Directory::isEnterpriseDirectoryId(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.ContactsContract$Directory",
			"isEnterpriseDirectoryId",
			"(J)Z",
			arg0);
	}
	void ContactsContract_Directory::notifyDirectoryChange(__jni_impl::android::content::ContentResolver arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$Directory",
			"notifyDirectoryChange",
			"(Landroid/content/ContentResolver;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Directory : public __jni_impl::android::provider::ContactsContract_Directory
	{
	public:
		ContactsContract_Directory(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Directory()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_DIRECTORY

