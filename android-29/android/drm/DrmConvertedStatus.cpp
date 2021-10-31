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
		return getObjectField(
			"convertedData",
			"[B"
		).object<jbyteArray>();
	}
	jint DrmConvertedStatus::offset()
	{
		return getField<jint>(
			"offset"
		);
	}
	jint DrmConvertedStatus::statusCode()
	{
		return getField<jint>(
			"statusCode"
		);
	}
	
	// QAndroidJniObject forward
	DrmConvertedStatus::DrmConvertedStatus(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmConvertedStatus::DrmConvertedStatus(jint arg0, jbyteArray arg1, jint arg2)
		: __JniBaseClass(
			"android.drm.DrmConvertedStatus",
			"(I[BI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::drm

