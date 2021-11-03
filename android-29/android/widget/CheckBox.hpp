#pragma once

#include "./CompoundButton.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::widget
{
	class CheckBox : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CheckBox(const char *className, const char *sig, Ts...agv) : android::widget::CompoundButton(className, sig, std::forward<Ts>(agv)...) {}
		CheckBox(QJniObject obj);
		
		// Constructors
		CheckBox(android::content::Context arg0);
		CheckBox(android::content::Context arg0, JObject arg1);
		CheckBox(android::content::Context arg0, JObject arg1, jint arg2);
		CheckBox(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName() const;
	};
} // namespace android::widget

