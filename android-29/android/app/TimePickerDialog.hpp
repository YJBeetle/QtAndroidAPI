#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit TimePickerDialog(const char *className, const char *sig, Ts...agv) : android::app::AlertDialog(className, sig, std::forward<Ts>(agv)...) {}
		TimePickerDialog(QJniObject obj);
		
		// Constructors
		TimePickerDialog(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jboolean arg4);
		TimePickerDialog(android::content::Context arg0, jint arg1, JObject arg2, jint arg3, jint arg4, jboolean arg5);
		
		// Methods
		void onClick(JObject arg0, jint arg1) const;
		void onRestoreInstanceState(android::os::Bundle arg0) const;
		android::os::Bundle onSaveInstanceState() const;
		void onTimeChanged(android::widget::TimePicker arg0, jint arg1, jint arg2) const;
		void show() const;
		void updateTime(jint arg0, jint arg1) const;
	};
} // namespace android::app

