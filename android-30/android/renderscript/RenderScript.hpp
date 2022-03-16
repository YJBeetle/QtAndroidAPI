#pragma once

#include "../../JIntArray.hpp"
#include "../content/Context.def.hpp"
#include "./RenderScript_ContextType.def.hpp"
#include "./RenderScript_Priority.def.hpp"
#include "./RenderScript_RSErrorHandler.def.hpp"
#include "./RenderScript_RSMessageHandler.def.hpp"
#include "./RenderScript.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jint RenderScript::CREATE_FLAG_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_LOW_LATENCY"
		);
	}
	inline jint RenderScript::CREATE_FLAG_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_LOW_POWER"
		);
	}
	inline jint RenderScript::CREATE_FLAG_NONE()
	{
		return getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_NONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::renderscript::RenderScript RenderScript::create(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;)Landroid/renderscript/RenderScript;",
			arg0.object()
		);
	}
	inline android::renderscript::RenderScript RenderScript::create(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;)Landroid/renderscript/RenderScript;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::renderscript::RenderScript RenderScript::create(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;I)Landroid/renderscript/RenderScript;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::renderscript::RenderScript RenderScript::createMultiContext(android::content::Context arg0, android::renderscript::RenderScript_ContextType arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"createMultiContext",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;II)Landroid/renderscript/RenderScript;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline jlong RenderScript::getMinorVersion()
	{
		return callStaticMethod<jlong>(
			"android.renderscript.RenderScript",
			"getMinorVersion",
			"()J"
		);
	}
	inline void RenderScript::releaseAllContexts()
	{
		callStaticMethod<void>(
			"android.renderscript.RenderScript",
			"releaseAllContexts",
			"()V"
		);
	}
	inline void RenderScript::contextDump() const
	{
		callMethod<void>(
			"contextDump",
			"()V"
		);
	}
	inline void RenderScript::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline void RenderScript::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline android::content::Context RenderScript::getApplicationContext() const
	{
		return callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	inline android::renderscript::RenderScript_RSErrorHandler RenderScript::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Landroid/renderscript/RenderScript$RSErrorHandler;"
		);
	}
	inline android::renderscript::RenderScript_RSMessageHandler RenderScript::getMessageHandler() const
	{
		return callObjectMethod(
			"getMessageHandler",
			"()Landroid/renderscript/RenderScript$RSMessageHandler;"
		);
	}
	inline void RenderScript::sendMessage(jint arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"sendMessage",
			"(I[I)V",
			arg0,
			arg1.object<jintArray>()
		);
	}
	inline void RenderScript::setErrorHandler(android::renderscript::RenderScript_RSErrorHandler arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Landroid/renderscript/RenderScript$RSErrorHandler;)V",
			arg0.object()
		);
	}
	inline void RenderScript::setMessageHandler(android::renderscript::RenderScript_RSMessageHandler arg0) const
	{
		callMethod<void>(
			"setMessageHandler",
			"(Landroid/renderscript/RenderScript$RSMessageHandler;)V",
			arg0.object()
		);
	}
	inline void RenderScript::setPriority(android::renderscript::RenderScript_Priority arg0) const
	{
		callMethod<void>(
			"setPriority",
			"(Landroid/renderscript/RenderScript$Priority;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

// Base class headers

