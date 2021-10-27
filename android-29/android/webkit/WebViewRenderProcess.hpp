#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebViewRenderProcess : public __JniBaseClass
	{
	public:
		// Fields
		
		WebViewRenderProcess(QAndroidJniObject obj);
		// Constructors
		WebViewRenderProcess();
		
		// Methods
		jboolean terminate();
	};
} // namespace android::webkit

