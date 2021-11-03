#include "../../JArray.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./PermissionRequest.hpp"

namespace android::webkit
{
	// Fields
	JString PermissionRequest::RESOURCE_AUDIO_CAPTURE()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_AUDIO_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	JString PermissionRequest::RESOURCE_MIDI_SYSEX()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_MIDI_SYSEX",
			"Ljava/lang/String;"
		);
	}
	JString PermissionRequest::RESOURCE_PROTECTED_MEDIA_ID()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_PROTECTED_MEDIA_ID",
			"Ljava/lang/String;"
		);
	}
	JString PermissionRequest::RESOURCE_VIDEO_CAPTURE()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_VIDEO_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	PermissionRequest::PermissionRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PermissionRequest::PermissionRequest()
		: JObject(
			"android.webkit.PermissionRequest",
			"()V"
		) {}
	
	// Methods
	void PermissionRequest::deny() const
	{
		callMethod<void>(
			"deny",
			"()V"
		);
	}
	android::net::Uri PermissionRequest::getOrigin() const
	{
		return callObjectMethod(
			"getOrigin",
			"()Landroid/net/Uri;"
		);
	}
	JArray PermissionRequest::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()[Ljava/lang/String;"
		);
	}
	void PermissionRequest::grant(JArray arg0) const
	{
		callMethod<void>(
			"grant",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::webkit

