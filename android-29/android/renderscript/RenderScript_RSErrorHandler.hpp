#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class RenderScript_RSErrorHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		RenderScript_RSErrorHandler(QAndroidJniObject obj);
		// Constructors
		RenderScript_RSErrorHandler();
		
		// Methods
		void run();
	};
} // namespace android::renderscript

