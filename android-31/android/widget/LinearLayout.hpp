#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
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
		android::widget::LinearLayout_LayoutParams generateLayoutParams(JObject arg0);
		jstring getAccessibilityClassName();
		jint getBaseline();
		jint getBaselineAlignedChildIndex();
		android::graphics::drawable::Drawable getDividerDrawable();
		jint getDividerPadding();
		jint getGravity();
		jint getOrientation();
		jint getShowDividers();
		jfloat getWeightSum();
		jboolean isBaselineAligned();
		jboolean isMeasureWithLargestChildEnabled();
		void onRtlPropertiesChanged(jint arg0);
		void setBaselineAligned(jboolean arg0);
		void setBaselineAlignedChildIndex(jint arg0);
		void setDividerDrawable(android::graphics::drawable::Drawable arg0);
		void setDividerPadding(jint arg0);
		void setGravity(jint arg0);
		void setHorizontalGravity(jint arg0);
		void setMeasureWithLargestChildEnabled(jboolean arg0);
		void setOrientation(jint arg0);
		void setShowDividers(jint arg0);
		void setVerticalGravity(jint arg0);
		void setWeightSum(jfloat arg0);
		jboolean shouldDelayChildPressedState();
	};
} // namespace android::widget

