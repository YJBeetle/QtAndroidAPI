#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WebHistoryItem.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebHistoryItem::WebHistoryItem()
		: JObject(
			"android.webkit.WebHistoryItem",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::Bitmap WebHistoryItem::getFavicon() const
	{
		return callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline JString WebHistoryItem::getOriginalUrl() const
	{
		return callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		);
	}
	inline JString WebHistoryItem::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		);
	}
	inline JString WebHistoryItem::getUrl() const
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
