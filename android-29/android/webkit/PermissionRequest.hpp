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
		static QAndroidJniObject RESOURCE_AUDIO_CAPTURE();
		static QAndroidJniObject RESOURCE_MIDI_SYSEX();
		static QAndroidJniObject RESOURCE_PROTECTED_MEDIA_ID();
		static QAndroidJniObject RESOURCE_VIDEO_CAPTURE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getResources();
		void deny();
		QAndroidJniObject getOrigin();
		void grant(jarray arg0);
	};
} // namespace __jni_impl::android::webkit

#include "../net/Uri.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	QAndroidJniObject PermissionRequest::RESOURCE_AUDIO_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_AUDIO_CAPTURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PermissionRequest::RESOURCE_MIDI_SYSEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_MIDI_SYSEX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PermissionRequest::RESOURCE_PROTECTED_MEDIA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_PROTECTED_MEDIA_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PermissionRequest::RESOURCE_VIDEO_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.PermissionRequest",
			"RESOURCE_VIDEO_CAPTURE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void PermissionRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.PermissionRequest",
			"()V");
	}
	
	// Methods
	QAndroidJniObject PermissionRequest::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()[Ljava/lang/String;");
	}
	void PermissionRequest::deny()
	{
		__thiz.callMethod<void>(
			"deny",
			"()V");
	}
	QAndroidJniObject PermissionRequest::getOrigin()
	{
		return __thiz.callObjectMethod(
			"getOrigin",
			"()Landroid/net/Uri;");
	}
	void PermissionRequest::grant(jarray arg0)
	{
		__thiz.callMethod<void>(
			"grant",
			"([Ljava/lang/String;)V",
			arg0);
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

