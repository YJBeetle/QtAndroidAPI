#pragma once

#ifndef ANDROID_WEBKIT_WEBVIEWFRAGMENT
#define ANDROID_WEBKIT_WEBVIEWFRAGMENT

#include "../../__JniBaseClass.hpp"
#include "../app/Fragment.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::webkit
{
	class WebView;
}

namespace __jni_impl::android::webkit
{
	class WebViewFragment : public __jni_impl::android::app::Fragment
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getWebView();
		QAndroidJniObject onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2);
		void onDestroy();
		void onDestroyView();
		void onPause();
		void onResume();
	};
} // namespace __jni_impl::android::webkit

#include "../os/Bundle.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "WebView.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebViewFragment::__constructor()
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
	QAndroidJniObject WebViewFragment::onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2)
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
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebViewFragment : public __jni_impl::android::webkit::WebViewFragment
	{
	public:
		WebViewFragment(QAndroidJniObject obj) { __thiz = obj; }
		WebViewFragment()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBVIEWFRAGMENT

