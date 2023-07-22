#pragma once

#include "./AbsSeekBar.def.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::widget
{
	class SeekBar : public android::widget::AbsSeekBar
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SeekBar(const char *className, const char *sig, Ts...agv) : android::widget::AbsSeekBar(className, sig, std::forward<Ts>(agv)...) {}
		SeekBar(QAndroidJniObject obj) : android::widget::AbsSeekBar(obj) {}
		
		// Constructors
		SeekBar(android::content::Context arg0);
		SeekBar(android::content::Context arg0, JObject arg1);
		SeekBar(android::content::Context arg0, JObject arg1, jint arg2);
		SeekBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName() const;
		void setOnSeekBarChangeListener(JObject arg0) const;
	};
} // namespace android::widget

