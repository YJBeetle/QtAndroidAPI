#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Dialog.hpp"
#include "./AlertDialog.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::widget
{
	class TimePicker;
}

namespace android::app
{
	class TimePickerDialog : public android::app::AlertDialog
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimePickerDialog(const char *className, const char *sig, Ts...agv) : android::app::AlertDialog(className, sig, std::forward<Ts>(agv)...) {}
		TimePickerDialog(QAndroidJniObject obj);
		
		// Constructors
		TimePickerDialog(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jboolean arg4);
		TimePickerDialog(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jint arg3, jint arg4, jboolean arg5);
		
		// Methods
		void onClick(__JniBaseClass arg0, jint arg1);
		void onRestoreInstanceState(android::os::Bundle arg0);
		QAndroidJniObject onSaveInstanceState();
		void onTimeChanged(android::widget::TimePicker arg0, jint arg1, jint arg2);
		void show();
		void updateTime(jint arg0, jint arg1);
	};
} // namespace android::app

