#pragma once

#include "../../JString.hpp"
#include "./MimeTypeMap.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString MimeTypeMap::getFileExtensionFromUrl(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getFileExtensionFromUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::webkit::MimeTypeMap MimeTypeMap::getSingleton()
	{
		return callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getSingleton",
			"()Landroid/webkit/MimeTypeMap;"
		);
	}
	inline JString MimeTypeMap::getExtensionFromMimeType(JString arg0) const
	{
		return callObjectMethod(
			"getExtensionFromMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString MimeTypeMap::getMimeTypeFromExtension(JString arg0) const
	{
		return callObjectMethod(
			"getMimeTypeFromExtension",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jboolean MimeTypeMap::hasExtension(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasExtension",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean MimeTypeMap::hasMimeType(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::webkit

// Base class headers

