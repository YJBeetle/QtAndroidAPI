#pragma once

#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "./RenderScript.def.hpp"
#include "./Script_InvokeID.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./ScriptGroup.def.hpp"
#include "./ScriptGroup_Closure.def.hpp"
#include "./ScriptGroup_Input.def.hpp"
#include "./Type.def.hpp"
#include "../../JString.hpp"
#include "./ScriptGroup_Builder2.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline ScriptGroup_Builder2::ScriptGroup_Builder2(android::renderscript::RenderScript arg0)
		: JObject(
			"android.renderscript.ScriptGroup$Builder2",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::renderscript::ScriptGroup_Input ScriptGroup_Builder2::addInput() const
	{
		return callObjectMethod(
			"addInput",
			"()Landroid/renderscript/ScriptGroup$Input;"
		);
	}
	inline android::renderscript::ScriptGroup_Closure ScriptGroup_Builder2::addInvoke(android::renderscript::Script_InvokeID arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"addInvoke",
			"(Landroid/renderscript/Script$InvokeID;[Ljava/lang/Object;)Landroid/renderscript/ScriptGroup$Closure;",
			arg0.object(),
			arg1.object<jobjectArray>()
		);
	}
	inline android::renderscript::ScriptGroup_Closure ScriptGroup_Builder2::addKernel(android::renderscript::Script_KernelID arg0, android::renderscript::Type arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"addKernel",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Type;[Ljava/lang/Object;)Landroid/renderscript/ScriptGroup$Closure;",
			arg0.object(),
			arg1.object(),
			arg2.object<jobjectArray>()
		);
	}
	inline android::renderscript::ScriptGroup ScriptGroup_Builder2::create(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"create",
			"(Ljava/lang/String;[Landroid/renderscript/ScriptGroup$Future;)Landroid/renderscript/ScriptGroup;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
