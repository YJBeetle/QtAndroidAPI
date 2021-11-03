#include "../../JString.hpp"
#include "./MimeTypeMap.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	MimeTypeMap::MimeTypeMap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString MimeTypeMap::getFileExtensionFromUrl(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getFileExtensionFromUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::webkit::MimeTypeMap MimeTypeMap::getSingleton()
	{
		return callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getSingleton",
			"()Landroid/webkit/MimeTypeMap;"
		);
	}
	JString MimeTypeMap::getExtensionFromMimeType(JString arg0) const
	{
		return callObjectMethod(
			"getExtensionFromMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString MimeTypeMap::getMimeTypeFromExtension(JString arg0) const
	{
		return callObjectMethod(
			"getMimeTypeFromExtension",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jboolean MimeTypeMap::hasExtension(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasExtension",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean MimeTypeMap::hasMimeType(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::webkit

