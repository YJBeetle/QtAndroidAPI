#pragma once

#include "../view/ViewGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::widget
{
	class LinearLayout_LayoutParams;
}
class JString;

namespace android::widget
{
	class LinearLayout : public android::view::ViewGroup
	{
	public:
		// Fields
		static jint HORIZONTAL();
		static jint SHOW_DIVIDER_BEGINNING();
		static jint SHOW_DIVIDER_END();
		static jint SHOW_DIVIDER_MIDDLE();
		static jint SHOW_DIVIDER_NONE();
		static jint VERTICAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinearLayout(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		LinearLayout(QAndroidJniObject obj);
		
		// Constructors
		LinearLayout(android::content::Context arg0);
		LinearLayout(android::content::Context arg0, JObject arg1);
		LinearLayout(android::content::Context arg0, JObject arg1, jint arg2);
		LinearLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::widget::LinearLayout_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		jint getBaseline() const;
		jint getBaselineAlignedChildIndex() const;
		android::graphics::drawable::Drawable getDividerDrawable() const;
		jint getDividerPadding() const;
		jint getGravity() const;
		jint getOrientation() const;
		jint getShowDividers() const;
		jfloat getWeightSum() const;
		jboolean isBaselineAligned() const;
		jboolean isMeasureWithLargestChildEnabled() const;
		void onRtlPropertiesChanged(jint arg0) const;
		void setBaselineAligned(jboolean arg0) const;
		void setBaselineAlignedChildIndex(jint arg0) const;
		void setDividerDrawable(android::graphics::drawable::Drawable arg0) const;
		void setDividerPadding(jint arg0) const;
		void setGravity(jint arg0) const;
		void setHorizontalGravity(jint arg0) const;
		void setMeasureWithLargestChildEnabled(jboolean arg0) const;
		void setOrientation(jint arg0) const;
		void setShowDividers(jint arg0) const;
		void setVerticalGravity(jint arg0) const;
		void setWeightSum(jfloat arg0) const;
		jboolean shouldDelayChildPressedState() const;
	};
} // namespace android::widget

