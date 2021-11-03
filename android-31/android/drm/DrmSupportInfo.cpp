#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DrmSupportInfo.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	DrmSupportInfo::DrmSupportInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmSupportInfo::DrmSupportInfo()
		: JObject(
			"android.drm.DrmSupportInfo",
			"()V"
		) {}
	
	// Methods
	void DrmSupportInfo::addFileSuffix(JString arg0) const
	{
		callMethod<void>(
			"addFileSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DrmSupportInfo::addMimeType(JString arg0) const
	{
		callMethod<void>(
			"addMimeType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean DrmSupportInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString DrmSupportInfo::getDescriprition() const
	{
		return callObjectMethod(
			"getDescriprition",
			"()Ljava/lang/String;"
		);
	}
	JString DrmSupportInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	JObject DrmSupportInfo::getFileSuffixIterator() const
	{
		return callObjectMethod(
			"getFileSuffixIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject DrmSupportInfo::getMimeTypeIterator() const
	{
		return callObjectMethod(
			"getMimeTypeIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint DrmSupportInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DrmSupportInfo::setDescription(JString arg0) const
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::drm

