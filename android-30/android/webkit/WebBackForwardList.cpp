#include "./WebHistoryItem.hpp"
#include "../../JObject.hpp"
#include "./WebBackForwardList.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebBackForwardList::WebBackForwardList(QAndroidJniObject obj) : JObject(obj) {}
	
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

