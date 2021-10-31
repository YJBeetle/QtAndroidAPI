#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Fragment;
}
namespace android::app
{
	class Fragment_SavedState;
}
namespace android::app
{
	class FragmentManager_FragmentLifecycleCallbacks;
}
namespace android::app
{
	class FragmentTransaction;
}
namespace android::os
{
	class Bundle;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::app
{
	class FragmentManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint POP_BACK_STACK_INCLUSIVE();
		
		// QJniObject forward
		template<typename ...Ts> explicit FragmentManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FragmentManager(QJniObject obj);
		
		// Constructors
		FragmentManager();
		
		// Methods
		static void enableDebugLogging(jboolean arg0);
		void addOnBackStackChangedListener(__JniBaseClass arg0);
		android::app::FragmentTransaction beginTransaction();
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		jboolean executePendingTransactions();
		android::app::Fragment findFragmentById(jint arg0);
		android::app::Fragment findFragmentByTag(jstring arg0);
		__JniBaseClass getBackStackEntryAt(jint arg0);
		jint getBackStackEntryCount();
		android::app::Fragment getFragment(android::os::Bundle arg0, jstring arg1);
		__JniBaseClass getFragments();
		android::app::Fragment getPrimaryNavigationFragment();
		void invalidateOptionsMenu();
		jboolean isDestroyed();
		jboolean isStateSaved();
		void popBackStack();
		void popBackStack(jint arg0, jint arg1);
		void popBackStack(jstring arg0, jint arg1);
		jboolean popBackStackImmediate();
		jboolean popBackStackImmediate(jint arg0, jint arg1);
		jboolean popBackStackImmediate(jstring arg0, jint arg1);
		void putFragment(android::os::Bundle arg0, jstring arg1, android::app::Fragment arg2);
		void registerFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0, jboolean arg1);
		void removeOnBackStackChangedListener(__JniBaseClass arg0);
		android::app::Fragment_SavedState saveFragmentInstanceState(android::app::Fragment arg0);
		void unregisterFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0);
	};
} // namespace android::app

