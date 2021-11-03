#include "./WebHistoryItem.hpp"
#include "../../JObject.hpp"
#include "./WebBackForwardList.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebBackForwardList::WebBackForwardList(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebBackForwardList::WebBackForwardList()
		: JObject(
			"android.webkit.WebBackForwardList",
			"()V"
		) {}
	
	// Methods
	jint WebBackForwardList::getCurrentIndex() const
	{
		return callMethod<jint>(
			"getCurrentIndex",
			"()I"
		);
	}
	android::webkit::WebHistoryItem WebBackForwardList::getCurrentItem() const
	{
		return callObjectMethod(
			"getCurrentItem",
			"()Landroid/webkit/WebHistoryItem;"
		);
	}
	android::webkit::WebHistoryItem WebBackForwardList::getItemAtIndex(jint arg0) const
	{
		return callObjectMethod(
			"getItemAtIndex",
			"(I)Landroid/webkit/WebHistoryItem;",
			arg0
		);
	}
	jint WebBackForwardList::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::webkit

