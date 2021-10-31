#include "../net/Uri.hpp"
#include "./MediaStore_Audio_Artists_Albums.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	MediaStore_Audio_Artists_Albums::MediaStore_Audio_Artists_Albums(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Audio_Artists_Albums::MediaStore_Audio_Artists_Albums()
		: __JniBaseClass(
			"android.provider.MediaStore$Audio$Artists$Albums",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Artists_Albums::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Artists$Albums",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
} // namespace android::provider
