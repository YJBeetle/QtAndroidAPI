#include "./Fragment.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./FragmentTransaction.hpp"

namespace android::app
{
	// Fields
	jint FragmentTransaction::TRANSIT_ENTER_MASK()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_ENTER_MASK"
		);
	}
	jint FragmentTransaction::TRANSIT_EXIT_MASK()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_EXIT_MASK"
		);
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_CLOSE()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_CLOSE"
		);
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_FADE()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_FADE"
		);
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_OPEN()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_OPEN"
		);
	}
	jint FragmentTransaction::TRANSIT_NONE()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_NONE"
		);
	}
	jint FragmentTransaction::TRANSIT_UNSET()
	{
		return getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_UNSET"
		);
	}
	
	// QAndroidJniObject forward
	FragmentTransaction::FragmentTransaction(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FragmentTransaction::FragmentTransaction()
		: JObject(
			"android.app.FragmentTransaction",
			"()V"
		) {}
	
	// Methods
	android::app::FragmentTransaction FragmentTransaction::add(android::app::Fragment arg0, JString arg1)
	{
		return callObjectMethod(
			"add",
			"(Landroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::add(jint arg0, android::app::Fragment arg1)
	{
		return callObjectMethod(
			"add",
			"(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.object()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::add(jint arg0, android::app::Fragment arg1, JString arg2)
	{
		return callObjectMethod(
			"add",
			"(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::addSharedElement(android::view::View arg0, JString arg1)
	{
		return callObjectMethod(
			"addSharedElement",
			"(Landroid/view/View;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::addToBackStack(JString arg0)
	{
		return callObjectMethod(
			"addToBackStack",
			"(Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.object<jstring>()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::attach(android::app::Fragment arg0)
	{
		return callObjectMethod(
			"attach",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	jint FragmentTransaction::commit()
	{
		return callMethod<jint>(
			"commit",
			"()I"
		);
	}
	jint FragmentTransaction::commitAllowingStateLoss()
	{
		return callMethod<jint>(
			"commitAllowingStateLoss",
			"()I"
		);
	}
	void FragmentTransaction::commitNow()
	{
		callMethod<void>(
			"commitNow",
			"()V"
		);
	}
	void FragmentTransaction::commitNowAllowingStateLoss()
	{
		callMethod<void>(
			"commitNowAllowingStateLoss",
			"()V"
		);
	}
	android::app::FragmentTransaction FragmentTransaction::detach(android::app::Fragment arg0)
	{
		return callObjectMethod(
			"detach",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::disallowAddToBackStack()
	{
		return callObjectMethod(
			"disallowAddToBackStack",
			"()Landroid/app/FragmentTransaction;"
		);
	}
	android::app::FragmentTransaction FragmentTransaction::hide(android::app::Fragment arg0)
	{
		return callObjectMethod(
			"hide",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	jboolean FragmentTransaction::isAddToBackStackAllowed()
	{
		return callMethod<jboolean>(
			"isAddToBackStackAllowed",
			"()Z"
		);
	}
	jboolean FragmentTransaction::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	android::app::FragmentTransaction FragmentTransaction::remove(android::app::Fragment arg0)
	{
		return callObjectMethod(
			"remove",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::replace(jint arg0, android::app::Fragment arg1)
	{
		return callObjectMethod(
			"replace",
			"(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.object()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::replace(jint arg0, android::app::Fragment arg1, JString arg2)
	{
		return callObjectMethod(
			"replace",
			"(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::runOnCommit(JObject arg0)
	{
		return callObjectMethod(
			"runOnCommit",
			"(Ljava/lang/Runnable;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setBreadCrumbShortTitle(jint arg0)
	{
		return callObjectMethod(
			"setBreadCrumbShortTitle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setBreadCrumbShortTitle(JString arg0)
	{
		return callObjectMethod(
			"setBreadCrumbShortTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;",
			arg0.object<jstring>()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setBreadCrumbTitle(jint arg0)
	{
		return callObjectMethod(
			"setBreadCrumbTitle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setBreadCrumbTitle(JString arg0)
	{
		return callObjectMethod(
			"setBreadCrumbTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;",
			arg0.object<jstring>()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setCustomAnimations(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setCustomAnimations",
			"(II)Landroid/app/FragmentTransaction;",
			arg0,
			arg1
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setCustomAnimations(jint arg0, jint arg1, jint arg2, jint arg3)
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
	android::app::FragmentTransaction FragmentTransaction::setPrimaryNavigationFragment(android::app::Fragment arg0)
	{
		return callObjectMethod(
			"setPrimaryNavigationFragment",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setReorderingAllowed(jboolean arg0)
	{
		return callObjectMethod(
			"setReorderingAllowed",
			"(Z)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setTransition(jint arg0)
	{
		return callObjectMethod(
			"setTransition",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	android::app::FragmentTransaction FragmentTransaction::setTransitionStyle(jint arg0)
	{
		return callObjectMethod(
			"setTransitionStyle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	android::app::FragmentTransaction FragmentTransaction::show(android::app::Fragment arg0)
	{
		return callObjectMethod(
			"show",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.object()
		);
	}
} // namespace android::app

