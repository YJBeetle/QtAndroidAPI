#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./RenderScript_ContextType.hpp"

namespace android::renderscript
{
	// Fields
	android::renderscript::RenderScript_ContextType RenderScript_ContextType::DEBUG()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"DEBUG",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	android::renderscript::RenderScript_ContextType RenderScript_ContextType::NORMAL()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"NORMAL",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	android::renderscript::RenderScript_ContextType RenderScript_ContextType::PROFILE()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"PROFILE",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	
	// Constructors
	
	// Methods
	android::renderscript::RenderScript_ContextType RenderScript_ContextType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$ContextType;",
			arg0.object<jstring>()
		);
	}
	JArray RenderScript_ContextType::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"values",
			"()[Landroid/renderscript/RenderScript$ContextType;"
		);
	}
} // namespace android::renderscript

