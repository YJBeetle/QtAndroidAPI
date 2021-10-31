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

namespace android::graphics::drawable
{
	class ShapeDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShapeDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		ShapeDrawable(QAndroidJniObject obj);
		
		// Constructors
		ShapeDrawable();
		ShapeDrawable(android::graphics::drawable::shapes::Shape arg0);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
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
		android::graphics::drawable::ShapeDrawable_ShaderFactory getShaderFactory();
		android::graphics::drawable::shapes::Shape getShape();
		jboolean hasFocusStateSpecified();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isStateful();
		android::graphics::drawable::Drawable mutate();
		void setAlpha(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setIntrinsicHeight(jint arg0);
		void setIntrinsicWidth(jint arg0);
		void setPadding(android::graphics::Rect arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setShaderFactory(android::graphics::drawable::ShapeDrawable_ShaderFactory arg0);
		void setShape(android::graphics::drawable::shapes::Shape arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
	};
} // namespace android::graphics::drawable

