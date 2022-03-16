#include "../../JArray.hpp"
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
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./FragmentHostCallback.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	FragmentHostCallback::FragmentHostCallback(android::content::Context arg0, android::os::Handler arg1, jint arg2)
		: android::app::FragmentContainer(
			"android.app.FragmentHostCallback",
			"(Landroid/content/Context;Landroid/os/Handler;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	void FragmentHostCallback::onAttachFragment(android::app::Fragment arg0) const
	{
		callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	void FragmentHostCallback::onDump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	android::view::View FragmentHostCallback::onFindViewById(jint arg0) const
	{
		return callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	JObject FragmentHostCallback::onGetHost() const
	{
		return callObjectMethod(
			"onGetHost",
			"()Ljava/lang/Object;"
		);
	}
	android::view::LayoutInflater FragmentHostCallback::onGetLayoutInflater() const
	{
		return callObjectMethod(
			"onGetLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint FragmentHostCallback::onGetWindowAnimations() const
	{
		return callMethod<jint>(
			"onGetWindowAnimations",
			"()I"
		);
	}
	jboolean FragmentHostCallback::onHasView() const
	{
		return callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
	jboolean FragmentHostCallback::onHasWindowAnimations() const
	{
		return callMethod<jboolean>(
			"onHasWindowAnimations",
			"()Z"
		);
	}
	void FragmentHostCallback::onInvalidateOptionsMenu() const
	{
		callMethod<void>(
			"onInvalidateOptionsMenu",
			"()V"
		);
	}
	void FragmentHostCallback::onRequestPermissionsFromFragment(android::app::Fragment arg0, JArray arg1, jint arg2) const
	{
		callMethod<void>(
			"onRequestPermissionsFromFragment",
			"(Landroid/app/Fragment;[Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		);
	}
	jboolean FragmentHostCallback::onShouldSaveFragmentState(android::app::Fragment arg0) const
	{
		return callMethod<jboolean>(
			"onShouldSaveFragmentState",
			"(Landroid/app/Fragment;)Z",
			arg0.object()
		);
	}
	void FragmentHostCallback::onStartActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const
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
	void FragmentHostCallback::onStartIntentSenderFromFragment(android::app::Fragment arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7) const
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
	jboolean FragmentHostCallback::onUseFragmentManagerInflaterFactory() const
	{
		return callMethod<jboolean>(
			"onUseFragmentManagerInflaterFactory",
			"()Z"
		);
	}
} // namespace android::app

