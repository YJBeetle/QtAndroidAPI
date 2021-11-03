#include "./ProcessedData.hpp"
#include "../../JString.hpp"
#include "./DrmInfoStatus.hpp"

namespace android::drm
{
	// Fields
	jint DrmInfoStatus::STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoStatus",
			"STATUS_ERROR"
		);
	}
	jint DrmInfoStatus::STATUS_OK()
	{
		return getStaticField<jint>(
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
	JString DrmInfoStatus::mimeType()
	{
		return getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		);
	}
	jint DrmInfoStatus::statusCode()
	{
		return getField<jint>(
			"statusCode"
		);
	}
	
	// QAndroidJniObject forward
	DrmInfoStatus::DrmInfoStatus(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmInfoStatus::DrmInfoStatus(jint arg0, jint arg1, android::drm::ProcessedData arg2, JString arg3)
		: JObject(
			"android.drm.DrmInfoStatus",
			"(IILandroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object<jstring>()
		) {}
	
	// Methods
} // namespace android::drm

