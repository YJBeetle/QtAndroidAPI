#include "./MediaStore_Audio.hpp"

namespace android::provider
{
	// Fields
	
	MediaStore_Audio::MediaStore_Audio(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore_Audio::MediaStore_Audio()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio",
			"()V"
		);
	}
	
	// Methods
	jstring MediaStore_Audio::keyFor(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaStore_Audio::keyFor(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace android::provider

