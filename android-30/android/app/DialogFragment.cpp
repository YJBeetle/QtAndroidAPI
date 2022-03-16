#include "../../JArray.hpp"
#include "./Dialog.hpp"
#include "./FragmentManager.hpp"
#include "./FragmentTransaction.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../view/LayoutInflater.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
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
	
	// Constructors
	DialogFragment::DialogFragment()
		: android::app::Fragment(
			"android.app.DialogFragment",
			"()V"
		) {}
	
	// Methods
	void DialogFragment::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	void DialogFragment::dismissAllowingStateLoss() const
	{
		callMethod<void>(
			"dismissAllowingStateLoss",
			"()V"
		);
	}
	void DialogFragment::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	android::app::Dialog DialogFragment::getDialog() const
	{
		return callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	jboolean DialogFragment::getShowsDialog() const
	{
		return callMethod<jboolean>(
			"getShowsDialog",
			"()Z"
		);
	}
	jint DialogFragment::getTheme() const
	{
		return callMethod<jint>(
			"getTheme",
			"()I"
		);
	}
	jboolean DialogFragment::isCancelable() const
	{
		return callMethod<jboolean>(
			"isCancelable",
			"()Z"
		);
	}
	void DialogFragment::onActivityCreated(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void DialogFragment::onAttach(android::content::Context arg0) const
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	void DialogFragment::onCancel(JObject arg0) const
	{
		callMethod<void>(
			"onCancel",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	void DialogFragment::onCreate(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::app::Dialog DialogFragment::onCreateDialog(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onCreateDialog",
			"(Landroid/os/Bundle;)Landroid/app/Dialog;",
			arg0.object()
		);
	}
	void DialogFragment::onDestroyView() const
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void DialogFragment::onDetach() const
	{
		callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	void DialogFragment::onDismiss(JObject arg0) const
	{
		callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	android::view::LayoutInflater DialogFragment::onGetLayoutInflater(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	void DialogFragment::onSaveInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void DialogFragment::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void DialogFragment::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void DialogFragment::setCancelable(jboolean arg0) const
	{
		callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	void DialogFragment::setShowsDialog(jboolean arg0) const
	{
		callMethod<void>(
			"setShowsDialog",
			"(Z)V",
			arg0
		);
	}
	void DialogFragment::setStyle(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setStyle",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint DialogFragment::show(android::app::FragmentTransaction arg0, JString arg1) const
	{
		return callMethod<jint>(
			"show",
			"(Landroid/app/FragmentTransaction;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DialogFragment::show(android::app::FragmentManager arg0, JString arg1) const
	{
		callMethod<void>(
			"show",
			"(Landroid/app/FragmentManager;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::app

