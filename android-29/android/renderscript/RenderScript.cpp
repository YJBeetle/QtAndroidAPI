#include "../content/Context.hpp"
#include "./RenderScript_ContextType.hpp"
#include "./RenderScript_Priority.hpp"
#include "./RenderScript_RSErrorHandler.hpp"
#include "./RenderScript_RSMessageHandler.hpp"
#include "./RenderScript.hpp"

namespace android::renderscript
{
	// Fields
	jint RenderScript::CREATE_FLAG_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_LOW_LATENCY"
		);
	}
	jint RenderScript::CREATE_FLAG_LOW_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_LOW_POWER"
		);
	}
	jint RenderScript::CREATE_FLAG_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_NONE"
		);
	}
	
	// QAndroidJniObject forward
	RenderScript::RenderScript(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject RenderScript::create(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;)Landroid/renderscript/RenderScript;",
			arg0.object()
		);
	}
	QAndroidJniObject RenderScript::create(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;)Landroid/renderscript/RenderScript;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject RenderScript::create(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;I)Landroid/renderscript/RenderScript;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject RenderScript::createMultiContext(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"createMultiContext",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;II)Landroid/renderscript/RenderScript;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	jlong RenderScript::getMinorVersion()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.renderscript.RenderScript",
			"getMinorVersion",
			"()J"
		);
	}
	void RenderScript::releaseAllContexts()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.renderscript.RenderScript",
			"releaseAllContexts",
			"()V"
		);
	}
	void RenderScript::contextDump()
	{
		callMethod<void>(
			"contextDump",
			"()V"
		);
	}
	void RenderScript::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void RenderScript::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	QAndroidJniObject RenderScript::getApplicationContext()
	{
		return callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject RenderScript::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Landroid/renderscript/RenderScript$RSErrorHandler;"
		);
	}
	QAndroidJniObject RenderScript::getMessageHandler()
	{
		return callObjectMethod(
			"getMessageHandler",
			"()Landroid/renderscript/RenderScript$RSMessageHandler;"
		);
	}
	void RenderScript::sendMessage(jint arg0, jintArray arg1)
	{
		callMethod<void>(
			"sendMessage",
			"(I[I)V",
			arg0,
			arg1
		);
	}
	void RenderScript::setErrorHandler(android::renderscript::RenderScript_RSErrorHandler arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Landroid/renderscript/RenderScript$RSErrorHandler;)V",
			arg0.object()
		);
	}
	void RenderScript::setMessageHandler(android::renderscript::RenderScript_RSMessageHandler arg0)
	{
		callMethod<void>(
			"setMessageHandler",
			"(Landroid/renderscript/RenderScript$RSMessageHandler;)V",
			arg0.object()
		);
	}
	void RenderScript::setPriority(android::renderscript::RenderScript_Priority arg0)
	{
		callMethod<void>(
			"setPriority",
			"(Landroid/renderscript/RenderScript$Priority;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript
