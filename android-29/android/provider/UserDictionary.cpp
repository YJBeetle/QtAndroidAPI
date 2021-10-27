#include "../net/Uri.hpp"
#include "./UserDictionary.hpp"

namespace android::provider
{
	// Fields
	jstring UserDictionary::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject UserDictionary::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	UserDictionary::UserDictionary(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UserDictionary::UserDictionary()
	{
		__thiz = QAndroidJniObject(
			"android.provider.UserDictionary",
			"()V"
		);
	}
	
	// Methods
} // namespace android::provider

