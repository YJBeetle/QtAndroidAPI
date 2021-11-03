#pragma once

#include "../../../JObject.hpp"
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

namespace android::graphics::drawable
{
	class NinePatchDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NinePatchDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		NinePatchDrawable(QAndroidJniObject obj);
		
		// Constructors
		NinePatchDrawable(android::graphics::NinePatch arg0);
		NinePatchDrawable(android::content::res::Resources arg0, android::graphics::NinePatch arg1);
		NinePatchDrawable(android::graphics::Bitmap arg0, jbyteArray arg1, android::graphics::Rect arg2, jstring arg3);
		NinePatchDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1, jbyteArray arg2, android::graphics::Rect arg3, jstring arg4);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		void getOutline(android::graphics::Outline arg0);
		jboolean getPadding(android::graphics::Rect arg0);
		android::graphics::Paint getPaint();
		android::graphics::Region getTransparentRegion();
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		jboolean isAutoMirrored();
		jboolean isFilterBitmap();
		jboolean isStateful();
		android::graphics::drawable::Drawable mutate();
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setFilterBitmap(jboolean arg0);
		void setTargetDensity(android::graphics::Canvas arg0);
		void setTargetDensity(android::util::DisplayMetrics arg0);
		void setTargetDensity(jint arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		void setTintMode(android::graphics::PorterDuff_Mode arg0);
	};
} // namespace android::graphics::drawable

