#pragma once

#include "../view/ViewGroup.def.hpp"

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
	class RelativeLayout_LayoutParams;
}
class JString;

namespace android::widget
{
	class RelativeLayout : public android::view::ViewGroup
	{
	public:
		// Fields
		static jint ABOVE();
		static jint ALIGN_BASELINE();
		static jint ALIGN_BOTTOM();
		static jint ALIGN_END();
		static jint ALIGN_LEFT();
		static jint ALIGN_PARENT_BOTTOM();
		static jint ALIGN_PARENT_END();
		static jint ALIGN_PARENT_LEFT();
		static jint ALIGN_PARENT_RIGHT();
		static jint ALIGN_PARENT_START();
		static jint ALIGN_PARENT_TOP();
		static jint ALIGN_RIGHT();
		static jint ALIGN_START();
		static jint ALIGN_TOP();
		static jint BELOW();
		static jint CENTER_HORIZONTAL();
		static jint CENTER_IN_PARENT();
		static jint CENTER_VERTICAL();
		static jint END_OF();
		static jint LEFT_OF();
		static jint RIGHT_OF();
		static jint START_OF();
		static jint TRUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeLayout(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		RelativeLayout(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
		
		// Constructors
		RelativeLayout(android::content::Context arg0);
		RelativeLayout(android::content::Context arg0, JObject arg1);
		RelativeLayout(android::content::Context arg0, JObject arg1, jint arg2);
		RelativeLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::widget::RelativeLayout_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		jint getBaseline() const;
		jint getGravity() const;
		void requestLayout() const;
		void setGravity(jint arg0) const;
		void setHorizontalGravity(jint arg0) const;
		void setIgnoreGravity(jint arg0) const;
		void setVerticalGravity(jint arg0) const;
		jboolean shouldDelayChildPressedState() const;
	};
} // namespace android::widget

