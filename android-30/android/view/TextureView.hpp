#pragma once

#include "./View.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class SurfaceTexture;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class TextureView : public android::view::View
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextureView(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		TextureView(QJniObject obj);
		
		// Constructors
		TextureView(android::content::Context arg0);
		TextureView(android::content::Context arg0, JObject arg1);
		TextureView(android::content::Context arg0, JObject arg1, jint arg2);
		TextureView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void buildLayer() const;
		void draw(android::graphics::Canvas arg0) const;
		android::graphics::Bitmap getBitmap() const;
		android::graphics::Bitmap getBitmap(android::graphics::Bitmap arg0) const;
		android::graphics::Bitmap getBitmap(jint arg0, jint arg1) const;
		jint getLayerType() const;
		android::graphics::SurfaceTexture getSurfaceTexture() const;
		JObject getSurfaceTextureListener() const;
		android::graphics::Matrix getTransform(android::graphics::Matrix arg0) const;
		jboolean isAvailable() const;
		jboolean isOpaque() const;
		android::graphics::Canvas lockCanvas() const;
		android::graphics::Canvas lockCanvas(android::graphics::Rect arg0) const;
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setForeground(android::graphics::drawable::Drawable arg0) const;
		void setLayerPaint(android::graphics::Paint arg0) const;
		void setLayerType(jint arg0, android::graphics::Paint arg1) const;
		void setOpaque(jboolean arg0) const;
		void setSurfaceTexture(android::graphics::SurfaceTexture arg0) const;
		void setSurfaceTextureListener(JObject arg0) const;
		void setTransform(android::graphics::Matrix arg0) const;
		void unlockCanvasAndPost(android::graphics::Canvas arg0) const;
	};
} // namespace android::view

