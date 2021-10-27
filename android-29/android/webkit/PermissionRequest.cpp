#include "../net/Uri.hpp"
#include "./PermissionRequest.hpp"

namespace android::webkit
{
	// Fields
	jstring PermissionRequest::RESOURCE_AUDIO_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_AUDIO_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PermissionRequest::RESOURCE_MIDI_SYSEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_MIDI_SYSEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PermissionRequest::RESOURCE_PROTECTED_MEDIA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_PROTECTED_MEDIA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PermissionRequest::RESOURCE_VIDEO_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_VIDEO_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	PermissionRequest::PermissionRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PermissionRequest::PermissionRequest()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.PermissionRequest",
			"()V"
		);
	}
	
	// Methods
	void PermissionRequest::deny()
	{
		__thiz.callMethod<void>(
			"deny",
			"()V"
		);
	}
	QAndroidJniObject PermissionRequest::getOrigin()
	{
		return __thiz.callObjectMethod(
			"getOrigin",
			"()Landroid/net/Uri;"
		);
	}
	jarray PermissionRequest::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void PermissionRequest::grant(jarray arg0)
	{
		__thiz.callMethod<void>(
			"grant",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::webkit

