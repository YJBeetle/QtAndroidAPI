#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class RenderScript_RSMessageHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderScript_RSMessageHandler(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_RSMessageHandler(QJniObject obj);
		
		// Constructors
		RenderScript_RSMessageHandler();
		
		// Methods
		void run();
	};
} // namespace android::renderscript

