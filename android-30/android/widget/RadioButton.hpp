#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./Button.hpp"
#include "./CompoundButton.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::widget
{
	class RadioButton : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RadioButton(const char *className, const char *sig, Ts...agv) : android::widget::CompoundButton(className, sig, std::forward<Ts>(agv)...) {}
		RadioButton(QJniObject obj);
		
		// Constructors
		RadioButton(android::content::Context arg0);
		RadioButton(android::content::Context arg0, __JniBaseClass arg1);
		RadioButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		RadioButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		void onInitializeAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0);
		void toggle();
	};
} // namespace android::widget

