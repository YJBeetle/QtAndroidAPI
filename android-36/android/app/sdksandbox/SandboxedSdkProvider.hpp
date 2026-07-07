#pragma once

#include "./SandboxedSdk.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../view/View.def.hpp"
#include "./SandboxedSdkProvider.def.hpp"

namespace android::app::sdksandbox
{
	// Fields
	
	// Constructors
	inline SandboxedSdkProvider::SandboxedSdkProvider()
		: JObject(
			"android.app.sdksandbox.SandboxedSdkProvider",
			"()V"
		) {}
	
	// Methods
	inline void SandboxedSdkProvider::attachContext(android::content::Context arg0) const
	{
		callMethod<void>(
			"attachContext",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	inline void SandboxedSdkProvider::beforeUnloadSdk() const
	{
		callMethod<void>(
			"beforeUnloadSdk",
			"()V"
		);
	}
	inline android::content::Context SandboxedSdkProvider::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline android::view::View SandboxedSdkProvider::getView(android::content::Context arg0, android::os::Bundle arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"getView",
			"(Landroid/content/Context;Landroid/os/Bundle;II)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline android::app::sdksandbox::SandboxedSdk SandboxedSdkProvider::onLoadSdk(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onLoadSdk",
			"(Landroid/os/Bundle;)Landroid/app/sdksandbox/SandboxedSdk;",
			arg0.object()
		);
	}
} // namespace android::app::sdksandbox

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::sdksandbox;
#endif
