#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class RenderScript_RSMessageHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		RenderScript_RSMessageHandler(QAndroidJniObject obj);
		// Constructors
		RenderScript_RSMessageHandler();
		
		// Methods
		void run();
	};
} // namespace android::renderscript

