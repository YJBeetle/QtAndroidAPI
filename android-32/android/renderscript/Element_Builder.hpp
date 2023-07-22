#pragma once

#include "./Element.def.hpp"
#include "./RenderScript.def.hpp"
#include "../../JString.hpp"
#include "./Element_Builder.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline Element_Builder::Element_Builder(android::renderscript::RenderScript arg0)
		: JObject(
			"android.renderscript.Element$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::renderscript::Element_Builder Element_Builder::add(android::renderscript::Element arg0, JString arg1) const
	{
		return callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;)Landroid/renderscript/Element$Builder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::renderscript::Element_Builder Element_Builder::add(android::renderscript::Element arg0, JString arg1, jint arg2) const
	{
		return callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;I)Landroid/renderscript/Element$Builder;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline android::renderscript::Element Element_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/Element;"
		);
	}
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
