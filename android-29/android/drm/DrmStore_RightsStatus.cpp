#include "./DrmStore_RightsStatus.hpp"

namespace android::drm
{
	// Fields
	jint DrmStore_RightsStatus::RIGHTS_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_EXPIRED"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_INVALID"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_NOT_ACQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_NOT_ACQUIRED"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_VALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_VALID"
		);
	}
	
	DrmStore_RightsStatus::DrmStore_RightsStatus(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmStore_RightsStatus::DrmStore_RightsStatus()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmStore$RightsStatus",
			"()V"
		);
	}
	
	// Methods
} // namespace android::drm

