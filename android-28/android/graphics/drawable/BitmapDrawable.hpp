#pragma once

#include "./Drawable.hpp"

class JIntArray;
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
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
	class ColorFilter;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Shader_TileMode;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::graphics::drawable
{
	class Drawable_ConstantState;
}
namespace android::util
{
	class DisplayMetrics;
}
namespace java::io
{
	class InputStream;
}
class JString;

namespace android::graphics::drawable
{
	class BitmapDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BitmapDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		BitmapDrawable(QAndroidJniObject obj);
		
		// Constructors
		BitmapDrawable();
		BitmapDrawable(android::content::res::Resources arg0);
		BitmapDrawable(android::graphics::Bitmap arg0);
		BitmapDrawable(java::io::InputStream arg0);
		BitmapDrawable(JString arg0);
		BitmapDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1);
		BitmapDrawable(android::content::res::Resources arg0, java::io::InputStream arg1);
		BitmapDrawable(android::content::res::Resources arg0, JString arg1);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		android::graphics::Bitmap getBitmap() const;
		jint getChangingConfigurations() const;
		android::graphics::ColorFilter getColorFilter() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		jint getGravity() const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getOpacity() const;
		void getOutline(android::graphics::Outline arg0) const;
		android::graphics::Paint getPaint() const;
		android::graphics::Shader_TileMode getTileModeX() const;
		android::graphics::Shader_TileMode getTileModeY() const;
		jboolean hasAntiAlias() const;
		jboolean hasMipMap() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isAutoMirrored() const;
		jboolean isFilterBitmap() const;
		jboolean isStateful() const;
		android::graphics::drawable::Drawable mutate() const;
		void setAlpha(jint arg0) const;
		void setAntiAlias(jboolean arg0) const;
		void setAutoMirrored(jboolean arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setDither(jboolean arg0) const;
		void setFilterBitmap(jboolean arg0) const;
		void setGravity(jint arg0) const;
		void setMipMap(jboolean arg0) const;
		void setTargetDensity(android::graphics::Canvas arg0) const;
		void setTargetDensity(android::util::DisplayMetrics arg0) const;
		void setTargetDensity(jint arg0) const;
		void setTileModeX(android::graphics::Shader_TileMode arg0) const;
		void setTileModeXY(android::graphics::Shader_TileMode arg0, android::graphics::Shader_TileMode arg1) const;
		void setTileModeY(android::graphics::Shader_TileMode arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		void setTintMode(android::graphics::PorterDuff_Mode arg0) const;
	};
} // namespace android::graphics::drawable

