#pragma once

#include "./LoadParams.def.hpp"
#include "../../../JString.hpp"
#include "./LoadParams_Builder.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// Constructors
	inline LoadParams_Builder::LoadParams_Builder()
		: JObject(
			"android.graphics.pdf.LoadParams$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::pdf::LoadParams LoadParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/pdf/LoadParams;"
		);
	}
	inline android::graphics::pdf::LoadParams_Builder LoadParams_Builder::setPassword(JString arg0) const
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/graphics/pdf/LoadParams$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::graphics::pdf

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf;
#endif
