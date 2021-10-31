#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"

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
	class BlendMode;
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
	class Insets;
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

namespace android::graphics::drawable
{
	class BitmapDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BitmapDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		BitmapDrawable(QJniObject obj);
		
		// Constructors
		BitmapDrawable();
		BitmapDrawable(android::content::res::Resources arg0);
		BitmapDrawable(android::graphics::Bitmap arg0);
		BitmapDrawable(java::io::InputStream arg0);
		BitmapDrawable(jstring arg0);
		BitmapDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1);
		BitmapDrawable(android::content::res::Resources arg0, java::io::InputStream arg1);
		BitmapDrawable(android::content::res::Resources arg0, jstring arg1);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		android::graphics::Bitmap getBitmap();
		jint getChangingConfigurations();
		android::graphics::ColorFilter getColorFilter();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		jint getGravity();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		android::graphics::Insets getOpticalInsets();
		void getOutline(android::graphics::Outline arg0);
		android::graphics::Paint getPaint();
		android::graphics::Shader_TileMode getTileModeX();
		android::graphics::Shader_TileMode getTileModeY();
		jboolean hasAntiAlias();
		jboolean hasFocusStateSpecified();
		jboolean hasMipMap();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isAutoMirrored();
		jboolean isFilterBitmap();
		jboolean isStateful();
		android::graphics::drawable::Drawable mutate();
		void setAlpha(jint arg0);
		void setAntiAlias(jboolean arg0);
		void setAutoMirrored(jboolean arg0);
		void setBitmap(android::graphics::Bitmap arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setFilterBitmap(jboolean arg0);
		void setGravity(jint arg0);
		void setMipMap(jboolean arg0);
		void setTargetDensity(android::graphics::Canvas arg0);
		void setTargetDensity(android::util::DisplayMetrics arg0);
		void setTargetDensity(jint arg0);
		void setTileModeX(android::graphics::Shader_TileMode arg0);
		void setTileModeXY(android::graphics::Shader_TileMode arg0, android::graphics::Shader_TileMode arg1);
		void setTileModeY(android::graphics::Shader_TileMode arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
	};
} // namespace android::graphics::drawable

