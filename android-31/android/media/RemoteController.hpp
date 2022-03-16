#pragma once

#include "../content/Context.def.hpp"
#include "./RemoteController_MetadataEditor.def.hpp"
#include "../os/Looper.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "./RemoteController.def.hpp"

namespace android::media
{
	// Fields
	inline jint RemoteController::POSITION_SYNCHRONIZATION_CHECK()
	{
		return getStaticField<jint>(
			"android.media.RemoteController",
			"POSITION_SYNCHRONIZATION_CHECK"
		);
	}
	inline jint RemoteController::POSITION_SYNCHRONIZATION_NONE()
	{
		return getStaticField<jint>(
			"android.media.RemoteController",
			"POSITION_SYNCHRONIZATION_NONE"
		);
	}
	
	// Constructors
	inline RemoteController::RemoteController(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RemoteController::RemoteController(android::content::Context arg0, JObject arg1, android::os::Looper arg2)
		: JObject(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;Landroid/os/Looper;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jboolean RemoteController::clearArtworkConfiguration() const
	{
		return callMethod<jboolean>(
			"clearArtworkConfiguration",
			"()Z"
		);
	}
	inline android::media::RemoteController_MetadataEditor RemoteController::editMetadata() const
	{
		return callObjectMethod(
			"editMetadata",
			"()Landroid/media/RemoteController$MetadataEditor;"
		);
	}
	inline jlong RemoteController::getEstimatedMediaPosition() const
	{
		return callMethod<jlong>(
			"getEstimatedMediaPosition",
			"()J"
		);
	}
	inline jboolean RemoteController::seekTo(jlong arg0) const
	{
		return callMethod<jboolean>(
			"seekTo",
			"(J)Z",
			arg0
		);
	}
	inline jboolean RemoteController::sendMediaKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"sendMediaKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean RemoteController::setArtworkConfiguration(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setArtworkConfiguration",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean RemoteController::setSynchronizationMode(jint arg0) const
	{
		return callMethod<jboolean>(
			"setSynchronizationMode",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

// Base class headers

