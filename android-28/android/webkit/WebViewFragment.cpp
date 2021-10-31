#include "../os/Bundle.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./WebView.hpp"
#include "./WebViewFragment.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebViewFragment::WebViewFragment(QAndroidJniObject obj) : android::app::Fragment(obj) {}
	
	// Constructors
	WebViewFragment::WebViewFragment()
		: android::app::Fragment(
			"android.webkit.WebViewFragment",
			"()V"
		) {}
	
	// Methods
	android::webkit::WebView WebViewFragment::getWebView()
	{
		return callObjectMethod(
			"getWebView",
			"()Landroid/webkit/WebView;"
		);
	}
	android::view::View WebViewFragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WebViewFragment::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void WebViewFragment::onDestroyView()
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void WebViewFragment::onPause()
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void WebViewFragment::onResume()
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
} // namespace android::webkit

