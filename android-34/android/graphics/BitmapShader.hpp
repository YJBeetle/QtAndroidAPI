#pragma once

#include "./Bitmap.def.hpp"
#include "./Shader_TileMode.def.hpp"
#include "./BitmapShader.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint BitmapShader::FILTER_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.graphics.BitmapShader",
			"FILTER_MODE_DEFAULT"
		);
	}
	inline jint BitmapShader::FILTER_MODE_LINEAR()
	{
		return getStaticField<jint>(
			"android.graphics.BitmapShader",
			"FILTER_MODE_LINEAR"
		);
	}
	inline jint BitmapShader::FILTER_MODE_NEAREST()
	{
		return getStaticField<jint>(
			"android.graphics.BitmapShader",
			"FILTER_MODE_NEAREST"
		);
	}
	
	// Constructors
	inline BitmapShader::BitmapShader(android::graphics::Bitmap arg0, android::graphics::Shader_TileMode arg1, android::graphics::Shader_TileMode arg2)
		: android::graphics::Shader(
			"android.graphics.BitmapShader",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jint BitmapShader::getFilterMode() const
	{
		return callMethod<jint>(
			"getFilterMode",
			"()I"
		);
	}
	inline jint BitmapShader::getMaxAnisotropy() const
	{
		return callMethod<jint>(
			"getMaxAnisotropy",
			"()I"
		);
	}
	inline void BitmapShader::setFilterMode(jint arg0) const
	{
		callMethod<void>(
			"setFilterMode",
			"(I)V",
			arg0
		);
	}
	inline void BitmapShader::setMaxAnisotropy(jint arg0) const
	{
		callMethod<void>(
			"setMaxAnisotropy",
			"(I)V",
			arg0
		);
	}
} // namespace android::graphics

// Base class headers
#include "./Shader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
