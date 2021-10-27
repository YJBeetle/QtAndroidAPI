#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./MediaStore_Video.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Video::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MediaStore_Video::MediaStore_Video(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore_Video::MediaStore_Video()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Video",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Video::query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Video",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::provider

