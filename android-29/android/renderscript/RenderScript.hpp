#pragma once

#include "../../__JniBaseClass.hpp"

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
	class RenderScript : public __JniBaseClass
	{
	public:
		// Fields
		static jint CREATE_FLAG_LOW_LATENCY();
		static jint CREATE_FLAG_LOW_POWER();
		static jint CREATE_FLAG_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderScript(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject create(android::content::Context arg0);
		static QAndroidJniObject create(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1);
		static QAndroidJniObject create(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1, jint arg2);
		static QAndroidJniObject createMultiContext(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1, jint arg2, jint arg3);
		static jlong getMinorVersion();
		static void releaseAllContexts();
		void contextDump();
		void destroy();
		void finish();
		QAndroidJniObject getApplicationContext();
		QAndroidJniObject getErrorHandler();
		QAndroidJniObject getMessageHandler();
		void sendMessage(jint arg0, jintArray arg1);
		void setErrorHandler(android::renderscript::RenderScript_RSErrorHandler arg0);
		void setMessageHandler(android::renderscript::RenderScript_RSMessageHandler arg0);
		void setPriority(android::renderscript::RenderScript_Priority arg0);
	};
} // namespace android::renderscript

