#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class RenderProcessGoneDetail : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderProcessGoneDetail(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderProcessGoneDetail(QJniObject obj);
		
		// Constructors
		RenderProcessGoneDetail();
		
		// Methods
		jboolean didCrash();
		jint rendererPriorityAtExit();
	};
} // namespace android::webkit

