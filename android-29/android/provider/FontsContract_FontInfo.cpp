#include "../net/Uri.hpp"
#include "./FontsContract_FontInfo.hpp"

namespace android::provider
{
	// Fields
	
	FontsContract_FontInfo::FontsContract_FontInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jarray FontsContract_FontInfo::getAxes()
	{
		return __thiz.callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		).object<jarray>();
	}
	jint FontsContract_FontInfo::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jint FontsContract_FontInfo::getTtcIndex()
	{
		return __thiz.callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	QAndroidJniObject FontsContract_FontInfo::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint FontsContract_FontInfo::getWeight()
	{
		return __thiz.callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jboolean FontsContract_FontInfo::isItalic()
	{
		return __thiz.callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace android::provider

