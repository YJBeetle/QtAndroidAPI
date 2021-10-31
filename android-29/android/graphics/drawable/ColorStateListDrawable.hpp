#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"

namespace android::content::res
{
	class ColorStateList;
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
	class ColorStateListDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		ColorStateListDrawable(QAndroidJniObject obj);
		// Constructors
		ColorStateListDrawable();
		ColorStateListDrawable(android::content::res::ColorStateList arg0);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void clearAlpha();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		QAndroidJniObject getColorFilter();
		QAndroidJniObject getColorStateList();
		QAndroidJniObject getConstantState();
		QAndroidJniObject getCurrent();
		jint getOpacity();
		jboolean hasFocusStateSpecified();
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		jboolean isStateful();
		QAndroidJniObject mutate();
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1, jlong arg2);
		void setAlpha(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setColorStateList(android::content::res::ColorStateList arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1);
	};
} // namespace android::graphics::drawable

