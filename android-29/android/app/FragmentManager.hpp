#pragma once

#ifndef ANDROID_APP_FRAGMENTMANAGER
#define ANDROID_APP_FRAGMENTMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Fragment;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class FragmentTransaction;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::app
{
	class Fragment_SavedState;
}
namespace __jni_impl::android::app
{
	class FragmentManager_FragmentLifecycleCallbacks;
}

namespace __jni_impl::android::app
{
	class FragmentManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint POP_BACK_STACK_INCLUSIVE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isDestroyed();
		QAndroidJniObject getFragment(__jni_impl::android::os::Bundle arg0, jstring arg1);
		QAndroidJniObject beginTransaction();
		jboolean isStateSaved();
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void invalidateOptionsMenu();
		static void enableDebugLogging(jboolean arg0);
		jboolean executePendingTransactions();
		QAndroidJniObject findFragmentById(jint arg0);
		QAndroidJniObject findFragmentByTag(jstring arg0);
		void popBackStack();
		void popBackStack(jstring arg0, jint arg1);
		void popBackStack(jint arg0, jint arg1);
		jboolean popBackStackImmediate(jstring arg0, jint arg1);
		jboolean popBackStackImmediate(jint arg0, jint arg1);
		jboolean popBackStackImmediate();
		jint getBackStackEntryCount();
		QAndroidJniObject getBackStackEntryAt(jint arg0);
		void addOnBackStackChangedListener(__jni_impl::__JniBaseClass arg0);
		void removeOnBackStackChangedListener(__jni_impl::__JniBaseClass arg0);
		void putFragment(__jni_impl::android::os::Bundle arg0, jstring arg1, __jni_impl::android::app::Fragment arg2);
		QAndroidJniObject getFragments();
		QAndroidJniObject saveFragmentInstanceState(__jni_impl::android::app::Fragment arg0);
		void registerFragmentLifecycleCallbacks(__jni_impl::android::app::FragmentManager_FragmentLifecycleCallbacks arg0, jboolean arg1);
		void unregisterFragmentLifecycleCallbacks(__jni_impl::android::app::FragmentManager_FragmentLifecycleCallbacks arg0);
		QAndroidJniObject getPrimaryNavigationFragment();
	};
} // namespace __jni_impl::android::app

#include "Fragment.hpp"
#include "../os/Bundle.hpp"
#include "FragmentTransaction.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "Fragment_SavedState.hpp"
#include "FragmentManager_FragmentLifecycleCallbacks.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint FragmentManager::POP_BACK_STACK_INCLUSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.FragmentManager",
			"POP_BACK_STACK_INCLUSIVE");
	}
	
	// Constructors
	void FragmentManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentManager",
			"()V");
	}
	
	// Methods
	jboolean FragmentManager::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z");
	}
	QAndroidJniObject FragmentManager::getFragment(__jni_impl::android::os::Bundle arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getFragment",
			"(Landroid/os/Bundle;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject FragmentManager::beginTransaction()
	{
		return __thiz.callObjectMethod(
			"beginTransaction",
			"()Landroid/app/FragmentTransaction;");
	}
	jboolean FragmentManager::isStateSaved()
	{
		return __thiz.callMethod<jboolean>(
			"isStateSaved",
			"()Z");
	}
	void FragmentManager::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	void FragmentManager::invalidateOptionsMenu()
	{
		__thiz.callMethod<void>(
			"invalidateOptionsMenu",
			"()V");
	}
	void FragmentManager::enableDebugLogging(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.FragmentManager",
			"enableDebugLogging",
			"(Z)V",
			arg0);
	}
	jboolean FragmentManager::executePendingTransactions()
	{
		return __thiz.callMethod<jboolean>(
			"executePendingTransactions",
			"()Z");
	}
	QAndroidJniObject FragmentManager::findFragmentById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findFragmentById",
			"(I)Landroid/app/Fragment;",
			arg0);
	}
	QAndroidJniObject FragmentManager::findFragmentByTag(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findFragmentByTag",
			"(Ljava/lang/String;)Landroid/app/Fragment;",
			arg0);
	}
	void FragmentManager::popBackStack()
	{
		__thiz.callMethod<void>(
			"popBackStack",
			"()V");
	}
	void FragmentManager::popBackStack(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"popBackStack",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void FragmentManager::popBackStack(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"popBackStack",
			"(II)V",
			arg0,
			arg1);
	}
	jboolean FragmentManager::popBackStackImmediate(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"popBackStackImmediate",
			"(Ljava/lang/String;I)Z",
			arg0,
			arg1);
	}
	jboolean FragmentManager::popBackStackImmediate(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"popBackStackImmediate",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean FragmentManager::popBackStackImmediate()
	{
		return __thiz.callMethod<jboolean>(
			"popBackStackImmediate",
			"()Z");
	}
	jint FragmentManager::getBackStackEntryCount()
	{
		return __thiz.callMethod<jint>(
			"getBackStackEntryCount",
			"()I");
	}
	QAndroidJniObject FragmentManager::getBackStackEntryAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBackStackEntryAt",
			"(I)Landroid/app/FragmentManager$BackStackEntry;",
			arg0);
	}
	void FragmentManager::addOnBackStackChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnBackStackChangedListener",
			"(Landroid/app/FragmentManager$OnBackStackChangedListener;)V",
			arg0.__jniObject().object());
	}
	void FragmentManager::removeOnBackStackChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnBackStackChangedListener",
			"(Landroid/app/FragmentManager$OnBackStackChangedListener;)V",
			arg0.__jniObject().object());
	}
	void FragmentManager::putFragment(__jni_impl::android::os::Bundle arg0, jstring arg1, __jni_impl::android::app::Fragment arg2)
	{
		__thiz.callMethod<void>(
			"putFragment",
			"(Landroid/os/Bundle;Ljava/lang/String;Landroid/app/Fragment;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject FragmentManager::getFragments()
	{
		return __thiz.callObjectMethod(
			"getFragments",
			"()Ljava/util/List;");
	}
	QAndroidJniObject FragmentManager::saveFragmentInstanceState(__jni_impl::android::app::Fragment arg0)
	{
		return __thiz.callObjectMethod(
			"saveFragmentInstanceState",
			"(Landroid/app/Fragment;)Landroid/app/Fragment$SavedState;",
			arg0.__jniObject().object());
	}
	void FragmentManager::registerFragmentLifecycleCallbacks(__jni_impl::android::app::FragmentManager_FragmentLifecycleCallbacks arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"registerFragmentLifecycleCallbacks",
			"(Landroid/app/FragmentManager$FragmentLifecycleCallbacks;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void FragmentManager::unregisterFragmentLifecycleCallbacks(__jni_impl::android::app::FragmentManager_FragmentLifecycleCallbacks arg0)
	{
		__thiz.callMethod<void>(
			"unregisterFragmentLifecycleCallbacks",
			"(Landroid/app/FragmentManager$FragmentLifecycleCallbacks;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject FragmentManager::getPrimaryNavigationFragment()
	{
		return __thiz.callObjectMethod(
			"getPrimaryNavigationFragment",
			"()Landroid/app/Fragment;");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class FragmentManager : public __jni_impl::android::app::FragmentManager
	{
	public:
		FragmentManager(QAndroidJniObject obj) { __thiz = obj; }
		FragmentManager()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_FRAGMENTMANAGER

