#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./ContactsContract_Directory.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Directory::ACCOUNT_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ACCOUNT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Directory::ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ACCOUNT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Directory::CALLER_PACKAGE_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CALLER_PACKAGE_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Directory::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Directory::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_Directory::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jlong ContactsContract_Directory::DEFAULT()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"DEFAULT"
		);
	}
	jstring ContactsContract_Directory::DIRECTORY_AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"DIRECTORY_AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Directory::DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_Directory::ENTERPRISE_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jlong ContactsContract_Directory::ENTERPRISE_DEFAULT()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_DEFAULT"
		);
	}
	jlong ContactsContract_Directory::ENTERPRISE_LOCAL_INVISIBLE()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_LOCAL_INVISIBLE"
		);
	}
	jstring ContactsContract_Directory::EXPORT_SUPPORT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_Directory::EXPORT_SUPPORT_ANY_ACCOUNT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_ANY_ACCOUNT"
		);
	}
	jint ContactsContract_Directory::EXPORT_SUPPORT_NONE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_NONE"
		);
	}
	jint ContactsContract_Directory::EXPORT_SUPPORT_SAME_ACCOUNT_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_SAME_ACCOUNT_ONLY"
		);
	}
	jlong ContactsContract_Directory::LOCAL_INVISIBLE()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"LOCAL_INVISIBLE"
		);
	}
	jstring ContactsContract_Directory::PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Directory::PHOTO_SUPPORT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_Directory::PHOTO_SUPPORT_FULL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_FULL"
		);
	}
	jint ContactsContract_Directory::PHOTO_SUPPORT_FULL_SIZE_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_FULL_SIZE_ONLY"
		);
	}
	jint ContactsContract_Directory::PHOTO_SUPPORT_NONE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_NONE"
		);
	}
	jint ContactsContract_Directory::PHOTO_SUPPORT_THUMBNAIL_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_THUMBNAIL_ONLY"
		);
	}
	jstring ContactsContract_Directory::SHORTCUT_SUPPORT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_Directory::SHORTCUT_SUPPORT_DATA_ITEMS_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_DATA_ITEMS_ONLY"
		);
	}
	jint ContactsContract_Directory::SHORTCUT_SUPPORT_FULL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_FULL"
		);
	}
	jint ContactsContract_Directory::SHORTCUT_SUPPORT_NONE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_NONE"
		);
	}
	jstring ContactsContract_Directory::TYPE_RESOURCE_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"TYPE_RESOURCE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContactsContract_Directory::ContactsContract_Directory(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ContactsContract_Directory::isEnterpriseDirectoryId(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.ContactsContract$Directory",
			"isEnterpriseDirectoryId",
			"(J)Z",
			arg0
		);
	}
	jboolean ContactsContract_Directory::isRemoteDirectoryId(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.ContactsContract$Directory",
			"isRemoteDirectoryId",
			"(J)Z",
			arg0
		);
	}
	void ContactsContract_Directory::notifyDirectoryChange(android::content::ContentResolver arg0)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$Directory",
			"notifyDirectoryChange",
			"(Landroid/content/ContentResolver;)V",
			arg0.object()
		);
	}
} // namespace android::provider

