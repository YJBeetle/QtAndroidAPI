#include "../net/Uri.hpp"
#include "./PermissionRequest.hpp"

namespace android::webkit
{
	// Fields
	jstring PermissionRequest::RESOURCE_AUDIO_CAPTURE()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_AUDIO_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PermissionRequest::RESOURCE_MIDI_SYSEX()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_MIDI_SYSEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PermissionRequest::RESOURCE_PROTECTED_MEDIA_ID()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_PROTECTED_MEDIA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PermissionRequest::RESOURCE_VIDEO_CAPTURE()
	{
		return getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_VIDEO_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	PermissionRequest::PermissionRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PermissionRequest::PermissionRequest()
		: __JniBaseClass(
			"android.webkit.PermissionRequest",
			"()V"
		) {}
	
	// Methods
	void PermissionRequest::deny()
	{
		callMethod<void>(
			"deny",
			"()V"
		);
	}
	android::net::Uri PermissionRequest::getOrigin()
	{
		return callObjectMethod(
			"getOrigin",
			"()Landroid/net/Uri;"
		);
	}
	jarray PermissionRequest::getResources()
	{
		return callObjectMethod(
			"getResources",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void PermissionRequest::grant(jarray arg0)
	{
		callMethod<void>(
			"grant",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::webkit

