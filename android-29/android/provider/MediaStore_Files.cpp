#include "../net/Uri.hpp"
#include "./MediaStore_Files.hpp"

namespace android::provider
{
	// Fields
	
	MediaStore_Files::MediaStore_Files(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore_Files::MediaStore_Files()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Files",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Files::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Files::getContentUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaStore_Files::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaStore_Files::getContentUri(const QString &arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

