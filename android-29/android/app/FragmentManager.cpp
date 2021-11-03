#include "../../JArray.hpp"
#include "./Fragment.hpp"
#include "./Fragment_SavedState.hpp"
#include "./FragmentManager_FragmentLifecycleCallbacks.hpp"
#include "./FragmentTransaction.hpp"
#include "../os/Bundle.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "./FragmentManager.hpp"

namespace android::app
{
	// Fields
	jint FragmentManager::POP_BACK_STACK_INCLUSIVE()
	{
		return getStaticField<jint>(
			"android.app.FragmentManager",
			"POP_BACK_STACK_INCLUSIVE"
		);
	}
	
	// QJniObject forward
	FragmentManager::FragmentManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FragmentManager::FragmentManager()
		: JObject(
			"android.app.FragmentManager",
			"()V"
		) {}
	
	// Methods
	void FragmentManager::enableDebugLogging(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.app.FragmentManager",
			"enableDebugLogging",
			"(Z)V",
			arg0
		);
	}
	void FragmentManager::addOnBackStackChangedListener(JObject arg0)
	{
		callMethod<void>(
			"addOnBackStackChangedListener",
			"(Landroid/app/FragmentManager$OnBackStackChangedListener;)V",
			arg0.object()
		);
	}
	android::app::FragmentTransaction FragmentManager::beginTransaction()
	{
		return callObjectMethod(
			"beginTransaction",
			"()Landroid/app/FragmentTransaction;"
		);
	}
	void FragmentManager::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	jboolean FragmentManager::executePendingTransactions()
	{
		return callMethod<jboolean>(
			"executePendingTransactions",
			"()Z"
		);
	}
	android::app::Fragment FragmentManager::findFragmentById(jint arg0)
	{
		return callObjectMethod(
			"findFragmentById",
			"(I)Landroid/app/Fragment;",
			arg0
		);
	}
	android::app::Fragment FragmentManager::findFragmentByTag(JString arg0)
	{
		return callObjectMethod(
			"findFragmentByTag",
			"(Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.object<jstring>()
		);
	}
	JObject FragmentManager::getBackStackEntryAt(jint arg0)
	{
		return callObjectMethod(
			"getBackStackEntryAt",
			"(I)Landroid/app/FragmentManager$BackStackEntry;",
			arg0
		);
	}
	jint FragmentManager::getBackStackEntryCount()
	{
		return callMethod<jint>(
			"getBackStackEntryCount",
			"()I"
		);
	}
	android::app::Fragment FragmentManager::getFragment(android::os::Bundle arg0, JString arg1)
	{
		return callObjectMethod(
			"getFragment",
			"(Landroid/os/Bundle;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JObject FragmentManager::getFragments()
	{
		return callObjectMethod(
			"getFragments",
			"()Ljava/util/List;"
		);
	}
	android::app::Fragment FragmentManager::getPrimaryNavigationFragment()
	{
		return callObjectMethod(
			"getPrimaryNavigationFragment",
			"()Landroid/app/Fragment;"
		);
	}
	void FragmentManager::invalidateOptionsMenu()
	{
		callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	jboolean FragmentManager::isDestroyed()
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	jboolean FragmentManager::isStateSaved()
	{
		return callMethod<jboolean>(
			"isStateSaved",
			"()Z"
		);
	}
	void FragmentManager::popBackStack()
	{
		callMethod<void>(
			"popBackStack",
			"()V"
		);
	}
	void FragmentManager::popBackStack(jint arg0, jint arg1)
	{
		callMethod<void>(
			"popBackStack",
			"(II)V",
			arg0,
			arg1
		);
	}
	void FragmentManager::popBackStack(JString arg0, jint arg1)
	{
		callMethod<void>(
			"popBackStack",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean FragmentManager::popBackStackImmediate()
	{
		return callMethod<jboolean>(
			"popBackStackImmediate",
			"()Z"
		);
	}
	jboolean FragmentManager::popBackStackImmediate(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"popBackStackImmediate",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean FragmentManager::popBackStackImmediate(JString arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"popBackStackImmediate",
			"(Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	void FragmentManager::putFragment(android::os::Bundle arg0, JString arg1, android::app::Fragment arg2)
	{
		callMethod<void>(
			"putFragment",
			"(Landroid/os/Bundle;Ljava/lang/String;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void FragmentManager::registerFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0, jboolean arg1)
	{
		callMethod<void>(
			"registerFragmentLifecycleCallbacks",
			"(Landroid/app/FragmentManager$FragmentLifecycleCallbacks;Z)V",
			arg0.object(),
			arg1
		);
	}
	void FragmentManager::removeOnBackStackChangedListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnBackStackChangedListener",
			"(Landroid/app/FragmentManager$OnBackStackChangedListener;)V",
			arg0.object()
		);
	}
	android::app::Fragment_SavedState FragmentManager::saveFragmentInstanceState(android::app::Fragment arg0)
	{
		return callObjectMethod(
			"saveFragmentInstanceState",
			"(Landroid/app/Fragment;)Landroid/app/Fragment$SavedState;",
			arg0.object()
		);
	}
	void FragmentManager::unregisterFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0)
	{
		callMethod<void>(
			"unregisterFragmentLifecycleCallbacks",
			"(Landroid/app/FragmentManager$FragmentLifecycleCallbacks;)V",
			arg0.object()
		);
	}
} // namespace android::app

