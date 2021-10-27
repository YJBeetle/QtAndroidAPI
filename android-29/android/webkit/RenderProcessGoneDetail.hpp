#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class RenderProcessGoneDetail : public __JniBaseClass
	{
	public:
		// Fields
		
		RenderProcessGoneDetail(QAndroidJniObject obj);
		// Constructors
		RenderProcessGoneDetail();
		
		// Methods
		jboolean didCrash();
		jint rendererPriorityAtExit();
	};
} // namespace android::webkit

