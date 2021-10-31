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
	android::drm::ProcessedData DrmInfoStatus::data()
	{
		return getObjectField(
			"data",
			"Landroid/drm/ProcessedData;"
		);
	}
	jint DrmInfoStatus::infoType()
	{
		return getField<jint>(
			"infoType"
		);
	}
	jstring DrmInfoStatus::mimeType()
	{
		return getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmInfoStatus::statusCode()
	{
		return getField<jint>(
			"statusCode"
		);
	}
	
	// QAndroidJniObject forward
	DrmInfoStatus::DrmInfoStatus(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmInfoStatus::DrmInfoStatus(jint arg0, jint arg1, android::drm::ProcessedData arg2, jstring arg3)
		: __JniBaseClass(
			"android.drm.DrmInfoStatus",
			"(IILandroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
} // namespace android::drm

