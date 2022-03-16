#pragma once

#include "../os/Bundle.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./WebView.def.hpp"
#include "./WebViewFragment.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebViewFragment::WebViewFragment()
		: android::app::Fragment(
			"android.webkit.WebViewFragment",
			"()V"
		) {}
	
	// Methods
	inline android::webkit::WebView WebViewFragment::getWebView() const
	{
		return callObjectMethod(
			"getWebView",
			"()Landroid/webkit/WebView;"
		);
	}
	inline android::view::View WebViewFragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WebViewFragment::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void WebViewFragment::onDestroyView() const
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	inline void WebViewFragment::onPause() const
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	inline void WebViewFragment::onResume() const
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
} // namespace android::webkit

// Base class headers
#include "../app/Fragment.hpp"

