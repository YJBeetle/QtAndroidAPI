#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./ProgressBar.hpp"
#include "./AbsSeekBar.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class SeekBar : public android::widget::AbsSeekBar
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SeekBar(const char *className, const char *sig, Ts...agv) : android::widget::AbsSeekBar(className, sig, std::forward<Ts>(agv)...) {}
		SeekBar(QAndroidJniObject obj);
		
		// Constructors
		SeekBar(android::content::Context arg0);
		SeekBar(android::content::Context arg0, __JniBaseClass arg1);
		SeekBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		SeekBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		void setOnSeekBarChangeListener(__JniBaseClass arg0);
	};
} // namespace android::widget

