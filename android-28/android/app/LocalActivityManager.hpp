#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class Window;
}

namespace android::app
{
	class LocalActivityManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalActivityManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocalActivityManager(QAndroidJniObject obj);
		
		// Constructors
		LocalActivityManager(android::app::Activity arg0, jboolean arg1);
		
		// Methods
		android::view::Window destroyActivity(jstring arg0, jboolean arg1);
		void dispatchCreate(android::os::Bundle arg0);
		void dispatchDestroy(jboolean arg0);
		void dispatchPause(jboolean arg0);
		void dispatchResume();
		void dispatchStop();
		android::app::Activity getActivity(jstring arg0);
		android::app::Activity getCurrentActivity();
		jstring getCurrentId();
		void removeAllActivities();
		android::os::Bundle saveInstanceState();
		android::view::Window startActivity(jstring arg0, android::content::Intent arg1);
	};
} // namespace android::app

