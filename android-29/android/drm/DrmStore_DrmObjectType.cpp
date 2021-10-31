#include "./DrmStore_DrmObjectType.hpp"

namespace android::drm
{
	// Fields
	jint DrmStore_DrmObjectType::CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"CONTENT"
		);
	}
	jint DrmStore_DrmObjectType::RIGHTS_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"RIGHTS_OBJECT"
		);
	}
	jint DrmStore_DrmObjectType::TRIGGER_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"TRIGGER_OBJECT"
		);
	}
	jint DrmStore_DrmObjectType::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	DrmStore_DrmObjectType::DrmStore_DrmObjectType(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmStore_DrmObjectType::DrmStore_DrmObjectType()
		: __JniBaseClass(
			"android.drm.DrmStore$DrmObjectType",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

