#pragma once

#include "../app/Fragment.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::webkit
{
	class WebView;
}

namespace android::webkit
{
	class WebViewFragment : public android::app::Fragment
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebViewFragment(const char *className, const char *sig, Ts...agv) : android::app::Fragment(className, sig, std::forward<Ts>(agv)...) {}
		WebViewFragment(QJniObject obj);
		
		// Constructors
		WebViewFragment();
		
		// Methods
		android::webkit::WebView getWebView();
		android::view::View onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2);
		void onDestroy();
		void onDestroyView();
		void onPause();
		void onResume();
	};
} // namespace android::webkit

