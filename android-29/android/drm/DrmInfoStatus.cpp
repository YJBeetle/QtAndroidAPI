#include "./ProcessedData.hpp"
#include "./DrmInfoStatus.hpp"

namespace android::drm
{
	// Fields
	jint DrmInfoStatus::STATUS_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoStatus",
			"STATUS_ERROR"
		);
	}
	jint DrmInfoStatus::STATUS_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoStatus",
			"STATUS_OK"
		);
	}
	QAndroidJniObject DrmInfoStatus::data()
	{
		return __thiz.getObjectField(
			"data",
			"Landroid/drm/ProcessedData;"
		);
	}
	jint DrmInfoStatus::infoType()
	{
		return __thiz.getField<jint>(
			"infoType"
		);
	}
	jstring DrmInfoStatus::mimeType()
	{
		return __thiz.getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmInfoStatus::statusCode()
	{
		return __thiz.getField<jint>(
			"statusCode"
		);
	}
	
	DrmInfoStatus::DrmInfoStatus(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmInfoStatus::DrmInfoStatus(jint arg0, jint arg1, android::drm::ProcessedData arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfoStatus",
			"(IILandroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
} // namespace android::drm

