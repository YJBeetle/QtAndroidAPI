#pragma once

#include "../Shader.def.hpp"
#include "./ShapeDrawable_ShaderFactory.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline ShapeDrawable_ShaderFactory::ShapeDrawable_ShaderFactory()
		: JObject(
			"android.graphics.drawable.ShapeDrawable$ShaderFactory",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::Shader ShapeDrawable_ShaderFactory::resize(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"resize",
			"(II)Landroid/graphics/Shader;",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
