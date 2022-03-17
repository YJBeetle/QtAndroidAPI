#pragma once

#include "./Fragment.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./FragmentTransaction.def.hpp"

namespace android::app
{
	// Fields
	inline jint FragmentTransaction::TRANSIT_ENTER_MASK()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_ENTER_MASK"
		);
	}
	inline jint FragmentTransaction::TRANSIT_EXIT_MASK()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_EXIT_MASK"
		);
	}
	inline jint FragmentTransaction::TRANSIT_FRAGMENT_CLOSE()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_CLOSE"
		);
	}
	inline jint FragmentTransaction::TRANSIT_FRAGMENT_FADE()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_FADE"
		);
	}
	inline jint FragmentTransaction::TRANSIT_FRAGMENT_OPEN()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_OPEN"
		);
	}
	inline jint FragmentTransaction::TRANSIT_NONE()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_NONE"
		);
	}
	inline jint FragmentTransaction::TRANSIT_UNSET()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_UNSET"
		);
	}
	
	// Constructors
	inline FragmentTransaction::FragmentTransaction()
		: JObject(
			"android.app.FragmentTransaction",
			"()V"
		) {}
	
	// Methods
	inline android::app::FragmentTransaction FragmentTransaction::add(android::app::Fragment arg0, JString arg1) const
	{
		return callObjectMethod(
			"add",
			"(Landroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::add(jint arg0, android::app::Fragment arg1) const
	{
		return callObjectMethod(
			"add",
			"(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.object()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::add(jint arg0, android::app::Fragment arg1, JString arg2) const
	{
		return callObjectMethod(
			"add",
			"(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::addSharedElement(android::view::View arg0, JString arg1) const
	{
		return callObjectMethod(
			"addSharedElement",
			"(Landroid/view/View;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::addToBackStack(JString arg0) const
	{
		return callObjectMethod(
			"addToBackStack",
			"(Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.object<jstring>()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::attach(android::app::Fragment arg0) const
	{
		return callObjectMethod(
			"attach",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	inline jint FragmentTransaction::commit() const
	{
		return callMethod<jint>(
			"commit",
			"()I"
		);
	}
	inline jint FragmentTransaction::commitAllowingStateLoss() const
	{
		return callMethod<jint>(
			"commitAllowingStateLoss",
			"()I"
		);
	}
	inline void FragmentTransaction::commitNow() const
	{
		callMethod<void>(
			"commitNow",
			"()V"
		);
	}
	inline void FragmentTransaction::commitNowAllowingStateLoss() const
	{
		callMethod<void>(
			"commitNowAllowingStateLoss",
			"()V"
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::detach(android::app::Fragment arg0) const
	{
		return callObjectMethod(
			"detach",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::disallowAddToBackStack() const
	{
		return callObjectMethod(
			"disallowAddToBackStack",
			"()Landroid/app/FragmentTransaction;"
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::hide(android::app::Fragment arg0) const
	{
		return callObjectMethod(
			"hide",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	inline jboolean FragmentTransaction::isAddToBackStackAllowed() const
	{
		return callMethod<jboolean>(
			"isAddToBackStackAllowed",
			"()Z"
		);
	}
	inline jboolean FragmentTransaction::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::remove(android::app::Fragment arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::replace(jint arg0, android::app::Fragment arg1) const
	{
		return callObjectMethod(
			"replace",
			"(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.object()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::replace(jint arg0, android::app::Fragment arg1, JString arg2) const
	{
		return callObjectMethod(
			"replace",
			"(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::runOnCommit(JObject arg0) const
	{
		return callObjectMethod(
			"runOnCommit",
			"(Ljava/lang/Runnable;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setBreadCrumbShortTitle(jint arg0) const
	{
		return callObjectMethod(
			"setBreadCrumbShortTitle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setBreadCrumbShortTitle(JString arg0) const
	{
		return callObjectMethod(
			"setBreadCrumbShortTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;",
			arg0.object<jstring>()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setBreadCrumbTitle(jint arg0) const
	{
		return callObjectMethod(
			"setBreadCrumbTitle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setBreadCrumbTitle(JString arg0) const
	{
		return callObjectMethod(
			"setBreadCrumbTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;",
			arg0.object<jstring>()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setCustomAnimations(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setCustomAnimations",
			"(II)Landroid/app/FragmentTransaction;",
			arg0,
			arg1
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setCustomAnimations(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"setCustomAnimations",
			"(IIII)Landroid/app/FragmentTransaction;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setPrimaryNavigationFragment(android::app::Fragment arg0) const
	{
		return callObjectMethod(
			"setPrimaryNavigationFragment",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setReorderingAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"setReorderingAllowed",
			"(Z)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setTransition(jint arg0) const
	{
		return callObjectMethod(
			"setTransition",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::setTransitionStyle(jint arg0) const
	{
		return callObjectMethod(
			"setTransitionStyle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	inline android::app::FragmentTransaction FragmentTransaction::show(android::app::Fragment arg0) const
	{
		return callObjectMethod(
			"show",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

