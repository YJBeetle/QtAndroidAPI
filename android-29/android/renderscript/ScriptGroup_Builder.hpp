#pragma once

#include "./RenderScript.def.hpp"
#include "./Script_FieldID.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./ScriptGroup.def.hpp"
#include "./Type.def.hpp"
#include "./ScriptGroup_Builder.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline ScriptGroup_Builder::ScriptGroup_Builder(android::renderscript::RenderScript arg0)
		: JObject(
			"android.renderscript.ScriptGroup$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::renderscript::ScriptGroup_Builder ScriptGroup_Builder::addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_FieldID arg2) const
	{
		return callObjectMethod(
			"addConnection",
			"(Landroid/renderscript/Type;Landroid/renderscript/Script$KernelID;Landroid/renderscript/Script$FieldID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::renderscript::ScriptGroup_Builder ScriptGroup_Builder::addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_KernelID arg2) const
	{
		return callObjectMethod(
			"addConnection",
			"(Landroid/renderscript/Type;Landroid/renderscript/Script$KernelID;Landroid/renderscript/Script$KernelID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::renderscript::ScriptGroup_Builder ScriptGroup_Builder::addKernel(android::renderscript::Script_KernelID arg0) const
	{
		return callObjectMethod(
			"addKernel",
			"(Landroid/renderscript/Script$KernelID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.object()
		);
	}
	inline android::renderscript::ScriptGroup ScriptGroup_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/ScriptGroup;"
		);
	}
} // namespace android::renderscript

// Base class headers

