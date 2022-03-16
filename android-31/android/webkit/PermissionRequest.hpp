#pragma once

#include "../../JArray.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./PermissionRequest.def.hpp"

namespace android::webkit
{
	// Fields
	inline JString PermissionRequest::RESOURCE_AUDIO_CAPTURE()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_AUDIO_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString PermissionRequest::RESOURCE_MIDI_SYSEX()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_MIDI_SYSEX",
			"Ljava/lang/String;"
		);
	}
	inline JString PermissionRequest::RESOURCE_PROTECTED_MEDIA_ID()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_PROTECTED_MEDIA_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString PermissionRequest::RESOURCE_VIDEO_CAPTURE()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_VIDEO_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline PermissionRequest::PermissionRequest()
		: JObject(
			"android.webkit.PermissionRequest",
			"()V"
		) {}
	
	// Methods
	inline void PermissionRequest::deny() const
	{
		callMethod<void>(
			"deny",
			"()V"
		);
	}
	inline android::net::Uri PermissionRequest::getOrigin() const
	{
		return callObjectMethod(
			"getOrigin",
			"()Landroid/net/Uri;"
		);
	}
	inline JArray PermissionRequest::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()[Ljava/lang/String;"
		);
	}
	inline void PermissionRequest::grant(JArray arg0) const
	{
		callMethod<void>(
			"grant",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::webkit

// Base class headers

