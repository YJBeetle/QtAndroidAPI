#include "./DrmInfoRequest.hpp"

namespace android::drm
{
	// Fields
	jstring DrmInfoRequest::ACCOUNT_ID()
	{
		return getStaticObjectField(
			"android.drm.DrmInfoRequest",
			"ACCOUNT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmInfoRequest::SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.drm.DrmInfoRequest",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmInfoRequest::TYPE_REGISTRATION_INFO()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_REGISTRATION_INFO"
		);
	}
	jint DrmInfoRequest::TYPE_RIGHTS_ACQUISITION_INFO()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_RIGHTS_ACQUISITION_INFO"
		);
	}
	jint DrmInfoRequest::TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO"
		);
	}
	jint DrmInfoRequest::TYPE_UNREGISTRATION_INFO()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_UNREGISTRATION_INFO"
		);
	}
	
	// QJniObject forward
	DrmInfoRequest::DrmInfoRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmInfoRequest::DrmInfoRequest(jint arg0, jstring arg1)
		: JObject(
			"android.drm.DrmInfoRequest",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jobject DrmInfoRequest::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint DrmInfoRequest::getInfoType()
	{
		return callMethod<jint>(
			"getInfoType",
			"()I"
		);
	}
	jstring DrmInfoRequest::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject DrmInfoRequest::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject DrmInfoRequest::keyIterator()
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void DrmInfoRequest::put(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace android::drm

