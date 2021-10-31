#include "./Dialog.hpp"
#include "./FragmentManager.hpp"
#include "./FragmentTransaction.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../view/LayoutInflater.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./DialogFragment.hpp"

namespace android::app
{
	// Fields
	jint DialogFragment::STYLE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NORMAL"
		);
	}
	jint DialogFragment::STYLE_NO_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_FRAME"
		);
	}
	jint DialogFragment::STYLE_NO_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_INPUT"
		);
	}
	jint DialogFragment::STYLE_NO_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_TITLE"
		);
	}
	
	DialogFragment::DialogFragment(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DialogFragment::DialogFragment()
	{
		__thiz = QAndroidJniObject(
			"android.app.DialogFragment",
			"()V"
		);
	}
	
	// Methods
	void DialogFragment::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	void DialogFragment::dismissAllowingStateLoss()
	{
		__thiz.callMethod<void>(
			"dismissAllowingStateLoss",
			"()V"
		);
	}
	void DialogFragment::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject DialogFragment::getDialog()
	{
		return __thiz.callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	jboolean DialogFragment::getShowsDialog()
	{
		return __thiz.callMethod<jboolean>(
			"getShowsDialog",
			"()Z"
		);
	}
	jint DialogFragment::getTheme()
	{
		return __thiz.callMethod<jint>(
			"getTheme",
			"()I"
		);
	}
	jboolean DialogFragment::isCancelable()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelable",
			"()Z"
		);
	}
	void DialogFragment::onActivityCreated(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onAttach(android::content::Context arg0)
	{
		__thiz.callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onCancel(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCancel",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onCreate(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DialogFragment::onCreateDialog(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateDialog",
			"(Landroid/os/Bundle;)Landroid/app/Dialog;",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onDestroyView()
	{
		__thiz.callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void DialogFragment::onDetach()
	{
		__thiz.callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	void DialogFragment::onDismiss(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DialogFragment::onGetLayoutInflater(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onSaveInstanceState(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogFragment::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void DialogFragment::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void DialogFragment::setCancelable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	void DialogFragment::setShowsDialog(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowsDialog",
			"(Z)V",
			arg0
		);
	}
	void DialogFragment::setStyle(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setStyle",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint DialogFragment::show(android::app::FragmentTransaction arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"show",
			"(Landroid/app/FragmentTransaction;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DialogFragment::show(android::app::FragmentManager arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"show",
			"(Landroid/app/FragmentManager;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

