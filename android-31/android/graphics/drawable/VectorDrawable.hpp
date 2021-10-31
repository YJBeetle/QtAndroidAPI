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
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::graphics::drawable
{
	class Drawable_ConstantState;
}

namespace android::graphics::drawable
{
	class VectorDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VectorDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		VectorDrawable(QJniObject obj);
		
		// Constructors
		VectorDrawable();
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		android::graphics::ColorFilter getColorFilter();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		android::graphics::Insets getOpticalInsets();
		jboolean hasFocusStateSpecified();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isAutoMirrored();
		jboolean isStateful();
		android::graphics::drawable::Drawable mutate();
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
	};
} // namespace android::graphics::drawable

