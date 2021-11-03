#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./Button.hpp"
#include "./CompoundButton.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class RadioButton : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RadioButton(const char *className, const char *sig, Ts...agv) : android::widget::CompoundButton(className, sig, std::forward<Ts>(agv)...) {}
		RadioButton(QAndroidJniObject obj);
		
		// Constructors
		RadioButton(android::content::Context arg0);
		RadioButton(android::content::Context arg0, JObject arg1);
		RadioButton(android::content::Context arg0, JObject arg1, jint arg2);
		RadioButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		void toggle();
	};
} // namespace android::widget

