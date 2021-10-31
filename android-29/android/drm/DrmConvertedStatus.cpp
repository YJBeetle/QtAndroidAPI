#include "./DrmConvertedStatus.hpp"

namespace android::drm
{
	// Fields
	jint DrmConvertedStatus::STATUS_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_ERROR"
		);
	}
	jint DrmConvertedStatus::STATUS_INPUTDATA_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_INPUTDATA_ERROR"
		);
	}
	jint DrmConvertedStatus::STATUS_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_OK"
		);
	}
	jbyteArray DrmConvertedStatus::convertedData()
	{
		return __thiz.getObjectField(
			"convertedData",
			"[B"
		).object<jbyteArray>();
	}
	jint DrmConvertedStatus::offset()
	{
		return __thiz.getField<jint>(
			"offset"
		);
	}
	jint DrmConvertedStatus::statusCode()
	{
		return __thiz.getField<jint>(
			"statusCode"
		);
	}
	
	DrmConvertedStatus::DrmConvertedStatus(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmConvertedStatus::DrmConvertedStatus(jint arg0, jbyteArray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmConvertedStatus",
			"(I[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::drm

