#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer.hpp"

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
	class DrawableContainer_DrawableContainerState;
}

namespace android::graphics::drawable
{
	class StateListDrawable : public android::graphics::drawable::DrawableContainer
	{
	public:
		// Fields
		
		StateListDrawable(QAndroidJniObject obj);
		// Constructors
		StateListDrawable();
		
		// Methods
		void addState(jintArray arg0, android::graphics::drawable::Drawable arg1);
		void applyTheme(android::content::res::Resources_Theme arg0);
		jint findStateDrawableIndex(jintArray arg0);
		jint getStateCount();
		QAndroidJniObject getStateDrawable(jint arg0);
		jintArray getStateSet(jint arg0);
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isStateful();
		QAndroidJniObject mutate();
	};
} // namespace android::graphics::drawable

