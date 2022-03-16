#pragma once

#include "../../JArray.hpp"
#include "../net/Uri.def.hpp"
#include "./FontsContract_FontInfo.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray FontsContract_FontInfo::getAxes() const
	{
		return callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;"
		);
	}
	inline jint FontsContract_FontInfo::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline jint FontsContract_FontInfo::getTtcIndex() const
	{
		return callMethod<jint>(
			"getTtcIndex",
			"()I"
		);
	}
	inline android::net::Uri FontsContract_FontInfo::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint FontsContract_FontInfo::getWeight() const
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	inline jboolean FontsContract_FontInfo::isItalic() const
	{
		return callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace android::provider

// Base class headers

