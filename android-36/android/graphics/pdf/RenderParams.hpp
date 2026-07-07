#pragma once

#include "./RenderParams.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	inline jint RenderParams::FLAG_RENDER_HIGHLIGHT_ANNOTATIONS()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.RenderParams",
			"FLAG_RENDER_HIGHLIGHT_ANNOTATIONS"
		);
	}
	inline jint RenderParams::FLAG_RENDER_TEXT_ANNOTATIONS()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.RenderParams",
			"FLAG_RENDER_TEXT_ANNOTATIONS"
		);
	}
	inline jint RenderParams::RENDER_MODE_FOR_DISPLAY()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.RenderParams",
			"RENDER_MODE_FOR_DISPLAY"
		);
	}
	inline jint RenderParams::RENDER_MODE_FOR_PRINT()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.RenderParams",
			"RENDER_MODE_FOR_PRINT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RenderParams::getRenderFlags() const
	{
		return callMethod<jint>(
			"getRenderFlags",
			"()I"
		);
	}
	inline jint RenderParams::getRenderMode() const
	{
		return callMethod<jint>(
			"getRenderMode",
			"()I"
		);
	}
} // namespace android::graphics::pdf

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf;
#endif
