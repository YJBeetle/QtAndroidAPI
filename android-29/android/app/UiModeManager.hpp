#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class UiModeManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_ENTER_CAR_MODE();
		static jstring ACTION_ENTER_DESK_MODE();
		static jstring ACTION_EXIT_CAR_MODE();
		static jstring ACTION_EXIT_DESK_MODE();
		static jint DISABLE_CAR_MODE_GO_HOME();
		static jint ENABLE_CAR_MODE_ALLOW_SLEEP();
		static jint ENABLE_CAR_MODE_GO_CAR_HOME();
		static jint MODE_NIGHT_AUTO();
		static jint MODE_NIGHT_NO();
		static jint MODE_NIGHT_YES();
		
		UiModeManager(QAndroidJniObject obj);
		// Constructors
		UiModeManager() = default;
		
		// Methods
		void disableCarMode(jint arg0);
		void enableCarMode(jint arg0);
		jint getCurrentModeType();
		jint getNightMode();
		void setNightMode(jint arg0);
	};
} // namespace android::app

