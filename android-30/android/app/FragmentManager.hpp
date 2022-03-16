#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;

namespace android::app
{
	class FragmentManager : public JObject
	{
	public:
		// Fields
		static jint POP_BACK_STACK_INCLUSIVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FragmentManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		FragmentManager();
		
		// Methods
		static void enableDebugLogging(jboolean arg0);
		void addOnBackStackChangedListener(JObject arg0) const;
		android::app::FragmentTransaction beginTransaction() const;
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		jboolean executePendingTransactions() const;
		android::app::Fragment findFragmentById(jint arg0) const;
		android::app::Fragment findFragmentByTag(JString arg0) const;
		JObject getBackStackEntryAt(jint arg0) const;
		jint getBackStackEntryCount() const;
		android::app::Fragment getFragment(android::os::Bundle arg0, JString arg1) const;
		JObject getFragments() const;
		android::app::Fragment getPrimaryNavigationFragment() const;
		void invalidateOptionsMenu() const;
		jboolean isDestroyed() const;
		jboolean isStateSaved() const;
		void popBackStack() const;
		void popBackStack(jint arg0, jint arg1) const;
		void popBackStack(JString arg0, jint arg1) const;
		jboolean popBackStackImmediate() const;
		jboolean popBackStackImmediate(jint arg0, jint arg1) const;
		jboolean popBackStackImmediate(JString arg0, jint arg1) const;
		void putFragment(android::os::Bundle arg0, JString arg1, android::app::Fragment arg2) const;
		void registerFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0, jboolean arg1) const;
		void removeOnBackStackChangedListener(JObject arg0) const;
		android::app::Fragment_SavedState saveFragmentInstanceState(android::app::Fragment arg0) const;
		void unregisterFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0) const;
	};
} // namespace android::app

