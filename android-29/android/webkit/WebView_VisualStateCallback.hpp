#pragma once

#include "../../JObject.hpp"


namespace android::webkit
{
	class WebView_VisualStateCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebView_VisualStateCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebView_VisualStateCallback(QAndroidJniObject obj);
		
		// Constructors
		WebView_VisualStateCallback();
		
		// Methods
		void onComplete(jlong arg0);
	};
} // namespace android::webkit

