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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrawableContainer_DrawableContainerState(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable_ConstantState(className, sig, std::forward<Ts>(agv)...) {}
		DrawableContainer_DrawableContainerState(QAndroidJniObject obj);
		
		// Constructors
		
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

