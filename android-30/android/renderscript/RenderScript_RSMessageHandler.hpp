#pragma once

#include "../../JObject.hpp"

class JIntArray;

namespace android::renderscript
{
	class RenderScript_RSMessageHandler : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderScript_RSMessageHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_RSMessageHandler(QJniObject obj);
		
		// Constructors
		RenderScript_RSMessageHandler();
		
		// Methods
		void run();
	};
} // namespace android::renderscript

