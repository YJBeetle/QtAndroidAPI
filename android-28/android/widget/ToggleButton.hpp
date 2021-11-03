#pragma once

#include "./CompoundButton.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
}
class JString;

namespace android::widget
{
	class ToggleButton : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ToggleButton(const char *className, const char *sig, Ts...agv) : android::widget::CompoundButton(className, sig, std::forward<Ts>(agv)...) {}
		ToggleButton(QJniObject obj);
		
		// Constructors
		ToggleButton(android::content::Context arg0);
		ToggleButton(android::content::Context arg0, JObject arg1);
		ToggleButton(android::content::Context arg0, JObject arg1, jint arg2);
		ToggleButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName();
		JString getTextOff();
		JString getTextOn();
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setChecked(jboolean arg0);
		void setTextOff(JString arg0);
		void setTextOn(JString arg0);
	};
} // namespace android::widget

