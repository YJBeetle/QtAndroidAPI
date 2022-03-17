#pragma once

#include "../../JArray.hpp"
#include "./Fragment.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/IntentSender.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../view/View.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./FragmentHostCallback.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline FragmentHostCallback::FragmentHostCallback(android::content::Context arg0, android::os::Handler arg1, jint arg2)
		: android::app::FragmentContainer(
			"android.app.FragmentHostCallback",
			"(Landroid/content/Context;Landroid/os/Handler;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline void FragmentHostCallback::onAttachFragment(android::app::Fragment arg0) const
	{
		callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	inline void FragmentHostCallback::onDump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
	{
		callMethod<void>(
			"onDump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	inline android::view::View FragmentHostCallback::onFindViewById(jint arg0) const
	{
		return callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline JObject FragmentHostCallback::onGetHost() const
	{
		return callObjectMethod(
			"onGetHost",
			"()Ljava/lang/Object;"
		);
	}
	inline android::view::LayoutInflater FragmentHostCallback::onGetLayoutInflater() const
	{
		return callObjectMethod(
			"onGetLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	inline jint FragmentHostCallback::onGetWindowAnimations() const
	{
		return callMethod<jint>(
			"onGetWindowAnimations",
			"()I"
		);
	}
	inline jboolean FragmentHostCallback::onHasView() const
	{
		return callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
	inline jboolean FragmentHostCallback::onHasWindowAnimations() const
	{
		return callMethod<jboolean>(
			"onHasWindowAnimations",
			"()Z"
		);
	}
	inline void FragmentHostCallback::onInvalidateOptionsMenu() const
	{
		callMethod<void>(
			"onInvalidateOptionsMenu",
			"()V"
		);
	}
	inline void FragmentHostCallback::onRequestPermissionsFromFragment(android::app::Fragment arg0, JArray arg1, jint arg2) const
	{
		callMethod<void>(
			"onRequestPermissionsFromFragment",
			"(Landroid/app/Fragment;[Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		);
	}
	inline jboolean FragmentHostCallback::onShouldSaveFragmentState(android::app::Fragment arg0) const
	{
		return callMethod<jboolean>(
			"onShouldSaveFragmentState",
			"(Landroid/app/Fragment;)Z",
			arg0.object()
		);
	}
	inline void FragmentHostCallback::onStartActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"onStartActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline void FragmentHostCallback::onStartIntentSenderFromFragment(android::app::Fragment arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7) const
	{
		callMethod<void>(
			"onStartIntentSenderFromFragment",
			"(Landroid/app/Fragment;Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	inline jboolean FragmentHostCallback::onUseFragmentManagerInflaterFactory() const
	{
		return callMethod<jboolean>(
			"onUseFragmentManagerInflaterFactory",
			"()Z"
		);
	}
} // namespace android::app

// Base class headers
#include "./FragmentContainer.hpp"

