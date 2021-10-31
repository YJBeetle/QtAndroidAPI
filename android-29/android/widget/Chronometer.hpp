#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class Chronometer : public android::widget::TextView
	{
	public:
		// Fields
		
		Chronometer(QAndroidJniObject obj);
		// Constructors
		Chronometer(android::content::Context arg0);
		Chronometer(android::content::Context arg0, __JniBaseClass arg1);
		Chronometer(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		Chronometer(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		Chronometer() = default;
		
		// Methods
		jstring getAccessibilityClassName();
		jlong getBase();
		jstring getContentDescription();
		jstring getFormat();
		QAndroidJniObject getOnChronometerTickListener();
		jboolean isCountDown();
		jboolean isTheFinalCountDown();
		void setBase(jlong arg0);
		void setCountDown(jboolean arg0);
		void setFormat(jstring arg0);
		void setOnChronometerTickListener(__JniBaseClass arg0);
		void start();
		void stop();
	};
} // namespace android::widget

