#include "../net/Uri.hpp"
#include "./FontsContract_FontInfo.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	FontsContract_FontInfo::FontsContract_FontInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray FontsContract_FontInfo::getAxes()
	{
		return callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		).object<jarray>();
	}
	jint FontsContract_FontInfo::getResultCode()
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jint FontsContract_FontInfo::getTtcIndex()
	{
		return callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	android::net::Uri FontsContract_FontInfo::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint FontsContract_FontInfo::getWeight()
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jboolean FontsContract_FontInfo::isItalic()
	{
		return callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace android::provider

