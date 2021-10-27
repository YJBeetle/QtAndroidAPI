#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebView_VisualStateCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		WebView_VisualStateCallback(QAndroidJniObject obj);
		// Constructors
		WebView_VisualStateCallback();
		
		// Methods
		void onComplete(jlong arg0);
	};
} // namespace android::webkit

