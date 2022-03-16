#pragma once

#include "../app/Fragment.def.hpp"

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
		WebViewFragment(QJniObject obj) : android::app::Fragment(obj) {}
		
		// Constructors
		WebViewFragment();
		
		// Methods
		android::webkit::WebView getWebView() const;
		android::view::View onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const;
		void onDestroy() const;
		void onDestroyView() const;
		void onPause() const;
		void onResume() const;
	};
} // namespace android::webkit

