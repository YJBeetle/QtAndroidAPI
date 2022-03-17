#pragma once

#include "./Element.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Type.def.hpp"
#include "./Type_Builder.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline Type_Builder::Type_Builder(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
		: JObject(
			"android.renderscript.Type$Builder",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::renderscript::Type Type_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/Type;"
		);
	}
	inline android::renderscript::Type_Builder Type_Builder::setFaces(jboolean arg0) const
	{
		return callObjectMethod(
			"setFaces",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	inline android::renderscript::Type_Builder Type_Builder::setMipmaps(jboolean arg0) const
	{
		return callObjectMethod(
			"setMipmaps",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	inline android::renderscript::Type_Builder Type_Builder::setX(jint arg0) const
	{
		return callObjectMethod(
			"setX",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	inline android::renderscript::Type_Builder Type_Builder::setY(jint arg0) const
	{
		return callObjectMethod(
			"setY",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	inline android::renderscript::Type_Builder Type_Builder::setYuvFormat(jint arg0) const
	{
		return callObjectMethod(
			"setYuvFormat",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	inline android::renderscript::Type_Builder Type_Builder::setZ(jint arg0) const
	{
		return callObjectMethod(
			"setZ",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
} // namespace android::renderscript

// Base class headers

