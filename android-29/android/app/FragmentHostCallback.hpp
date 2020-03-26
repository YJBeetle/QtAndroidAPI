#pragma once

#ifndef ANDROID_APP_FRAGMENTHOSTCALLBACK
#define ANDROID_APP_FRAGMENTHOSTCALLBACK

#include "../../__JniBaseClass.hpp"
#include "FragmentContainer.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::app
{
	class Fragment;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::app
{
	class FragmentHostCallback : public __jni_impl::android::app::FragmentContainer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Handler arg1, jint arg2);
		
		// Methods
		QAndroidJniObject onGetLayoutInflater();
		void onAttachFragment(__jni_impl::android::app::Fragment arg0);
		jobject onGetHost();
		void onDump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void onInvalidateOptionsMenu();
		jboolean onShouldSaveFragmentState(__jni_impl::android::app::Fragment arg0);
		jboolean onUseFragmentManagerInflaterFactory();
		void onStartActivityFromFragment(__jni_impl::android::app::Fragment arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::os::Bundle arg3);
		void onStartIntentSenderFromFragment(__jni_impl::android::app::Fragment arg0, __jni_impl::android::content::IntentSender arg1, jint arg2, __jni_impl::android::content::Intent arg3, jint arg4, jint arg5, jint arg6, __jni_impl::android::os::Bundle arg7);
		void onRequestPermissionsFromFragment(__jni_impl::android::app::Fragment arg0, jarray arg1, jint arg2);
		jboolean onHasWindowAnimations();
		jint onGetWindowAnimations();
		QAndroidJniObject onFindViewById(jint arg0);
		jboolean onHasView();
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "../view/LayoutInflater.hpp"
#include "Fragment.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../content/IntentSender.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void FragmentHostCallback::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Handler arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentHostCallback",
			"(Landroid/content/Context;Landroid/os/Handler;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	
	// Methods
	QAndroidJniObject FragmentHostCallback::onGetLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"onGetLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	void FragmentHostCallback::onAttachFragment(__jni_impl::android::app::Fragment arg0)
	{
		__thiz.callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.__jniObject().object()
		);
	}
	jobject FragmentHostCallback::onGetHost()
	{
		return __thiz.callObjectMethod(
			"onGetHost",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void FragmentHostCallback::onDump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"onDump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void FragmentHostCallback::onInvalidateOptionsMenu()
	{
		__thiz.callMethod<void>(
			"onInvalidateOptionsMenu",
			"()V"
		);
	}
	jboolean FragmentHostCallback::onShouldSaveFragmentState(__jni_impl::android::app::Fragment arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onShouldSaveFragmentState",
			"(Landroid/app/Fragment;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean FragmentHostCallback::onUseFragmentManagerInflaterFactory()
	{
		return __thiz.callMethod<jboolean>(
			"onUseFragmentManagerInflaterFactory",
			"()Z"
		);
	}
	void FragmentHostCallback::onStartActivityFromFragment(__jni_impl::android::app::Fragment arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"onStartActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void FragmentHostCallback::onStartIntentSenderFromFragment(__jni_impl::android::app::Fragment arg0, __jni_impl::android::content::IntentSender arg1, jint arg2, __jni_impl::android::content::Intent arg3, jint arg4, jint arg5, jint arg6, __jni_impl::android::os::Bundle arg7)
	{
		__thiz.callMethod<void>(
			"onStartIntentSenderFromFragment",
			"(Landroid/app/Fragment;Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	void FragmentHostCallback::onRequestPermissionsFromFragment(__jni_impl::android::app::Fragment arg0, jarray arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onRequestPermissionsFromFragment",
			"(Landroid/app/Fragment;[Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean FragmentHostCallback::onHasWindowAnimations()
	{
		return __thiz.callMethod<jboolean>(
			"onHasWindowAnimations",
			"()Z"
		);
	}
	jint FragmentHostCallback::onGetWindowAnimations()
	{
		return __thiz.callMethod<jint>(
			"onGetWindowAnimations",
			"()I"
		);
	}
	QAndroidJniObject FragmentHostCallback::onFindViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean FragmentHostCallback::onHasView()
	{
		return __thiz.callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class FragmentHostCallback : public __jni_impl::android::app::FragmentHostCallback
	{
	public:
		FragmentHostCallback(QAndroidJniObject obj) { __thiz = obj; }
		FragmentHostCallback(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Handler arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_FRAGMENTHOSTCALLBACK

