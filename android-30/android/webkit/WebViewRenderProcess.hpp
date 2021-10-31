#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebViewRenderProcess : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebViewRenderProcess(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebViewRenderProcess(QAndroidJniObject obj);
		
		// Constructors
		WebViewRenderProcess();
		
		// Methods
		jboolean terminate();
	};
} // namespace android::webkit

