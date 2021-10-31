#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebViewRenderProcess : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebViewRenderProcess(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebViewRenderProcess(QJniObject obj);
		
		// Constructors
		WebViewRenderProcess();
		
		// Methods
		jboolean terminate();
	};
} // namespace android::webkit

