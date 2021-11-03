#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class WebViewRenderProcess : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebViewRenderProcess(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebViewRenderProcess(QAndroidJniObject obj);
		
		// Constructors
		WebViewRenderProcess();
		
		// Methods
		jboolean terminate() const;
	};
} // namespace android::webkit

