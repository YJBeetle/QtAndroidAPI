#pragma once

#ifndef ANDROID_WEBKIT_WEBBACKFORWARDLIST
#define ANDROID_WEBKIT_WEBBACKFORWARDLIST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebHistoryItem;
}

namespace __jni_impl::android::webkit
{
	class WebBackForwardList : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getSize();
		QAndroidJniObject getCurrentItem();
		jint getCurrentIndex();
		QAndroidJniObject getItemAtIndex(jint arg0);
	};
} // namespace __jni_impl::android::webkit

#include "WebHistoryItem.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebBackForwardList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebBackForwardList",
			"()V"
		);
	}
	
	// Methods
	jint WebBackForwardList::getSize()
	{
		return __thiz.callMethod<jint>(
			"getSize",
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
	jint WebBackForwardList::getCurrentIndex()
	{
		return __thiz.callMethod<jint>(
			"getCurrentIndex",
			"()I"
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
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebBackForwardList : public __jni_impl::android::webkit::WebBackForwardList
	{
	public:
		WebBackForwardList(QAndroidJniObject obj) { __thiz = obj; }
		WebBackForwardList()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBBACKFORWARDLIST

