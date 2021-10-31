#include "./Fragment.hpp"
#include "../view/View.hpp"
#include "./FragmentTransaction.hpp"

namespace android::app
{
	// Fields
	jint FragmentTransaction::TRANSIT_ENTER_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_ENTER_MASK"
		);
	}
	jint FragmentTransaction::TRANSIT_EXIT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_EXIT_MASK"
		);
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_CLOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_CLOSE"
		);
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_FADE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_FADE"
		);
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_OPEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_OPEN"
		);
	}
	jint FragmentTransaction::TRANSIT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_NONE"
		);
	}
	jint FragmentTransaction::TRANSIT_UNSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_UNSET"
		);
	}
	
	FragmentTransaction::FragmentTransaction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FragmentTransaction::FragmentTransaction()
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentTransaction",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject FragmentTransaction::add(android::app::Fragment arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FragmentTransaction::add(jint arg0, android::app::Fragment arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentTransaction::add(jint arg0, android::app::Fragment arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"add",
			"(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FragmentTransaction::addSharedElement(android::view::View arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"addSharedElement",
			"(Landroid/view/View;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FragmentTransaction::addToBackStack(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addToBackStack",
			"(Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	QAndroidJniObject FragmentTransaction::attach(android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"attach",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object()
		);
	}
	jint FragmentTransaction::commit()
	{
		return __thiz.callMethod<jint>(
			"commit",
			"()I"
		);
	}
	jint FragmentTransaction::commitAllowingStateLoss()
	{
		return __thiz.callMethod<jint>(
			"commitAllowingStateLoss",
			"()I"
		);
	}
	void FragmentTransaction::commitNow()
	{
		__thiz.callMethod<void>(
			"commitNow",
			"()V"
		);
	}
	void FragmentTransaction::commitNowAllowingStateLoss()
	{
		__thiz.callMethod<void>(
			"commitNowAllowingStateLoss",
			"()V"
		);
	}
	QAndroidJniObject FragmentTransaction::detach(android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"detach",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentTransaction::disallowAddToBackStack()
	{
		return __thiz.callObjectMethod(
			"disallowAddToBackStack",
			"()Landroid/app/FragmentTransaction;"
		);
	}
	QAndroidJniObject FragmentTransaction::hide(android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"hide",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object()
		);
	}
	jboolean FragmentTransaction::isAddToBackStackAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isAddToBackStackAllowed",
			"()Z"
		);
	}
	jboolean FragmentTransaction::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject FragmentTransaction::remove(android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentTransaction::replace(jint arg0, android::app::Fragment arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentTransaction::replace(jint arg0, android::app::Fragment arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FragmentTransaction::runOnCommit(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"runOnCommit",
			"(Ljava/lang/Runnable;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentTransaction::setBreadCrumbShortTitle(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreadCrumbShortTitle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	QAndroidJniObject FragmentTransaction::setBreadCrumbShortTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBreadCrumbShortTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	QAndroidJniObject FragmentTransaction::setBreadCrumbTitle(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreadCrumbTitle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	QAndroidJniObject FragmentTransaction::setBreadCrumbTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBreadCrumbTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	QAndroidJniObject FragmentTransaction::setCustomAnimations(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setCustomAnimations",
			"(II)Landroid/app/FragmentTransaction;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FragmentTransaction::setCustomAnimations(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setCustomAnimations",
			"(IIII)Landroid/app/FragmentTransaction;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject FragmentTransaction::setPrimaryNavigationFragment(android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"setPrimaryNavigationFragment",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentTransaction::setReorderingAllowed(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setReorderingAllowed",
			"(Z)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	QAndroidJniObject FragmentTransaction::setTransition(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTransition",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	QAndroidJniObject FragmentTransaction::setTransitionStyle(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTransitionStyle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0
		);
	}
	QAndroidJniObject FragmentTransaction::show(android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"show",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

