#pragma once

#include "./Bitmap.def.hpp"
#include "./BlendMode.def.hpp"
#include "./ColorFilter.def.hpp"
#include "./Rect.def.hpp"
#include "./Shader.def.hpp"
#include "./Shader_TileMode.def.hpp"
#include "./RenderEffect.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::RenderEffect RenderEffect::createBitmapEffect(android::graphics::Bitmap arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createBitmapEffect",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/RenderEffect;",
			arg0.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createBitmapEffect(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createBitmapEffect",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;)Landroid/graphics/RenderEffect;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createBlendModeEffect(android::graphics::RenderEffect arg0, android::graphics::RenderEffect arg1, android::graphics::BlendMode arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createBlendModeEffect",
			"(Landroid/graphics/RenderEffect;Landroid/graphics/RenderEffect;Landroid/graphics/BlendMode;)Landroid/graphics/RenderEffect;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createBlurEffect(jfloat arg0, jfloat arg1, android::graphics::Shader_TileMode arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createBlurEffect",
			"(FFLandroid/graphics/Shader$TileMode;)Landroid/graphics/RenderEffect;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createBlurEffect(jfloat arg0, jfloat arg1, android::graphics::RenderEffect arg2, android::graphics::Shader_TileMode arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createBlurEffect",
			"(FFLandroid/graphics/RenderEffect;Landroid/graphics/Shader$TileMode;)Landroid/graphics/RenderEffect;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createChainEffect(android::graphics::RenderEffect arg0, android::graphics::RenderEffect arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createChainEffect",
			"(Landroid/graphics/RenderEffect;Landroid/graphics/RenderEffect;)Landroid/graphics/RenderEffect;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createColorFilterEffect(android::graphics::ColorFilter arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createColorFilterEffect",
			"(Landroid/graphics/ColorFilter;)Landroid/graphics/RenderEffect;",
			arg0.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createColorFilterEffect(android::graphics::ColorFilter arg0, android::graphics::RenderEffect arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createColorFilterEffect",
			"(Landroid/graphics/ColorFilter;Landroid/graphics/RenderEffect;)Landroid/graphics/RenderEffect;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createOffsetEffect(jfloat arg0, jfloat arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createOffsetEffect",
			"(FF)Landroid/graphics/RenderEffect;",
			arg0,
			arg1
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createOffsetEffect(jfloat arg0, jfloat arg1, android::graphics::RenderEffect arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createOffsetEffect",
			"(FFLandroid/graphics/RenderEffect;)Landroid/graphics/RenderEffect;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::graphics::RenderEffect RenderEffect::createShaderEffect(android::graphics::Shader arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.RenderEffect",
			"createShaderEffect",
			"(Landroid/graphics/Shader;)Landroid/graphics/RenderEffect;",
			arg0.object()
		);
	}
} // namespace android::graphics

// Base class headers

