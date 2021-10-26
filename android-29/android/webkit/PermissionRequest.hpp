#pragma once

#ifndef ANDROID_WEBKIT_PERMISSIONREQUEST
#define ANDROID_WEBKIT_PERMISSIONREQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::webkit
{
	class PermissionRequest : public __JniBaseClass
	{
	public:
		// Fields
		static jstring RESOURCE_AUDIO_CAPTURE();
		static jstring RESOURCE_MIDI_SYSEX();
		static jstring RESOURCE_PROTECTED_MEDIA_ID();
		static jstring RESOURCE_VIDEO_CAPTURE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jarray getResources();
		void deny();
		void grant(jarray arg0);
		QAndroidJniObject getOrigin();
	};
} // namespace __jni_impl::android::webkit

#include "../net/Uri.hpp"

namespace __jni_impl::android::webkit
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
	
	// Constructors
	void PermissionRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.PermissionRequest",
			"()V"
		);
	}
	
	// Methods
	jarray PermissionRequest::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void PermissionRequest::deny()
	{
		__thiz.callMethod<void>(
			"deny",
			"()V"
		);
	}
	void PermissionRequest::grant(jarray arg0)
	{
		__thiz.callMethod<void>(
			"grant",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject PermissionRequest::getOrigin()
	{
		return __thiz.callObjectMethod(
			"getOrigin",
			"()Landroid/net/Uri;"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class PermissionRequest : public __jni_impl::android::webkit::PermissionRequest
	{
	public:
		PermissionRequest(QAndroidJniObject obj) { __thiz = obj; }
		PermissionRequest()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_PERMISSIONREQUEST

