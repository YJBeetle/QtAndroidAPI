#pragma once

#include "../../JArray.hpp"
#include "./Dialog.def.hpp"
#include "./FragmentManager.def.hpp"
#include "./FragmentTransaction.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "./DialogFragment.def.hpp"

namespace android::app
{
	// Fields
	inline jint DialogFragment::STYLE_NORMAL()
	{
		return getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NORMAL"
		);
	}
	inline jint DialogFragment::STYLE_NO_FRAME()
	{
		return getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_FRAME"
		);
	}
	inline jint DialogFragment::STYLE_NO_INPUT()
	{
		return getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_INPUT"
		);
	}
	inline jint DialogFragment::STYLE_NO_TITLE()
	{
		return getStaticField<jint>(
			"android.app.DialogFragment",
			"STYLE_NO_TITLE"
		);
	}
	
	// Constructors
	inline DialogFragment::DialogFragment()
		: android::app::Fragment(
			"android.app.DialogFragment",
			"()V"
		) {}
	
	// Methods
	inline void DialogFragment::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	inline void DialogFragment::dismissAllowingStateLoss() const
	{
		callMethod<void>(
			"dismissAllowingStateLoss",
			"()V"
		);
	}
	inline void DialogFragment::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	inline android::app::Dialog DialogFragment::getDialog() const
	{
		return callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	inline jboolean DialogFragment::getShowsDialog() const
	{
		return callMethod<jboolean>(
			"getShowsDialog",
			"()Z"
		);
	}
	inline jint DialogFragment::getTheme() const
	{
		return callMethod<jint>(
			"getTheme",
			"()I"
		);
	}
	inline jboolean DialogFragment::isCancelable() const
	{
		return callMethod<jboolean>(
			"isCancelable",
			"()Z"
		);
	}
	inline void DialogFragment::onActivityCreated(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void DialogFragment::onAttach(android::content::Context arg0) const
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	inline void DialogFragment::onCancel(JObject arg0) const
	{
		callMethod<void>(
			"onCancel",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	inline void DialogFragment::onCreate(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline android::app::Dialog DialogFragment::onCreateDialog(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onCreateDialog",
			"(Landroid/os/Bundle;)Landroid/app/Dialog;",
			arg0.object()
		);
	}
	inline void DialogFragment::onDestroyView() const
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	inline void DialogFragment::onDetach() const
	{
		callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	inline void DialogFragment::onDismiss(JObject arg0) const
	{
		callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	inline android::view::LayoutInflater DialogFragment::onGetLayoutInflater(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	inline void DialogFragment::onSaveInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void DialogFragment::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	inline void DialogFragment::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
	inline void DialogFragment::setCancelable(jboolean arg0) const
	{
		callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	inline void DialogFragment::setShowsDialog(jboolean arg0) const
	{
		callMethod<void>(
			"setShowsDialog",
			"(Z)V",
			arg0
		);
	}
	inline void DialogFragment::setStyle(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setStyle",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jint DialogFragment::show(android::app::FragmentTransaction arg0, JString arg1) const
	{
		return callMethod<jint>(
			"show",
			"(Landroid/app/FragmentTransaction;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void DialogFragment::show(android::app::FragmentManager arg0, JString arg1) const
	{
		callMethod<void>(
			"show",
			"(Landroid/app/FragmentManager;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers
#include "./Fragment.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
