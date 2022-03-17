#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Matrix.def.hpp"
#include "../graphics/Paint.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/SurfaceTexture.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "./View.def.hpp"
#include "./TextureView.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline TextureView::TextureView(android::content::Context arg0)
		: android::view::View(
			"android.view.TextureView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TextureView::TextureView(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TextureView::TextureView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline TextureView::TextureView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.view.TextureView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void TextureView::buildLayer() const
	{
		callMethod<void>(
			"buildLayer",
			"()V"
		);
	}
	inline void TextureView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline android::graphics::Bitmap TextureView::getBitmap() const
	{
		return callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::graphics::Bitmap TextureView::getBitmap(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"getBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	inline android::graphics::Bitmap TextureView::getBitmap(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getBitmap",
			"(II)Landroid/graphics/Bitmap;",
			arg0,
			arg1
		);
	}
	inline jint TextureView::getLayerType() const
	{
		return callMethod<jint>(
			"getLayerType",
			"()I"
		);
	}
	inline android::graphics::SurfaceTexture TextureView::getSurfaceTexture() const
	{
		return callObjectMethod(
			"getSurfaceTexture",
			"()Landroid/graphics/SurfaceTexture;"
		);
	}
	inline JObject TextureView::getSurfaceTextureListener() const
	{
		return callObjectMethod(
			"getSurfaceTextureListener",
			"()Landroid/view/TextureView$SurfaceTextureListener;"
		);
	}
	inline android::graphics::Matrix TextureView::getTransform(android::graphics::Matrix arg0) const
	{
		return callObjectMethod(
			"getTransform",
			"(Landroid/graphics/Matrix;)Landroid/graphics/Matrix;",
			arg0.object()
		);
	}
	inline jboolean TextureView::isAvailable() const
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	inline jboolean TextureView::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline android::graphics::Canvas TextureView::lockCanvas() const
	{
		return callObjectMethod(
			"lockCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	inline android::graphics::Canvas TextureView::lockCanvas(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"lockCanvas",
			"(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",
			arg0.object()
		);
	}
	inline void TextureView::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void TextureView::setForeground(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setForeground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void TextureView::setLayerPaint(android::graphics::Paint arg0) const
	{
		callMethod<void>(
			"setLayerPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	inline void TextureView::setLayerType(jint arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.object()
		);
	}
	inline void TextureView::setOpaque(jboolean arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	inline void TextureView::setSurfaceTexture(android::graphics::SurfaceTexture arg0) const
	{
		callMethod<void>(
			"setSurfaceTexture",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.object()
		);
	}
	inline void TextureView::setSurfaceTextureListener(JObject arg0) const
	{
		callMethod<void>(
			"setSurfaceTextureListener",
			"(Landroid/view/TextureView$SurfaceTextureListener;)V",
			arg0.object()
		);
	}
	inline void TextureView::setTransform(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"setTransform",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void TextureView::unlockCanvasAndPost(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"unlockCanvasAndPost",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers
#include "./View.hpp"

