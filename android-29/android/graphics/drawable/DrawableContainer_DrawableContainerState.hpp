#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable_ConstantState.hpp"

namespace android::content::res
{
	class Resources;
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
	class DrawableContainer;
}

namespace android::graphics::drawable
{
	class DrawableContainer_DrawableContainerState : public android::graphics::drawable::Drawable_ConstantState
	{
	public:
		// Fields
		
		DrawableContainer_DrawableContainerState(QAndroidJniObject obj);
		// Constructors
		DrawableContainer_DrawableContainerState() = default;
		
		// Methods
		jint addChild(android::graphics::drawable::Drawable arg0);
		jboolean canApplyTheme();
		jboolean canConstantState();
		jint getChangingConfigurations();
		QAndroidJniObject getChild(jint arg0);
		jint getChildCount();
		jarray getChildren();
		jint getConstantHeight();
		jint getConstantMinimumHeight();
		jint getConstantMinimumWidth();
		QAndroidJniObject getConstantPadding();
		jint getConstantWidth();
		jint getEnterFadeDuration();
		jint getExitFadeDuration();
		jint getOpacity();
		void growArray(jint arg0, jint arg1);
		jboolean isConstantSize();
		jboolean isStateful();
		void setConstantSize(jboolean arg0);
		void setEnterFadeDuration(jint arg0);
		void setExitFadeDuration(jint arg0);
		void setVariablePadding(jboolean arg0);
	};
} // namespace android::graphics::drawable

