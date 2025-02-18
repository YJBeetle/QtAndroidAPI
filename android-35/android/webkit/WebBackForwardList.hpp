#pragma once

#include "./WebHistoryItem.def.hpp"
#include "../../JObject.hpp"
#include "./WebBackForwardList.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebBackForwardList::WebBackForwardList()
		: JObject(
			"android.webkit.WebBackForwardList",
			"()V"
		) {}
	
	// Methods
	inline jint WebBackForwardList::getCurrentIndex() const
	{
		return callMethod<jint>(
			"getCurrentIndex",
			"()I"
		);
	}
	inline android::webkit::WebHistoryItem WebBackForwardList::getCurrentItem() const
	{
		return callObjectMethod(
			"getCurrentItem",
			"()Landroid/webkit/WebHistoryItem;"
		);
	}
	inline android::webkit::WebHistoryItem WebBackForwardList::getItemAtIndex(jint arg0) const
	{
		return callObjectMethod(
			"getItemAtIndex",
			"(I)Landroid/webkit/WebHistoryItem;",
			arg0
		);
	}
	inline jint WebBackForwardList::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
