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
	void DrmSupportInfo::addFileSuffix(jstring arg0)
	{
		callMethod<void>(
			"addFileSuffix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DrmSupportInfo::addMimeType(jstring arg0)
	{
		callMethod<void>(
			"addMimeType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean DrmSupportInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring DrmSupportInfo::getDescriprition()
	{
		return callObjectMethod(
			"getDescriprition",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmSupportInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	void DrmSupportInfo::setDescription(jstring arg0)
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::drm

