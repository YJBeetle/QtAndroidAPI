#pragma once

#ifndef ANDROID_MEDIA_MEDIADRM_KEYSTATUS
#define ANDROID_MEDIA_MEDIADRM_KEYSTATUS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaDrm_KeyStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_EXPIRED();
		static jint STATUS_INTERNAL_ERROR();
		static jint STATUS_OUTPUT_NOT_ALLOWED();
		static jint STATUS_PENDING();
		static jint STATUS_USABLE();
		static jint STATUS_USABLE_IN_FUTURE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jbyteArray getKeyId();
		jint getStatusCode();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint MediaDrm_KeyStatus::STATUS_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_EXPIRED"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_INTERNAL_ERROR"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_OUTPUT_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_OUTPUT_NOT_ALLOWED"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_PENDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_PENDING"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_USABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_USABLE"
		);
	}
	jint MediaDrm_KeyStatus::STATUS_USABLE_IN_FUTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_USABLE_IN_FUTURE"
		);
	}
	
	// Constructors
	void MediaDrm_KeyStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$KeyStatus",
			"(V)V");
	}
	
	// Methods
	jbyteArray MediaDrm_KeyStatus::getKeyId()
	{
		return __thiz.callObjectMethod(
			"getKeyId",
			"()[B"
		).object<jbyteArray>();
	}
	jint MediaDrm_KeyStatus::getStatusCode()
	{
		return __thiz.callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrm_KeyStatus : public __jni_impl::android::media::MediaDrm_KeyStatus
	{
	public:
		MediaDrm_KeyStatus(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrm_KeyStatus()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADRM_KEYSTATUS

