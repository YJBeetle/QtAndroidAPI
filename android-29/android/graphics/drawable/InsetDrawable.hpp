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
	class Insets;
}
namespace android::graphics
{
	class Outline;
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
	class InsetDrawable : public android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		
		InsetDrawable(QAndroidJniObject obj);
		// Constructors
		InsetDrawable(android::graphics::drawable::Drawable arg0, jfloat arg1);
		InsetDrawable(android::graphics::drawable::Drawable arg0, jint arg1);
		InsetDrawable(android::graphics::drawable::Drawable arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		InsetDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		InsetDrawable() = default;
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		QAndroidJniObject getOpticalInsets();
		void getOutline(android::graphics::Outline arg0);
		jboolean getPadding(android::graphics::Rect arg0);
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
	};
} // namespace android::graphics::drawable

