#include "../../JArray.hpp"
#include "../net/Uri.hpp"
#include "./FontsContract_FontInfo.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	
	// Methods
	JArray FontsContract_FontInfo::getAxes() const
	{
		return callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		);
	}
	jint FontsContract_FontInfo::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jint FontsContract_FontInfo::getTtcIndex() const
	{
		return callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	android::net::Uri FontsContract_FontInfo::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint FontsContract_FontInfo::getWeight() const
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jboolean FontsContract_FontInfo::isItalic() const
	{
		return callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace android::provider

