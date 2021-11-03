#include "../../java/util/HashMap.hpp"
#include "./DrmEvent.hpp"

namespace android::drm
{
	// Fields
	jstring DrmEvent::DRM_INFO_OBJECT()
	{
		return getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_OBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmEvent::DRM_INFO_STATUS_OBJECT()
	{
		return getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_STATUS_OBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmEvent::TYPE_ALL_RIGHTS_REMOVED()
	{
		return getStaticField<jint>(
			"android.drm.DrmEvent",
			"TYPE_ALL_RIGHTS_REMOVED"
		);
	}
	jint DrmEvent::TYPE_DRM_INFO_PROCESSED()
	{
		return getStaticField<jint>(
			"android.drm.DrmEvent",
			"TYPE_DRM_INFO_PROCESSED"
		);
	}
	
	// QAndroidJniObject forward
	DrmEvent::DrmEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jobject DrmEvent::getAttribute(jstring arg0)
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring DrmEvent::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmEvent::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint DrmEvent::getUniqueId()
	{
		return callMethod<jint>(
			"getUniqueId",
			"()I"
		);
	}
} // namespace android::drm

