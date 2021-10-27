#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class TextClock : public android::widget::TextView
	{
	public:
		// Fields
		static jstring DEFAULT_FORMAT_12_HOUR();
		static jstring DEFAULT_FORMAT_24_HOUR();
		
		TextClock(QAndroidJniObject obj);
		// Constructors
		TextClock(android::content::Context &arg0);
		TextClock(android::content::Context &arg0, __JniBaseClass &arg1);
		TextClock(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		TextClock(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		TextClock() = default;
		
		// Methods
		jstring getFormat12Hour();
		jstring getFormat24Hour();
		jstring getTimeZone();
		jboolean is24HourModeEnabled();
		void onVisibilityAggregated(jboolean arg0);
		void setFormat12Hour(jstring arg0);
		void setFormat12Hour(const QString &arg0);
		void setFormat24Hour(jstring arg0);
		void setFormat24Hour(const QString &arg0);
		void setTimeZone(jstring arg0);
		void setTimeZone(const QString &arg0);
	};
} // namespace android::widget

