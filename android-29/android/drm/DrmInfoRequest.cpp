#include "./DrmInfoRequest.hpp"

namespace android::drm
{
	// Fields
	jstring DrmInfoRequest::ACCOUNT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.drm.DrmInfoRequest",
			"ACCOUNT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmInfoRequest::SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.drm.DrmInfoRequest",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DrmInfoRequest::TYPE_REGISTRATION_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_REGISTRATION_INFO"
		);
	}
	jint DrmInfoRequest::TYPE_RIGHTS_ACQUISITION_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_RIGHTS_ACQUISITION_INFO"
		);
	}
	jint DrmInfoRequest::TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO"
		);
	}
	jint DrmInfoRequest::TYPE_UNREGISTRATION_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_UNREGISTRATION_INFO"
		);
	}
	
	DrmInfoRequest::DrmInfoRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmInfoRequest::DrmInfoRequest(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmInfoRequest",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jobject DrmInfoRequest::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint DrmInfoRequest::getInfoType()
	{
		return __thiz.callMethod<jint>(
			"getInfoType",
			"()I"
		);
	}
	jstring DrmInfoRequest::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DrmInfoRequest::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject DrmInfoRequest::keyIterator()
	{
		return __thiz.callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void DrmInfoRequest::put(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace android::drm

