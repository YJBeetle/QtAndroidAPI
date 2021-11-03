#pragma once

#include "../../JObject.hpp"


namespace android::webkit
{
	class WebViewRenderProcess : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebViewRenderProcess(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebViewRenderProcess(QJniObject obj);
		
		// Constructors
		WebViewRenderProcess();
		
		// Methods
		jboolean terminate();
	};
} // namespace android::webkit

