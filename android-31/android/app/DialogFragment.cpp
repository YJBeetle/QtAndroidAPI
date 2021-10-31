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
		return getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NORMAL"
		);
	}
	jint DialogFragment::STYLE_NO_FRAME()
	{
		return getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_FRAME"
		);
	}
	jint DialogFragment::STYLE_NO_INPUT()
	{
		return getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_INPUT"
		);
	}
	jint DialogFragment::STYLE_NO_TITLE()
	{
		return getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_TITLE"
		);
	}
	
	// QJniObject forward
	DialogFragment::DialogFragment(QJniObject obj) : android::app::Fragment(obj) {}
	
	// Constructors
	DialogFragment::DialogFragment()
		: android::app::Fragment(
			"android.app.DialogFragment",
			"()V"
		) {}
	
	// Methods
	void DialogFragment::dismiss()
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	void DialogFragment::dismissAllowingStateLoss()
	{
		callMethod<void>(
			"dismissAllowingStateLoss",
			"()V"
		);
	}
	void DialogFragment::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::app::Dialog DialogFragment::getDialog()
	{
		return callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	jboolean DialogFragment::getShowsDialog()
	{
		return callMethod<jboolean>(
			"getShowsDialog",
			"()Z"
		);
	}
	jint DialogFragment::getTheme()
	{
		return callMethod<jint>(
			"getTheme",
			"()I"
		);
	}
	jboolean DialogFragment::isCancelable()
	{
		return callMethod<jboolean>(
			"isCancelable",
			"()Z"
		);
	}
	void DialogFragment::onActivityCreated(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void DialogFragment::onAttach(android::content::Context arg0)
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	void DialogFragment::onCancel(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onCancel",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	void DialogFragment::onCreate(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::app::Dialog DialogFragment::onCreateDialog(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"onCreateDialog",
			"(Landroid/os/Bundle;)Landroid/app/Dialog;",
			arg0.object()
		);
	}
	void DialogFragment::onDestroyView()
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void DialogFragment::onDetach()
	{
		callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	void DialogFragment::onDismiss(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	android::view::LayoutInflater DialogFragment::onGetLayoutInflater(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	void DialogFragment::onSaveInstanceState(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void DialogFragment::onStart()
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void DialogFragment::onStop()
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void DialogFragment::setCancelable(jboolean arg0)
	{
		callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	void DialogFragment::setShowsDialog(jboolean arg0)
	{
		callMethod<void>(
			"setShowsDialog",
			"(Z)V",
			arg0
		);
	}
	void DialogFragment::setStyle(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setStyle",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint DialogFragment::show(android::app::FragmentTransaction arg0, jstring arg1)
	{
		return callMethod<jint>(
			"show",
			"(Landroid/app/FragmentTransaction;Ljava/lang/String;)I",
			arg0.object(),
			arg1
		);
	}
	void DialogFragment::show(android::app::FragmentManager arg0, jstring arg1)
	{
		callMethod<void>(
			"show",
			"(Landroid/app/FragmentManager;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

