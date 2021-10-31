#include "./DrmSupportInfo.hpp"

namespace android::drm
{
	// Fields
	
	DrmSupportInfo::DrmSupportInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmSupportInfo::DrmSupportInfo()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmSupportInfo",
			"()V"
		);
	}
	
	// Methods
	void DrmSupportInfo::addFileSuffix(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addFileSuffix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DrmSupportInfo::addMimeType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addMimeType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean DrmSupportInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring DrmSupportInfo::getDescriprition()
	{
		return __thiz.callObjectMethod(
			"getDescriprition",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmSupportInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DrmSupportInfo::getFileSuffixIterator()
	{
		return __thiz.callObjectMethod(
			"getFileSuffixIterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject DrmSupportInfo::getMimeTypeIterator()
	{
		return __thiz.callObjectMethod(
			"getMimeTypeIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint DrmSupportInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DrmSupportInfo::setDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::drm

