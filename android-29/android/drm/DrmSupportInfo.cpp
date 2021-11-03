#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DrmSupportInfo.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmSupportInfo::DrmSupportInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmSupportInfo::DrmSupportInfo()
		: JObject(
			"android.drm.DrmSupportInfo",
			"()V"
		) {}
	
	// Methods
	void DrmSupportInfo::addFileSuffix(JString arg0)
	{
		callMethod<void>(
			"addFileSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DrmSupportInfo::addMimeType(JString arg0)
	{
		callMethod<void>(
			"addMimeType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean DrmSupportInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString DrmSupportInfo::getDescriprition()
	{
		return callObjectMethod(
			"getDescriprition",
			"()Ljava/lang/String;"
		);
	}
	JString DrmSupportInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	JObject DrmSupportInfo::getFileSuffixIterator()
	{
		return callObjectMethod(
			"getFileSuffixIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject DrmSupportInfo::getMimeTypeIterator()
	{
		return callObjectMethod(
			"getMimeTypeIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint DrmSupportInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DrmSupportInfo::setDescription(JString arg0)
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::drm

