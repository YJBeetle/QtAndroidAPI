#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class RenderProcessGoneDetail : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderProcessGoneDetail(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderProcessGoneDetail(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		RenderProcessGoneDetail();
		
		// Methods
		jboolean didCrash() const;
		jint rendererPriorityAtExit() const;
	};
} // namespace android::webkit

