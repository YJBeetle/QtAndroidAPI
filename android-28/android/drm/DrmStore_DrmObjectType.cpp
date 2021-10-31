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
	
	// QJniObject forward
	DrmStore_DrmObjectType::DrmStore_DrmObjectType(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmStore_DrmObjectType::DrmStore_DrmObjectType()
		: __JniBaseClass(
			"android.drm.DrmStore$DrmObjectType",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

