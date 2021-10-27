#include "./Fragment.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/View.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./FragmentHostCallback.hpp"

namespace android::app
{
	// Fields
	
	FragmentHostCallback::FragmentHostCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FragmentHostCallback::FragmentHostCallback(android::content::Context &arg0, android::os::Handler &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentHostCallback",
			"(Landroid/content/Context;Landroid/os/Handler;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	void FragmentHostCallback::onAttachFragment(android::app::Fragment arg0)
	{
		__thiz.callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentHostCallback::onDump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
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
	void FragmentHostCallback::onDump(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"onDump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
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
	jobject FragmentHostCallback::onGetHost()
	{
		return __thiz.callObjectMethod(
			"onGetHost",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject FragmentHostCallback::onGetLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"onGetLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint FragmentHostCallback::onGetWindowAnimations()
	{
		return __thiz.callMethod<jint>(
			"onGetWindowAnimations",
			"()I"
		);
	}
	jboolean FragmentHostCallback::onHasView()
	{
		return __thiz.callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
	jboolean FragmentHostCallback::onHasWindowAnimations()
	{
		return __thiz.callMethod<jboolean>(
			"onHasWindowAnimations",
			"()Z"
		);
	}
	void FragmentHostCallback::onInvalidateOptionsMenu()
	{
		__thiz.callMethod<void>(
			"onInvalidateOptionsMenu",
			"()V"
		);
	}
	void FragmentHostCallback::onRequestPermissionsFromFragment(android::app::Fragment arg0, jarray arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onRequestPermissionsFromFragment",
			"(Landroid/app/Fragment;[Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean FragmentHostCallback::onShouldSaveFragmentState(android::app::Fragment arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onShouldSaveFragmentState",
			"(Landroid/app/Fragment;)Z",
			arg0.__jniObject().object()
		);
	}
	void FragmentHostCallback::onStartActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3)
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
	void FragmentHostCallback::onStartIntentSenderFromFragment(android::app::Fragment arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7)
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
	jboolean FragmentHostCallback::onUseFragmentManagerInflaterFactory()
	{
		return __thiz.callMethod<jboolean>(
			"onUseFragmentManagerInflaterFactory",
			"()Z"
		);
	}
} // namespace android::app

