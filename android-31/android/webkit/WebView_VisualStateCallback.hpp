#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebView_VisualStateCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebView_VisualStateCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebView_VisualStateCallback(QJniObject obj);
		
		// Constructors
		WebView_VisualStateCallback();
		
		// Methods
		void onComplete(jlong arg0);
	};
} // namespace android::webkit

