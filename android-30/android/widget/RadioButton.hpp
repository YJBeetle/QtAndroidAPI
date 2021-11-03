#pragma once

#include "./CompoundButton.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
class JString;

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
		RadioButton(android::content::Context arg0, JObject arg1);
		RadioButton(android::content::Context arg0, JObject arg1, jint arg2);
		RadioButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName();
		void onInitializeAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0);
		void toggle();
	};
} // namespace android::widget

