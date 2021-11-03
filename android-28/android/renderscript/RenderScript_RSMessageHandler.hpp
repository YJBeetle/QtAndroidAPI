#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class RenderScript_RSMessageHandler : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderScript_RSMessageHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_RSMessageHandler(QAndroidJniObject obj);
		
		// Constructors
		RenderScript_RSMessageHandler();
		
		// Methods
		void run();
	};
} // namespace android::renderscript

