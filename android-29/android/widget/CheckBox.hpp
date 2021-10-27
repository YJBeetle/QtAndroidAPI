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
	class CheckBox : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		CheckBox(QAndroidJniObject obj);
		// Constructors
		CheckBox(android::content::Context &arg0);
		CheckBox(android::content::Context &arg0, __JniBaseClass &arg1);
		CheckBox(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		CheckBox(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		CheckBox() = default;
		
		// Methods
		jstring getAccessibilityClassName();
	};
} // namespace android::widget

