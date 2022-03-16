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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VectorDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		VectorDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		VectorDrawable();
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		jint getChangingConfigurations() const;
		android::graphics::ColorFilter getColorFilter() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getOpacity() const;
		android::graphics::Insets getOpticalInsets() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isAutoMirrored() const;
		jboolean isStateful() const;
		android::graphics::drawable::Drawable mutate() const;
		void setAlpha(jint arg0) const;
		void setAutoMirrored(jboolean arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setTintBlendMode(android::graphics::BlendMode arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
	};
} // namespace android::graphics::drawable

