#pragma once

#include "./RenderParams.def.hpp"
#include "./RenderParams_Builder.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// Constructors
	inline RenderParams_Builder::RenderParams_Builder(jint arg0)
		: JObject(
			"android.graphics.pdf.RenderParams$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::graphics::pdf::RenderParams RenderParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/pdf/RenderParams;"
		);
	}
	inline android::graphics::pdf::RenderParams_Builder RenderParams_Builder::setRenderFlags(jint arg0) const
	{
		return callObjectMethod(
			"setRenderFlags",
			"(I)Landroid/graphics/pdf/RenderParams$Builder;",
			arg0
		);
	}
	inline android::graphics::pdf::RenderParams_Builder RenderParams_Builder::setRenderFlags(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setRenderFlags",
			"(II)Landroid/graphics/pdf/RenderParams$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::pdf

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf;
#endif
