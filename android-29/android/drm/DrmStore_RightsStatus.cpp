#include "./DrmStore_RightsStatus.hpp"

namespace android::drm
{
	// Fields
	jint DrmStore_RightsStatus::RIGHTS_EXPIRED()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_EXPIRED"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_INVALID()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_INVALID"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_NOT_ACQUIRED()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_NOT_ACQUIRED"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_VALID()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_VALID"
		);
	}
	
	// QJniObject forward
	DrmStore_RightsStatus::DrmStore_RightsStatus(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmStore_RightsStatus::DrmStore_RightsStatus()
		: JObject(
			"android.drm.DrmStore$RightsStatus",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

