#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Directory : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACCOUNT_NAME();
		static jstring ACCOUNT_TYPE();
		static jstring CALLER_PACKAGE_PARAM_KEY();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jlong DEFAULT();
		static jstring DIRECTORY_AUTHORITY();
		static jstring DISPLAY_NAME();
		static android::net::Uri ENTERPRISE_CONTENT_URI();
		static jlong ENTERPRISE_DEFAULT();
		static jlong ENTERPRISE_LOCAL_INVISIBLE();
		static jstring EXPORT_SUPPORT();
		static jint EXPORT_SUPPORT_ANY_ACCOUNT();
		static jint EXPORT_SUPPORT_NONE();
		static jint EXPORT_SUPPORT_SAME_ACCOUNT_ONLY();
		static jlong LOCAL_INVISIBLE();
		static jstring PACKAGE_NAME();
		static jstring PHOTO_SUPPORT();
		static jint PHOTO_SUPPORT_FULL();
		static jint PHOTO_SUPPORT_FULL_SIZE_ONLY();
		static jint PHOTO_SUPPORT_NONE();
		static jint PHOTO_SUPPORT_THUMBNAIL_ONLY();
		static jstring SHORTCUT_SUPPORT();
		static jint SHORTCUT_SUPPORT_DATA_ITEMS_ONLY();
		static jint SHORTCUT_SUPPORT_FULL();
		static jint SHORTCUT_SUPPORT_NONE();
		static jstring TYPE_RESOURCE_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Directory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Directory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isEnterpriseDirectoryId(jlong arg0);
		static jboolean isRemoteDirectoryId(jlong arg0);
		static void notifyDirectoryChange(android::content::ContentResolver arg0);
	};
} // namespace android::provider

