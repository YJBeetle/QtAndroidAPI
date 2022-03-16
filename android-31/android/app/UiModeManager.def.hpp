#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::time
{
	class LocalTime;
}

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
		static jint MODE_NIGHT_CUSTOM();
		static jint MODE_NIGHT_NO();
		static jint MODE_NIGHT_YES();
		
		// QJniObject forward
		template<typename ...Ts> explicit UiModeManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UiModeManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void disableCarMode(jint arg0) const;
		void enableCarMode(jint arg0) const;
		jint getCurrentModeType() const;
		java::time::LocalTime getCustomNightModeEnd() const;
		java::time::LocalTime getCustomNightModeStart() const;
		jint getNightMode() const;
		void setApplicationNightMode(jint arg0) const;
		void setCustomNightModeEnd(java::time::LocalTime arg0) const;
		void setCustomNightModeStart(java::time::LocalTime arg0) const;
		void setNightMode(jint arg0) const;
	};
} // namespace android::app

