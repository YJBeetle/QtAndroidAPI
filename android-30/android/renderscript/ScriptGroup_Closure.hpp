#pragma once

#include "./Script_FieldID.def.hpp"
#include "./ScriptGroup_Future.def.hpp"
#include "./ScriptGroup_Closure.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ScriptGroup_Closure::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline android::renderscript::ScriptGroup_Future ScriptGroup_Closure::getGlobal(android::renderscript::Script_FieldID arg0) const
	{
		return callObjectMethod(
			"getGlobal",
			"(Landroid/renderscript/Script$FieldID;)Landroid/renderscript/ScriptGroup$Future;",
			arg0.object()
		);
	}
	inline android::renderscript::ScriptGroup_Future ScriptGroup_Closure::getReturn() const
	{
		return callObjectMethod(
			"getReturn",
			"()Landroid/renderscript/ScriptGroup$Future;"
		);
	}
} // namespace android::renderscript

// Base class headers
#include "./BaseObj.hpp"

