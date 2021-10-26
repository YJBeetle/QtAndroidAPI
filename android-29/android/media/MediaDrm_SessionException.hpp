#pragma once

#ifndef ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION
#define ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::media
{
	class MediaDrm_SessionException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		static jint ERROR_RESOURCE_CONTENTION();
		static jint ERROR_UNKNOWN();
		
		// Constructors
		void __constructor(jint arg0, jstring arg1);
		void __constructor(jint arg0, const QString &arg1);
		
		// Methods
		jint getErrorCode();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint MediaDrm_SessionException::ERROR_RESOURCE_CONTENTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_RESOURCE_CONTENTION"
		);
	}
	jint MediaDrm_SessionException::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	void MediaDrm_SessionException::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$SessionException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MediaDrm_SessionException::__constructor(jint arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$SessionException",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jint MediaDrm_SessionException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrm_SessionException : public __jni_impl::android::media::MediaDrm_SessionException
	{
	public:
		MediaDrm_SessionException(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrm_SessionException(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADRM_SESSIONEXCEPTION

