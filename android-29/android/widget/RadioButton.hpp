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

namespace android::widget
{
	class RadioButton : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		RadioButton(QAndroidJniObject obj);
		// Constructors
		RadioButton(android::content::Context arg0);
		RadioButton(android::content::Context arg0, __JniBaseClass arg1);
		RadioButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		RadioButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		RadioButton() = default;
		
		// Methods
		jstring getAccessibilityClassName();
		void toggle();
	};
} // namespace android::widget

