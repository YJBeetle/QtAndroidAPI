#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::content
{
	class Context;
}
namespace android::renderscript
{
	class RenderScript_ContextType;
}
namespace android::renderscript
{
	class RenderScript_Priority;
}
namespace android::renderscript
{
	class RenderScript_RSErrorHandler;
}
namespace android::renderscript
{
	class RenderScript_RSMessageHandler;
}

namespace android::renderscript
{
	class RenderScript : public JObject
	{
	public:
		// Fields
		static jint CREATE_FLAG_LOW_LATENCY();
		static jint CREATE_FLAG_LOW_POWER();
		static jint CREATE_FLAG_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderScript(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::RenderScript create(android::content::Context arg0);
		static android::renderscript::RenderScript create(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1);
		static android::renderscript::RenderScript create(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1, jint arg2);
		static android::renderscript::RenderScript createMultiContext(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1, jint arg2, jint arg3);
		static jlong getMinorVersion();
		static void releaseAllContexts();
		void contextDump() const;
		void destroy() const;
		void finish() const;
		android::content::Context getApplicationContext() const;
		android::renderscript::RenderScript_RSErrorHandler getErrorHandler() const;
		android::renderscript::RenderScript_RSMessageHandler getMessageHandler() const;
		void sendMessage(jint arg0, JIntArray arg1) const;
		void setErrorHandler(android::renderscript::RenderScript_RSErrorHandler arg0) const;
		void setMessageHandler(android::renderscript::RenderScript_RSMessageHandler arg0) const;
		void setPriority(android::renderscript::RenderScript_Priority arg0) const;
	};
} // namespace android::renderscript

