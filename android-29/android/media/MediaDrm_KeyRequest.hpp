#pragma once

#ifndef ANDROID_MEDIA_MEDIADRM_KEYREQUEST
#define ANDROID_MEDIA_MEDIADRM_KEYREQUEST

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaDrm_KeyRequest : public __JniBaseClass
	{
	public:
		// Fields
		static jint REQUEST_TYPE_INITIAL();
		static jint REQUEST_TYPE_NONE();
		static jint REQUEST_TYPE_RELEASE();
		static jint REQUEST_TYPE_RENEWAL();
		static jint REQUEST_TYPE_UPDATE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getDefaultUrl();
		QAndroidJniObject getData();
		jint getRequestType();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint MediaDrm_KeyRequest::REQUEST_TYPE_INITIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_INITIAL");
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_NONE");
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_RELEASE");
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_RENEWAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_RENEWAL");
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_UPDATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_UPDATE");
	}
	
	// Constructors
	void MediaDrm_KeyRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$KeyRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaDrm_KeyRequest::getDefaultUrl()
	{
		return __thiz.callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MediaDrm_KeyRequest::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B");
	}
	jint MediaDrm_KeyRequest::getRequestType()
	{
		return __thiz.callMethod<jint>(
			"getRequestType",
			"()I");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrm_KeyRequest : public __jni_impl::android::media::MediaDrm_KeyRequest
	{
	public:
		MediaDrm_KeyRequest(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrm_KeyRequest()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADRM_KEYREQUEST

