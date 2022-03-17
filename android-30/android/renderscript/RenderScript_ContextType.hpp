#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./RenderScript_ContextType.def.hpp"

namespace android::renderscript
{
	// Fields
	inline android::renderscript::RenderScript_ContextType RenderScript_ContextType::DEBUG()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"DEBUG",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	inline android::renderscript::RenderScript_ContextType RenderScript_ContextType::NORMAL()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"NORMAL",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	inline android::renderscript::RenderScript_ContextType RenderScript_ContextType::PROFILE()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"PROFILE",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::renderscript::RenderScript_ContextType RenderScript_ContextType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$ContextType;",
			arg0.object<jstring>()
		);
	}
	inline JArray RenderScript_ContextType::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"values",
			"()[Landroid/renderscript/RenderScript$ContextType;"
		);
	}
} // namespace android::renderscript

// Base class headers
#include "../../java/lang/Enum.hpp"

