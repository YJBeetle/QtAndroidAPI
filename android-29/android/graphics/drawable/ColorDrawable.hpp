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
	class ColorDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		ColorDrawable(QAndroidJniObject obj);
		// Constructors
		ColorDrawable();
		ColorDrawable(jint arg0);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		jint getColor();
		QAndroidJniObject getColorFilter();
		QAndroidJniObject getConstantState();
		jint getOpacity();
		void getOutline(android::graphics::Outline arg0);
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isStateful();
		QAndroidJniObject mutate();
		void setAlpha(jint arg0);
		void setColor(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
	};
} // namespace android::graphics::drawable

