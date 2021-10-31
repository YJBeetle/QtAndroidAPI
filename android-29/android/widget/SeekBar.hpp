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
		
		SeekBar(QAndroidJniObject obj);
		// Constructors
		SeekBar(android::content::Context arg0);
		SeekBar(android::content::Context arg0, __JniBaseClass arg1);
		SeekBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		SeekBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		SeekBar() = default;
		
		// Methods
		jstring getAccessibilityClassName();
		void setOnSeekBarChangeListener(__JniBaseClass arg0);
	};
} // namespace android::widget

