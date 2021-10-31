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
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::widget
{
	class ToggleButton : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ToggleButton(const char *className, const char *sig, Ts...agv) : android::widget::CompoundButton(className, sig, std::forward<Ts>(agv)...) {}
		ToggleButton(QAndroidJniObject obj);
		
		// Constructors
		ToggleButton(android::content::Context arg0);
		ToggleButton(android::content::Context arg0, __JniBaseClass arg1);
		ToggleButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		ToggleButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		jstring getTextOff();
		jstring getTextOn();
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setChecked(jboolean arg0);
		void setTextOff(jstring arg0);
		void setTextOn(jstring arg0);
	};
} // namespace android::widget

