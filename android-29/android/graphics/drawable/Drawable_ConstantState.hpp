#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::graphics::drawable
{
	class Drawable_ConstantState : public __JniBaseClass
	{
	public:
		// Fields
		
		Drawable_ConstantState(QAndroidJniObject obj);
		// Constructors
		Drawable_ConstantState();
		
		// Methods
		jboolean canApplyTheme();
		jint getChangingConfigurations();
		QAndroidJniObject newDrawable();
		QAndroidJniObject newDrawable(android::content::res::Resources arg0);
		QAndroidJniObject newDrawable(android::content::res::Resources arg0, android::content::res::Resources_Theme arg1);
	};
} // namespace android::graphics::drawable

