#include "./WebHistoryItem.hpp"
#include "./WebBackForwardList.hpp"

namespace android::webkit
{
	// Fields
	
	WebBackForwardList::WebBackForwardList(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebBackForwardList::WebBackForwardList()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebBackForwardList",
			"()V"
		);
	}
	
	// Methods
	jint WebBackForwardList::getCurrentIndex()
	{
		return __thiz.callMethod<jint>(
			"getCurrentIndex",
			"()I"
		);
	}
	QAndroidJniObject WebBackForwardList::getCurrentItem()
	{
		return __thiz.callObjectMethod(
			"getCurrentItem",
			"()Landroid/webkit/WebHistoryItem;"
		);
	}
	QAndroidJniObject WebBackForwardList::getItemAtIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItemAtIndex",
			"(I)Landroid/webkit/WebHistoryItem;",
			arg0
		);
	}
	jint WebBackForwardList::getSize()
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::webkit

