#pragma once

#include "../../JArray.hpp"
#include "../content/Intent.def.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.def.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.def.hpp"
#include "../view/KeyEvent_DispatcherState.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "./AbstractInputMethodService.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// Constructors
	inline AbstractInputMethodService::AbstractInputMethodService()
		: android::app::Service(
			"android.inputmethodservice.AbstractInputMethodService",
			"()V"
		) {}
	
	// Methods
	inline android::view::KeyEvent_DispatcherState AbstractInputMethodService::getKeyDispatcherState() const
	{
		return callObjectMethod(
			"getKeyDispatcherState",
			"()Landroid/view/KeyEvent$DispatcherState;"
		);
	}
	inline jboolean AbstractInputMethodService::isUiContext() const
	{
		return callMethod<jboolean>(
			"isUiContext",
			"()Z"
		);
	}
	inline JObject AbstractInputMethodService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl AbstractInputMethodService::onCreateInputMethodInterface() const
	{
		return callObjectMethod(
			"onCreateInputMethodInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;"
		);
	}
	inline android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl AbstractInputMethodService::onCreateInputMethodSessionInterface() const
	{
		return callObjectMethod(
			"onCreateInputMethodSessionInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;"
		);
	}
	inline jboolean AbstractInputMethodService::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean AbstractInputMethodService::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
} // namespace android::inputmethodservice

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::inputmethodservice;
#endif
