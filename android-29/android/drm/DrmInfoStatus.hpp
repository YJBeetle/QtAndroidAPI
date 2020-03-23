#pragma once

#ifndef ANDROID_DRM_DRMINFOSTATUS
#define ANDROID_DRM_DRMINFOSTATUS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::drm
{
	class ProcessedData;
}

namespace __jni_impl::android::drm
{
	class DrmInfoStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_ERROR();
		static jint STATUS_OK();
		QAndroidJniObject data();
		jint infoType();
		QAndroidJniObject mimeType();
		jint statusCode();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, __jni_impl::android::drm::ProcessedData arg2, jstring arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::drm

#include "ProcessedData.hpp"

namespace __jni_impl::android::drm
{
	// Fields
	jint DrmInfoStatus::STATUS_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoStatus",
			"STATUS_ERROR");
	}
	jint DrmInfoStatus::STATUS_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoStatus",
			"STATUS_OK");
	}
	QAndroidJniObject DrmInfoStatus::data()
	{
		return __thiz.getObjectField(
			"data",
			"Landroid/drm/ProcessedData;");
	}
	jint DrmInfoStatus::infoType()
	{
		return __thiz.getField<jint>(
			"infoType");
	}
	QAndroidJniObject DrmInfoStatus::mimeType()
	{
		return __thiz.getObjectField(
			"mimeType",
			"Ljava/lang/String;");
	}
	jint DrmInfoStatus::statusCode()
	{
		return __thiz.getField<jint>(
			"statusCode");
	}
	
	// Constructors
	void DrmInfoStatus::__constructor(jint arg0, jint arg1, __jni_impl::android::drm::ProcessedData arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfoStatus",
			"(IILandroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	
	// Methods
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmInfoStatus : public __jni_impl::android::drm::DrmInfoStatus
	{
	public:
		DrmInfoStatus(QAndroidJniObject obj) { __thiz = obj; }
		DrmInfoStatus(jint arg0, jint arg1, __jni_impl::android::drm::ProcessedData arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMINFOSTATUS

