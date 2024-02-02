#pragma once

#include "../../JObject.hpp"

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
	class FragmentManager_FragmentLifecycleCallbacks : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FragmentManager_FragmentLifecycleCallbacks(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FragmentManager_FragmentLifecycleCallbacks(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FragmentManager_FragmentLifecycleCallbacks();
		
		// Methods
		void onFragmentActivityCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2) const;
		void onFragmentAttached(android::app::FragmentManager arg0, android::app::Fragment arg1, android::content::Context arg2) const;
		void onFragmentCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2) const;
		void onFragmentDestroyed(android::app::FragmentManager arg0, android::app::Fragment arg1) const;
		void onFragmentDetached(android::app::FragmentManager arg0, android::app::Fragment arg1) const;
		void onFragmentPaused(android::app::FragmentManager arg0, android::app::Fragment arg1) const;
		void onFragmentPreAttached(android::app::FragmentManager arg0, android::app::Fragment arg1, android::content::Context arg2) const;
		void onFragmentPreCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2) const;
		void onFragmentResumed(android::app::FragmentManager arg0, android::app::Fragment arg1) const;
		void onFragmentSaveInstanceState(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2) const;
		void onFragmentStarted(android::app::FragmentManager arg0, android::app::Fragment arg1) const;
		void onFragmentStopped(android::app::FragmentManager arg0, android::app::Fragment arg1) const;
		void onFragmentViewCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::view::View arg2, android::os::Bundle arg3) const;
		void onFragmentViewDestroyed(android::app::FragmentManager arg0, android::app::Fragment arg1) const;
	};
} // namespace android::app

