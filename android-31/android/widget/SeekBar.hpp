#pragma once

#include "./AbsSeekBar.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit SeekBar(const char *className, const char *sig, Ts...agv) : android::widget::AbsSeekBar(className, sig, std::forward<Ts>(agv)...) {}
		SeekBar(QJniObject obj);
		
		// Constructors
		SeekBar(android::content::Context arg0);
		SeekBar(android::content::Context arg0, JObject arg1);
		SeekBar(android::content::Context arg0, JObject arg1, jint arg2);
		SeekBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName();
		void setOnSeekBarChangeListener(JObject arg0);
	};
} // namespace android::widget

