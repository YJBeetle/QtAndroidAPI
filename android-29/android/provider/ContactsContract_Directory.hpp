#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_Directory.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_Directory::ACCOUNT_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ACCOUNT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Directory::ACCOUNT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ACCOUNT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Directory::CALLER_PACKAGE_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CALLER_PACKAGE_PARAM_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Directory::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Directory::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_Directory::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jlong ContactsContract_Directory::DEFAULT()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"DEFAULT"
		);
	}
	inline JString ContactsContract_Directory::DIRECTORY_AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"DIRECTORY_AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Directory::DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_Directory::ENTERPRISE_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jlong ContactsContract_Directory::ENTERPRISE_DEFAULT()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_DEFAULT"
		);
	}
	inline jlong ContactsContract_Directory::ENTERPRISE_LOCAL_INVISIBLE()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"ENTERPRISE_LOCAL_INVISIBLE"
		);
	}
	inline JString ContactsContract_Directory::EXPORT_SUPPORT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_Directory::EXPORT_SUPPORT_ANY_ACCOUNT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_ANY_ACCOUNT"
		);
	}
	inline jint ContactsContract_Directory::EXPORT_SUPPORT_NONE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_NONE"
		);
	}
	inline jint ContactsContract_Directory::EXPORT_SUPPORT_SAME_ACCOUNT_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"EXPORT_SUPPORT_SAME_ACCOUNT_ONLY"
		);
	}
	inline jlong ContactsContract_Directory::LOCAL_INVISIBLE()
	{
		return getStaticField<jlong>(
			"android.provider.ContactsContract$Directory",
			"LOCAL_INVISIBLE"
		);
	}
	inline JString ContactsContract_Directory::PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Directory::PHOTO_SUPPORT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_Directory::PHOTO_SUPPORT_FULL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_FULL"
		);
	}
	inline jint ContactsContract_Directory::PHOTO_SUPPORT_FULL_SIZE_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_FULL_SIZE_ONLY"
		);
	}
	inline jint ContactsContract_Directory::PHOTO_SUPPORT_NONE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_NONE"
		);
	}
	inline jint ContactsContract_Directory::PHOTO_SUPPORT_THUMBNAIL_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"PHOTO_SUPPORT_THUMBNAIL_ONLY"
		);
	}
	inline JString ContactsContract_Directory::SHORTCUT_SUPPORT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_Directory::SHORTCUT_SUPPORT_DATA_ITEMS_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_DATA_ITEMS_ONLY"
		);
	}
	inline jint ContactsContract_Directory::SHORTCUT_SUPPORT_FULL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_FULL"
		);
	}
	inline jint ContactsContract_Directory::SHORTCUT_SUPPORT_NONE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$Directory",
			"SHORTCUT_SUPPORT_NONE"
		);
	}
	inline JString ContactsContract_Directory::TYPE_RESOURCE_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Directory",
			"TYPE_RESOURCE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean ContactsContract_Directory::isEnterpriseDirectoryId(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.ContactsContract$Directory",
			"isEnterpriseDirectoryId",
			"(J)Z",
			arg0
		);
	}
	inline jboolean ContactsContract_Directory::isRemoteDirectoryId(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.ContactsContract$Directory",
			"isRemoteDirectoryId",
			"(J)Z",
			arg0
		);
	}
	inline void ContactsContract_Directory::notifyDirectoryChange(android::content::ContentResolver arg0)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$Directory",
			"notifyDirectoryChange",
			"(Landroid/content/ContentResolver;)V",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

