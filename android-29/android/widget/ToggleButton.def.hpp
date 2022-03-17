#pragma once

#include "./CompoundButton.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ToggleButton(const char *className, const char *sig, Ts...agv) : android::widget::CompoundButton(className, sig, std::forward<Ts>(agv)...) {}
		ToggleButton(QAndroidJniObject obj) : android::widget::CompoundButton(obj) {}
		
		// Constructors
		ToggleButton(android::content::Context arg0);
		ToggleButton(android::content::Context arg0, JObject arg1);
		ToggleButton(android::content::Context arg0, JObject arg1, jint arg2);
		ToggleButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName() const;
		jfloat getDisabledAlpha() const;
		JString getTextOff() const;
		JString getTextOn() const;
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setChecked(jboolean arg0) const;
		void setTextOff(JString arg0) const;
		void setTextOn(JString arg0) const;
	};
} // namespace android::widget

