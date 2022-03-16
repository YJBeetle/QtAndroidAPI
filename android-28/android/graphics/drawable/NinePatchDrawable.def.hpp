#pragma once

#include "./Drawable.def.hpp"

class JByteArray;
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
	class NinePatch;
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
	class Region;
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
class JString;

namespace android::graphics::drawable
{
	class NinePatchDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NinePatchDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		NinePatchDrawable(QJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		NinePatchDrawable(android::graphics::NinePatch arg0);
		NinePatchDrawable(android::content::res::Resources arg0, android::graphics::NinePatch arg1);
		NinePatchDrawable(android::graphics::Bitmap arg0, JByteArray arg1, android::graphics::Rect arg2, JString arg3);
		NinePatchDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1, JByteArray arg2, android::graphics::Rect arg3, JString arg4);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		jint getChangingConfigurations() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getOpacity() const;
		void getOutline(android::graphics::Outline arg0) const;
		jboolean getPadding(android::graphics::Rect arg0) const;
		android::graphics::Paint getPaint() const;
		android::graphics::Region getTransparentRegion() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isAutoMirrored() const;
		jboolean isFilterBitmap() const;
		jboolean isStateful() const;
		android::graphics::drawable::Drawable mutate() const;
		void setAlpha(jint arg0) const;
		void setAutoMirrored(jboolean arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setDither(jboolean arg0) const;
		void setFilterBitmap(jboolean arg0) const;
		void setTargetDensity(android::graphics::Canvas arg0) const;
		void setTargetDensity(android::util::DisplayMetrics arg0) const;
		void setTargetDensity(jint arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		void setTintMode(android::graphics::PorterDuff_Mode arg0) const;
	};
} // namespace android::graphics::drawable

