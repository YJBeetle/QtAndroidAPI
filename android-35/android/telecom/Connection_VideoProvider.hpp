#pragma once

#include "../net/Uri.def.hpp"
#include "./VideoProfile.def.hpp"
#include "./VideoProfile_CameraCapabilities.def.hpp"
#include "../view/Surface.def.hpp"
#include "../../JString.hpp"
#include "./Connection_VideoProvider.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint Connection_VideoProvider::SESSION_EVENT_CAMERA_FAILURE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_CAMERA_FAILURE"
		);
	}
	inline jint Connection_VideoProvider::SESSION_EVENT_CAMERA_PERMISSION_ERROR()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_CAMERA_PERMISSION_ERROR"
		);
	}
	inline jint Connection_VideoProvider::SESSION_EVENT_CAMERA_READY()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_CAMERA_READY"
		);
	}
	inline jint Connection_VideoProvider::SESSION_EVENT_RX_PAUSE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_RX_PAUSE"
		);
	}
	inline jint Connection_VideoProvider::SESSION_EVENT_RX_RESUME()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_RX_RESUME"
		);
	}
	inline jint Connection_VideoProvider::SESSION_EVENT_TX_START()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_TX_START"
		);
	}
	inline jint Connection_VideoProvider::SESSION_EVENT_TX_STOP()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_TX_STOP"
		);
	}
	inline jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_FAIL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_FAIL"
		);
	}
	inline jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_INVALID()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_INVALID"
		);
	}
	inline jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE"
		);
	}
	inline jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_SUCCESS()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_SUCCESS"
		);
	}
	inline jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_TIMED_OUT"
		);
	}
	
	// Constructors
	inline Connection_VideoProvider::Connection_VideoProvider()
		: JObject(
			"android.telecom.Connection$VideoProvider",
			"()V"
		) {}
	
	// Methods
	inline void Connection_VideoProvider::changeCameraCapabilities(android::telecom::VideoProfile_CameraCapabilities arg0) const
	{
		callMethod<void>(
			"changeCameraCapabilities",
			"(Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.object()
		);
	}
	inline void Connection_VideoProvider::changePeerDimensions(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"changePeerDimensions",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Connection_VideoProvider::changeVideoQuality(jint arg0) const
	{
		callMethod<void>(
			"changeVideoQuality",
			"(I)V",
			arg0
		);
	}
	inline void Connection_VideoProvider::handleCallSessionEvent(jint arg0) const
	{
		callMethod<void>(
			"handleCallSessionEvent",
			"(I)V",
			arg0
		);
	}
	inline void Connection_VideoProvider::onRequestCameraCapabilities() const
	{
		callMethod<void>(
			"onRequestCameraCapabilities",
			"()V"
		);
	}
	inline void Connection_VideoProvider::onRequestConnectionDataUsage() const
	{
		callMethod<void>(
			"onRequestConnectionDataUsage",
			"()V"
		);
	}
	inline void Connection_VideoProvider::onSendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1) const
	{
		callMethod<void>(
			"onSendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Connection_VideoProvider::onSendSessionModifyResponse(android::telecom::VideoProfile arg0) const
	{
		callMethod<void>(
			"onSendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	inline void Connection_VideoProvider::onSetCamera(JString arg0) const
	{
		callMethod<void>(
			"onSetCamera",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Connection_VideoProvider::onSetDeviceOrientation(jint arg0) const
	{
		callMethod<void>(
			"onSetDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	inline void Connection_VideoProvider::onSetDisplaySurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"onSetDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void Connection_VideoProvider::onSetPauseImage(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onSetPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void Connection_VideoProvider::onSetPreviewSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"onSetPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void Connection_VideoProvider::onSetZoom(jfloat arg0) const
	{
		callMethod<void>(
			"onSetZoom",
			"(F)V",
			arg0
		);
	}
	inline void Connection_VideoProvider::receiveSessionModifyRequest(android::telecom::VideoProfile arg0) const
	{
		callMethod<void>(
			"receiveSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	inline void Connection_VideoProvider::receiveSessionModifyResponse(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2) const
	{
		callMethod<void>(
			"receiveSessionModifyResponse",
			"(ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void Connection_VideoProvider::setCallDataUsage(jlong arg0) const
	{
		callMethod<void>(
			"setCallDataUsage",
			"(J)V",
			arg0
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
