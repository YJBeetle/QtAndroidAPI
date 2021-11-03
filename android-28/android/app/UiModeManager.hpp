#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::app
{
	class UiModeManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_ENTER_CAR_MODE();
		static JString ACTION_ENTER_DESK_MODE();
		static JString ACTION_EXIT_CAR_MODE();
		static JString ACTION_EXIT_DESK_MODE();
		static jint DISABLE_CAR_MODE_GO_HOME();
		static jint ENABLE_CAR_MODE_ALLOW_SLEEP();
		static jint ENABLE_CAR_MODE_GO_CAR_HOME();
		static jint MODE_NIGHT_AUTO();
		static jint MODE_NIGHT_NO();
		static jint MODE_NIGHT_YES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UiModeManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UiModeManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void disableCarMode(jint arg0) const;
		void enableCarMode(jint arg0) const;
		jint getCurrentModeType() const;
		jint getNightMode() const;
		void setNightMode(jint arg0) const;
	};
} // namespace android::app

