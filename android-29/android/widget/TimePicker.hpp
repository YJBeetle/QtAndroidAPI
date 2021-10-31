#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace java::lang
{
	class Boolean;
}
namespace java::lang
{
	class Integer;
}

namespace android::widget
{
	class TimePicker : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		TimePicker(QAndroidJniObject obj);
		// Constructors
		TimePicker(android::content::Context arg0);
		TimePicker(android::content::Context arg0, __JniBaseClass arg1);
		TimePicker(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		TimePicker(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		TimePicker() = default;
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0);
		void dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		jstring getAccessibilityClassName();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		jint getBaseline();
		QAndroidJniObject getCurrentHour();
		QAndroidJniObject getCurrentMinute();
		jint getHour();
		jint getMinute();
		jboolean is24HourView();
		jboolean isEnabled();
		void setCurrentHour(java::lang::Integer arg0);
		void setCurrentMinute(java::lang::Integer arg0);
		void setEnabled(jboolean arg0);
		void setHour(jint arg0);
		void setIs24HourView(java::lang::Boolean arg0);
		void setMinute(jint arg0);
		void setOnTimeChangedListener(__JniBaseClass arg0);
		jboolean validateInput();
	};
} // namespace android::widget

