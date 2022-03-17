#pragma once

#include "../../JArray.hpp"
#include "./Fragment.def.hpp"
#include "./Fragment_SavedState.def.hpp"
#include "./FragmentManager_FragmentLifecycleCallbacks.def.hpp"
#include "./FragmentTransaction.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "./FragmentManager.def.hpp"

namespace android::app
{
	// Fields
	inline jint FragmentManager::POP_BACK_STACK_INCLUSIVE()
	{
		return getStaticField<jint>(
			"android.app.FragmentManager",
			"POP_BACK_STACK_INCLUSIVE"
		);
	}
	
	// Constructors
	inline FragmentManager::FragmentManager()
		: JObject(
			"android.app.FragmentManager",
			"()V"
		) {}
	
	// Methods
	inline void FragmentManager::enableDebugLogging(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.app.FragmentManager",
			"enableDebugLogging",
			"(Z)V",
			arg0
		);
	}
	inline void FragmentManager::addOnBackStackChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnBackStackChangedListener",
			"(Landroid/app/FragmentManager$OnBackStackChangedListener;)V",
			arg0.object()
		);
	}
	inline android::app::FragmentTransaction FragmentManager::beginTransaction() const
	{
		return callObjectMethod(
			"beginTransaction",
			"()Landroid/app/FragmentTransaction;"
		);
	}
	inline void FragmentManager::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	inline jboolean FragmentManager::executePendingTransactions() const
	{
		return callMethod<jboolean>(
			"executePendingTransactions",
			"()Z"
		);
	}
	inline android::app::Fragment FragmentManager::findFragmentById(jint arg0) const
	{
		return callObjectMethod(
			"findFragmentById",
			"(I)Landroid/app/Fragment;",
			arg0
		);
	}
	inline android::app::Fragment FragmentManager::findFragmentByTag(JString arg0) const
	{
		return callObjectMethod(
			"findFragmentByTag",
			"(Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.object<jstring>()
		);
	}
	inline JObject FragmentManager::getBackStackEntryAt(jint arg0) const
	{
		return callObjectMethod(
			"getBackStackEntryAt",
			"(I)Landroid/app/FragmentManager$BackStackEntry;",
			arg0
		);
	}
	inline jint FragmentManager::getBackStackEntryCount() const
	{
		return callMethod<jint>(
			"getBackStackEntryCount",
			"()I"
		);
	}
	inline android::app::Fragment FragmentManager::getFragment(android::os::Bundle arg0, JString arg1) const
	{
		return callObjectMethod(
			"getFragment",
			"(Landroid/os/Bundle;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JObject FragmentManager::getFragments() const
	{
		return callObjectMethod(
			"getFragments",
			"()Ljava/util/List;"
		);
	}
	inline android::app::Fragment FragmentManager::getPrimaryNavigationFragment() const
	{
		return callObjectMethod(
			"getPrimaryNavigationFragment",
			"()Landroid/app/Fragment;"
		);
	}
	inline void FragmentManager::invalidateOptionsMenu() const
	{
		callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	inline jboolean FragmentManager::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	inline jboolean FragmentManager::isStateSaved() const
	{
		return callMethod<jboolean>(
			"isStateSaved",
			"()Z"
		);
	}
	inline void FragmentManager::popBackStack() const
	{
		callMethod<void>(
			"popBackStack",
			"()V"
		);
	}
	inline void FragmentManager::popBackStack(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"popBackStack",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void FragmentManager::popBackStack(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"popBackStack",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean FragmentManager::popBackStackImmediate() const
	{
		return callMethod<jboolean>(
			"popBackStackImmediate",
			"()Z"
		);
	}
	inline jboolean FragmentManager::popBackStackImmediate(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"popBackStackImmediate",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean FragmentManager::popBackStackImmediate(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"popBackStackImmediate",
			"(Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void FragmentManager::putFragment(android::os::Bundle arg0, JString arg1, android::app::Fragment arg2) const
	{
		callMethod<void>(
			"putFragment",
			"(Landroid/os/Bundle;Ljava/lang/String;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void FragmentManager::registerFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0, jboolean arg1) const
	{
		callMethod<void>(
			"registerFragmentLifecycleCallbacks",
			"(Landroid/app/FragmentManager$FragmentLifecycleCallbacks;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void FragmentManager::removeOnBackStackChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnBackStackChangedListener",
			"(Landroid/app/FragmentManager$OnBackStackChangedListener;)V",
			arg0.object()
		);
	}
	inline android::app::Fragment_SavedState FragmentManager::saveFragmentInstanceState(android::app::Fragment arg0) const
	{
		return callObjectMethod(
			"saveFragmentInstanceState",
			"(Landroid/app/Fragment;)Landroid/app/Fragment$SavedState;",
			arg0.object()
		);
	}
	inline void FragmentManager::unregisterFragmentLifecycleCallbacks(android::app::FragmentManager_FragmentLifecycleCallbacks arg0) const
	{
		callMethod<void>(
			"unregisterFragmentLifecycleCallbacks",
			"(Landroid/app/FragmentManager$FragmentLifecycleCallbacks;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

