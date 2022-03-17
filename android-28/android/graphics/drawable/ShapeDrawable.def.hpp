#pragma once

#include "./Drawable.def.hpp"

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
	class ShapeDrawable_ShaderFactory;
}
namespace android::graphics::drawable::shapes
{
	class Shape;
}
class JString;

namespace android::graphics::drawable
{
	class ShapeDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShapeDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		ShapeDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		ShapeDrawable();
		ShapeDrawable(android::graphics::drawable::shapes::Shape arg0);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
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
		android::graphics::drawable::ShapeDrawable_ShaderFactory getShaderFactory() const;
		android::graphics::drawable::shapes::Shape getShape() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isStateful() const;
		android::graphics::drawable::Drawable mutate() const;
		void setAlpha(jint arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setDither(jboolean arg0) const;
		void setIntrinsicHeight(jint arg0) const;
		void setIntrinsicWidth(jint arg0) const;
		void setPadding(android::graphics::Rect arg0) const;
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setShaderFactory(android::graphics::drawable::ShapeDrawable_ShaderFactory arg0) const;
		void setShape(android::graphics::drawable::shapes::Shape arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		void setTintMode(android::graphics::PorterDuff_Mode arg0) const;
	};
} // namespace android::graphics::drawable

