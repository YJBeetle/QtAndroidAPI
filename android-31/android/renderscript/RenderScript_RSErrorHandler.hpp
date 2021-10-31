#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class RenderScript_RSErrorHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderScript_RSErrorHandler(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_RSErrorHandler(QAndroidJniObject obj);
		
		// Constructors
		RenderScript_RSErrorHandler();
		
		// Methods
		void run();
	};
} // namespace android::renderscript

