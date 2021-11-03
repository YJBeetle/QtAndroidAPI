#pragma once

#include "./Drawable_ConstantState.hpp"

class JArray;
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
	class DrawableContainer_DrawableContainerState : public android::graphics::drawable::Drawable_ConstantState
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrawableContainer_DrawableContainerState(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable_ConstantState(className, sig, std::forward<Ts>(agv)...) {}
		DrawableContainer_DrawableContainerState(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint addChild(android::graphics::drawable::Drawable arg0) const;
		jboolean canApplyTheme() const;
		jboolean canConstantState() const;
		jint getChangingConfigurations() const;
		android::graphics::drawable::Drawable getChild(jint arg0) const;
		jint getChildCount() const;
		JArray getChildren() const;
		jint getConstantHeight() const;
		jint getConstantMinimumHeight() const;
		jint getConstantMinimumWidth() const;
		android::graphics::Rect getConstantPadding() const;
		jint getConstantWidth() const;
		jint getEnterFadeDuration() const;
		jint getExitFadeDuration() const;
		jint getOpacity() const;
		void growArray(jint arg0, jint arg1) const;
		jboolean isConstantSize() const;
		jboolean isStateful() const;
		void setConstantSize(jboolean arg0) const;
		void setEnterFadeDuration(jint arg0) const;
		void setExitFadeDuration(jint arg0) const;
		void setVariablePadding(jboolean arg0) const;
	};
} // namespace android::graphics::drawable

