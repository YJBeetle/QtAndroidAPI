#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class ActivityManager_TaskDescription;
}
class JString;

namespace android::app
{
	class ActivityManager_TaskDescription_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager_TaskDescription_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_TaskDescription_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActivityManager_TaskDescription_Builder();
		
		// Methods
		android::app::ActivityManager_TaskDescription build() const;
		android::app::ActivityManager_TaskDescription_Builder setBackgroundColor(jint arg0) const;
		android::app::ActivityManager_TaskDescription_Builder setIcon(jint arg0) const;
		android::app::ActivityManager_TaskDescription_Builder setLabel(JString arg0) const;
		android::app::ActivityManager_TaskDescription_Builder setNavigationBarColor(jint arg0) const;
		android::app::ActivityManager_TaskDescription_Builder setPrimaryColor(jint arg0) const;
		android::app::ActivityManager_TaskDescription_Builder setStatusBarColor(jint arg0) const;
	};
} // namespace android::app

