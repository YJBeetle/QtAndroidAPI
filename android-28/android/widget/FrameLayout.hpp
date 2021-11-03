#pragma once

#include "../view/ViewGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::widget
{
	class FrameLayout_LayoutParams;
}
class JString;

namespace android::widget
{
	class FrameLayout : public android::view::ViewGroup
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FrameLayout(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		FrameLayout(QAndroidJniObject obj);
		
		// Constructors
		FrameLayout(android::content::Context arg0);
		FrameLayout(android::content::Context arg0, JObject arg1);
		FrameLayout(android::content::Context arg0, JObject arg1, jint arg2);
		FrameLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::widget::FrameLayout_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		jboolean getConsiderGoneChildrenWhenMeasuring() const;
		jboolean getMeasureAllChildren() const;
		void setForegroundGravity(jint arg0) const;
		void setMeasureAllChildren(jboolean arg0) const;
		jboolean shouldDelayChildPressedState() const;
	};
} // namespace android::widget

