#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Fragment;
}
namespace android::app
{
	class FragmentManager;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}

namespace android::app
{
	class FragmentManager_FragmentLifecycleCallbacks : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FragmentManager_FragmentLifecycleCallbacks(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FragmentManager_FragmentLifecycleCallbacks(QJniObject obj);
		
		// Constructors
		FragmentManager_FragmentLifecycleCallbacks();
		
		// Methods
		void onFragmentActivityCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2);
		void onFragmentAttached(android::app::FragmentManager arg0, android::app::Fragment arg1, android::content::Context arg2);
		void onFragmentCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2);
		void onFragmentDestroyed(android::app::FragmentManager arg0, android::app::Fragment arg1);
		void onFragmentDetached(android::app::FragmentManager arg0, android::app::Fragment arg1);
		void onFragmentPaused(android::app::FragmentManager arg0, android::app::Fragment arg1);
		void onFragmentPreAttached(android::app::FragmentManager arg0, android::app::Fragment arg1, android::content::Context arg2);
		void onFragmentPreCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2);
		void onFragmentResumed(android::app::FragmentManager arg0, android::app::Fragment arg1);
		void onFragmentSaveInstanceState(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2);
		void onFragmentStarted(android::app::FragmentManager arg0, android::app::Fragment arg1);
		void onFragmentStopped(android::app::FragmentManager arg0, android::app::Fragment arg1);
		void onFragmentViewCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::view::View arg2, android::os::Bundle arg3);
		void onFragmentViewDestroyed(android::app::FragmentManager arg0, android::app::Fragment arg1);
	};
} // namespace android::app

