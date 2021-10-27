#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"
#include "./DrawableWrapper.hpp"

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
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::graphics::drawable
{
	class ScaleDrawable : public android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		
		ScaleDrawable(QAndroidJniObject obj);
		// Constructors
		ScaleDrawable(android::graphics::drawable::Drawable &arg0, jint &arg1, jfloat &arg2, jfloat &arg3);
		ScaleDrawable() = default;
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		void draw(android::graphics::Canvas arg0);
		jint getOpacity();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
	};
} // namespace android::graphics::drawable

