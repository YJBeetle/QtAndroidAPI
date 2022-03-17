#pragma once

#include "./Activity.def.hpp"
#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor_Request.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void VoiceInteractor_Request::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline android::app::Activity VoiceInteractor_Request::getActivity() const
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	inline android::content::Context VoiceInteractor_Request::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline JString VoiceInteractor_Request::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline void VoiceInteractor_Request::onAttached(android::app::Activity arg0) const
	{
		callMethod<void>(
			"onAttached",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractor_Request::onCancel() const
	{
		callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	inline void VoiceInteractor_Request::onDetached() const
	{
		callMethod<void>(
			"onDetached",
			"()V"
		);
	}
	inline JString VoiceInteractor_Request::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
