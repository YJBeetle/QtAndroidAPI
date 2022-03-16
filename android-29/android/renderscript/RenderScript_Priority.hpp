#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./RenderScript_Priority.def.hpp"

namespace android::renderscript
{
	// Fields
	inline android::renderscript::RenderScript_Priority RenderScript_Priority::LOW()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$Priority",
			"LOW",
			"Landroid/renderscript/RenderScript$Priority;"
		);
	}
	inline android::renderscript::RenderScript_Priority RenderScript_Priority::NORMAL()
	{
		return getStaticObjectField(
			"android.renderscript.RenderScript$Priority",
			"NORMAL",
			"Landroid/renderscript/RenderScript$Priority;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::renderscript::RenderScript_Priority RenderScript_Priority::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript$Priority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$Priority;",
			arg0.object<jstring>()
		);
	}
	inline JArray RenderScript_Priority::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.RenderScript$Priority",
			"values",
			"()[Landroid/renderscript/RenderScript$Priority;"
		);
	}
} // namespace android::renderscript

// Base class headers
#include "../../java/lang/Enum.hpp"

