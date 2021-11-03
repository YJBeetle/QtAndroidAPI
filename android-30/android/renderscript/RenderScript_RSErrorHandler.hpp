#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class RenderScript_RSErrorHandler : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderScript_RSErrorHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_RSErrorHandler(QAndroidJniObject obj);
		
		// Constructors
		RenderScript_RSErrorHandler();
		
		// Methods
		void run();
	};
} // namespace android::renderscript

