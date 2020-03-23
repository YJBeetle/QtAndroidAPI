#pragma once

#ifndef ANDROID_DRM_DRMCONVERTEDSTATUS
#define ANDROID_DRM_DRMCONVERTEDSTATUS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmConvertedStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_ERROR();
		static jint STATUS_INPUTDATA_ERROR();
		static jint STATUS_OK();
		QAndroidJniObject convertedData();
		jint offset();
		jint statusCode();
		
		// Constructors
		void __constructor(jint arg0, jbyteArray arg1, jint arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	jint DrmConvertedStatus::STATUS_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_ERROR");
	}
	jint DrmConvertedStatus::STATUS_INPUTDATA_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_INPUTDATA_ERROR");
	}
	jint DrmConvertedStatus::STATUS_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_OK");
	}
	QAndroidJniObject DrmConvertedStatus::convertedData()
	{
		return __thiz.getObjectField(
			"convertedData",
			"[B");
	}
	jint DrmConvertedStatus::offset()
	{
		return __thiz.getField<jint>(
			"offset");
	}
	jint DrmConvertedStatus::statusCode()
	{
		return __thiz.getField<jint>(
			"statusCode");
	}
	
	// Constructors
	void DrmConvertedStatus::__constructor(jint arg0, jbyteArray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmConvertedStatus",
			"(I[BI)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmConvertedStatus : public __jni_impl::android::drm::DrmConvertedStatus
	{
	public:
		DrmConvertedStatus(QAndroidJniObject obj) { __thiz = obj; }
		DrmConvertedStatus(jint arg0, jbyteArray arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMCONVERTEDSTATUS

