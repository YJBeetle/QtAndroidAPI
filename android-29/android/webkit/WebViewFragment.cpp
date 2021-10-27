#include "../os/Bundle.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./WebView.hpp"
#include "./WebViewFragment.hpp"

namespace android::webkit
{
	// Fields
	
	WebViewFragment::WebViewFragment(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebViewFragment::WebViewFragment()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewFragment",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WebViewFragment::getWebView()
	{
		return __thiz.callObjectMethod(
			"getWebView",
			"()Landroid/webkit/WebView;"
		);
	}
	QAndroidJniObject WebViewFragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void WebViewFragment::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void WebViewFragment::onDestroyView()
	{
		__thiz.callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void WebViewFragment::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void WebViewFragment::onResume()
	{
		__thiz.callMethod<void>(
			"onResume",
			"()V"
		);
	}
} // namespace android::webkit

