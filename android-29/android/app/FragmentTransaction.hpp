#pragma once

#ifndef ANDROID_APP_FRAGMENTTRANSACTION
#define ANDROID_APP_FRAGMENTTRANSACTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Fragment;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::app
{
	class FragmentTransaction : public __JniBaseClass
	{
	public:
		// Fields
		static jint TRANSIT_ENTER_MASK();
		static jint TRANSIT_EXIT_MASK();
		static jint TRANSIT_FRAGMENT_CLOSE();
		static jint TRANSIT_FRAGMENT_FADE();
		static jint TRANSIT_FRAGMENT_OPEN();
		static jint TRANSIT_NONE();
		static jint TRANSIT_UNSET();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject add(jint arg0, __jni_impl::android::app::Fragment arg1, jstring arg2);
		QAndroidJniObject add(jint arg0, __jni_impl::android::app::Fragment arg1);
		QAndroidJniObject add(__jni_impl::android::app::Fragment arg0, jstring arg1);
		QAndroidJniObject remove(__jni_impl::android::app::Fragment arg0);
		jboolean isEmpty();
		QAndroidJniObject replace(jint arg0, __jni_impl::android::app::Fragment arg1, jstring arg2);
		QAndroidJniObject replace(jint arg0, __jni_impl::android::app::Fragment arg1);
		QAndroidJniObject attach(__jni_impl::android::app::Fragment arg0);
		QAndroidJniObject detach(__jni_impl::android::app::Fragment arg0);
		jint commit();
		QAndroidJniObject show(__jni_impl::android::app::Fragment arg0);
		QAndroidJniObject hide(__jni_impl::android::app::Fragment arg0);
		QAndroidJniObject setPrimaryNavigationFragment(__jni_impl::android::app::Fragment arg0);
		QAndroidJniObject setCustomAnimations(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject setCustomAnimations(jint arg0, jint arg1);
		QAndroidJniObject addSharedElement(__jni_impl::android::view::View arg0, jstring arg1);
		QAndroidJniObject setTransitionStyle(jint arg0);
		QAndroidJniObject addToBackStack(jstring arg0);
		jboolean isAddToBackStackAllowed();
		QAndroidJniObject disallowAddToBackStack();
		QAndroidJniObject setBreadCrumbTitle(jint arg0);
		QAndroidJniObject setBreadCrumbTitle(jstring arg0);
		QAndroidJniObject setBreadCrumbShortTitle(jstring arg0);
		QAndroidJniObject setBreadCrumbShortTitle(jint arg0);
		QAndroidJniObject setReorderingAllowed(jboolean arg0);
		QAndroidJniObject runOnCommit(__jni_impl::__JniBaseClass arg0);
		jint commitAllowingStateLoss();
		void commitNow();
		void commitNowAllowingStateLoss();
		QAndroidJniObject setTransition(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "Fragment.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint FragmentTransaction::TRANSIT_ENTER_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_ENTER_MASK");
	}
	jint FragmentTransaction::TRANSIT_EXIT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_EXIT_MASK");
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_CLOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_CLOSE");
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_FADE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_FADE");
	}
	jint FragmentTransaction::TRANSIT_FRAGMENT_OPEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_FRAGMENT_OPEN");
	}
	jint FragmentTransaction::TRANSIT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_NONE");
	}
	jint FragmentTransaction::TRANSIT_UNSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentTransaction",
			"TRANSIT_UNSET");
	}
	
	// Constructors
	void FragmentTransaction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentTransaction",
			"()V");
	}
	
	// Methods
	QAndroidJniObject FragmentTransaction::add(jint arg0, __jni_impl::android::app::Fragment arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"add",
			"(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject FragmentTransaction::add(jint arg0, __jni_impl::android::app::Fragment arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject FragmentTransaction::add(__jni_impl::android::app::Fragment arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject FragmentTransaction::remove(__jni_impl::android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object());
	}
	jboolean FragmentTransaction::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	QAndroidJniObject FragmentTransaction::replace(jint arg0, __jni_impl::android::app::Fragment arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(ILandroid/app/Fragment;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject FragmentTransaction::replace(jint arg0, __jni_impl::android::app::Fragment arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject FragmentTransaction::attach(__jni_impl::android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"attach",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject FragmentTransaction::detach(__jni_impl::android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"detach",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object());
	}
	jint FragmentTransaction::commit()
	{
		return __thiz.callMethod<jint>(
			"commit",
			"()I");
	}
	QAndroidJniObject FragmentTransaction::show(__jni_impl::android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"show",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject FragmentTransaction::hide(__jni_impl::android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"hide",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject FragmentTransaction::setPrimaryNavigationFragment(__jni_impl::android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"setPrimaryNavigationFragment",
			"(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject FragmentTransaction::setCustomAnimations(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setCustomAnimations",
			"(IIII)Landroid/app/FragmentTransaction;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject FragmentTransaction::setCustomAnimations(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setCustomAnimations",
			"(II)Landroid/app/FragmentTransaction;",
			arg0,
			arg1);
	}
	QAndroidJniObject FragmentTransaction::addSharedElement(__jni_impl::android::view::View arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"addSharedElement",
			"(Landroid/view/View;Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject FragmentTransaction::setTransitionStyle(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTransitionStyle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0);
	}
	QAndroidJniObject FragmentTransaction::addToBackStack(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addToBackStack",
			"(Ljava/lang/String;)Landroid/app/FragmentTransaction;",
			arg0);
	}
	jboolean FragmentTransaction::isAddToBackStackAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isAddToBackStackAllowed",
			"()Z");
	}
	QAndroidJniObject FragmentTransaction::disallowAddToBackStack()
	{
		return __thiz.callObjectMethod(
			"disallowAddToBackStack",
			"()Landroid/app/FragmentTransaction;");
	}
	QAndroidJniObject FragmentTransaction::setBreadCrumbTitle(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreadCrumbTitle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0);
	}
	QAndroidJniObject FragmentTransaction::setBreadCrumbTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBreadCrumbTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;",
			arg0);
	}
	QAndroidJniObject FragmentTransaction::setBreadCrumbShortTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBreadCrumbShortTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/FragmentTransaction;",
			arg0);
	}
	QAndroidJniObject FragmentTransaction::setBreadCrumbShortTitle(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreadCrumbShortTitle",
			"(I)Landroid/app/FragmentTransaction;",
			arg0);
	}
	QAndroidJniObject FragmentTransaction::setReorderingAllowed(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setReorderingAllowed",
			"(Z)Landroid/app/FragmentTransaction;",
			arg0);
	}
	QAndroidJniObject FragmentTransaction::runOnCommit(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"runOnCommit",
			"(Ljava/lang/Runnable;)Landroid/app/FragmentTransaction;",
			arg0.__jniObject().object());
	}
	jint FragmentTransaction::commitAllowingStateLoss()
	{
		return __thiz.callMethod<jint>(
			"commitAllowingStateLoss",
			"()I");
	}
	void FragmentTransaction::commitNow()
	{
		__thiz.callMethod<void>(
			"commitNow",
			"()V");
	}
	void FragmentTransaction::commitNowAllowingStateLoss()
	{
		__thiz.callMethod<void>(
			"commitNowAllowingStateLoss",
			"()V");
	}
	QAndroidJniObject FragmentTransaction::setTransition(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTransition",
			"(I)Landroid/app/FragmentTransaction;",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class FragmentTransaction : public __jni_impl::android::app::FragmentTransaction
	{
	public:
		FragmentTransaction(QAndroidJniObject obj) { __thiz = obj; }
		FragmentTransaction()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_FRAGMENTTRANSACTION

