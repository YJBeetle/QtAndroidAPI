#include "./DrmStore_DrmObjectType.hpp"

namespace android::drm
{
	// Fields
	jint DrmStore_DrmObjectType::CONTENT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"CONTENT"
		);
	}
	jint DrmStore_DrmObjectType::RIGHTS_OBJECT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"RIGHTS_OBJECT"
		);
	}
	jint DrmStore_DrmObjectType::TRIGGER_OBJECT()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"TRIGGER_OBJECT"
		);
	}
	jint DrmStore_DrmObjectType::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	DrmStore_DrmObjectType::DrmStore_DrmObjectType(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmStore_DrmObjectType::DrmStore_DrmObjectType()
		: JObject(
			"android.drm.DrmStore$DrmObjectType",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

