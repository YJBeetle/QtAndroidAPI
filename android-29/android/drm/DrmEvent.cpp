#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/HashMap.hpp"
#include "./DrmEvent.hpp"

namespace android::drm
{
	// Fields
	JString DrmEvent::DRM_INFO_OBJECT()
	{
		return getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_OBJECT",
			"Ljava/lang/String;"
		);
	}
	JString DrmEvent::DRM_INFO_STATUS_OBJECT()
	{
		return getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_STATUS_OBJECT",
			"Ljava/lang/String;"
		);
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
	JObject DrmEvent::getAttribute(JString arg0) const
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JString DrmEvent::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jint DrmEvent::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint DrmEvent::getUniqueId() const
	{
		return callMethod<jint>(
			"getUniqueId",
			"()I"
		);
	}
} // namespace android::drm

