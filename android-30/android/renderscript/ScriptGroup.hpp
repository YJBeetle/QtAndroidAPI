#pragma once

#include "../../JObjectArray.hpp"
#include "./Allocation.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./ScriptGroup.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ScriptGroup::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline JObjectArray ScriptGroup::execute(JObjectArray arg0) const
	{
		return callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline void ScriptGroup::execute() const
	{
		callMethod<void>(
			"execute",
			"()V"
		);
	}
	inline void ScriptGroup::setInput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ScriptGroup::setOutput(android::renderscript::Script_KernelID arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"setOutput",
			"(Landroid/renderscript/Script$KernelID;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::renderscript

// Base class headers
#include "./BaseObj.hpp"

