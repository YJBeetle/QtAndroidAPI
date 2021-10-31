#include "./WebHistoryItem.hpp"
#include "./WebBackForwardList.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebBackForwardList::WebBackForwardList(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebBackForwardList::WebBackForwardList()
		: __JniBaseClass(
			"android.webkit.WebBackForwardList",
			"()V"
		) {}
	
	// Methods
	jint WebBackForwardList::getCurrentIndex()
	{
		return callMethod<jint>(
			"getCurrentIndex",
			"()I"
		);
	}
	android::webkit::WebHistoryItem WebBackForwardList::getCurrentItem()
	{
		return callObjectMethod(
			"getCurrentItem",
			"()Landroid/webkit/WebHistoryItem;"
		);
	}
	android::webkit::WebHistoryItem WebBackForwardList::getItemAtIndex(jint arg0)
	{
		return callObjectMethod(
			"getItemAtIndex",
			"(I)Landroid/webkit/WebHistoryItem;",
			arg0
		);
	}
	jint WebBackForwardList::getSize()
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::webkit

