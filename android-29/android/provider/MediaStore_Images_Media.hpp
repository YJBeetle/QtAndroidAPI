#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Images_Media : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		MediaStore_Images_Media(QAndroidJniObject obj);
		// Constructors
		MediaStore_Images_Media();
		
		// Methods
		static QAndroidJniObject getBitmap(android::content::ContentResolver arg0, android::net::Uri arg1);
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(const QString &arg0);
		static jstring insertImage(android::content::ContentResolver arg0, android::graphics::Bitmap arg1, jstring arg2, jstring arg3);
		static jstring insertImage(android::content::ContentResolver arg0, android::graphics::Bitmap arg1, const QString &arg2, const QString &arg3);
		static jstring insertImage(android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3);
		static jstring insertImage(android::content::ContentResolver arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		static QAndroidJniObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2);
		static QAndroidJniObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jstring arg4);
		static QAndroidJniObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2, const QString &arg3, const QString &arg4);
		static QAndroidJniObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5);
		static QAndroidJniObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2, const QString &arg3, jarray arg4, const QString &arg5);
	};
} // namespace android::provider

