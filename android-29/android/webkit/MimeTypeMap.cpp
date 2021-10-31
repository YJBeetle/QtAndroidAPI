#include "./MimeTypeMap.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	MimeTypeMap::MimeTypeMap(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring MimeTypeMap::getFileExtensionFromUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getFileExtensionFromUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::webkit::MimeTypeMap MimeTypeMap::getSingleton()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getSingleton",
			"()Landroid/webkit/MimeTypeMap;"
		);
	}
	jstring MimeTypeMap::getExtensionFromMimeType(jstring arg0)
	{
		return callObjectMethod(
			"getExtensionFromMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MimeTypeMap::getMimeTypeFromExtension(jstring arg0)
	{
		return callObjectMethod(
			"getMimeTypeFromExtension",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean MimeTypeMap::hasExtension(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasExtension",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean MimeTypeMap::hasMimeType(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
} // namespace android::webkit

