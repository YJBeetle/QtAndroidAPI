#pragma once

#include "./Script_FieldID.def.hpp"
#include "../../JObject.hpp"
#include "./ScriptGroup_Binding.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline ScriptGroup_Binding::ScriptGroup_Binding(android::renderscript::Script_FieldID arg0, JObject arg1)
		: JObject(
			"android.renderscript.ScriptGroup$Binding",
			"(Landroid/renderscript/Script$FieldID;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

