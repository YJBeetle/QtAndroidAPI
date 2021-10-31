#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class RenderProcessGoneDetail : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderProcessGoneDetail(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RenderProcessGoneDetail(QAndroidJniObject obj);
		
		// Constructors
		RenderProcessGoneDetail();
		
		// Methods
		jboolean didCrash();
		jint rendererPriorityAtExit();
	};
} // namespace android::webkit

