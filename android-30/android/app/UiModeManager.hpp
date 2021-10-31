#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::time
{
	class LocalTime;
}

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
		static jint MODE_NIGHT_CUSTOM();
		static jint MODE_NIGHT_NO();
		static jint MODE_NIGHT_YES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UiModeManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UiModeManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void disableCarMode(jint arg0);
		void enableCarMode(jint arg0);
		jint getCurrentModeType();
		java::time::LocalTime getCustomNightModeEnd();
		java::time::LocalTime getCustomNightModeStart();
		jint getNightMode();
		void setCustomNightModeEnd(java::time::LocalTime arg0);
		void setCustomNightModeStart(java::time::LocalTime arg0);
		void setNightMode(jint arg0);
	};
} // namespace android::app

