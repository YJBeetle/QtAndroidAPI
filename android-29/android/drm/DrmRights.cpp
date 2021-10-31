#include "./ProcessedData.hpp"
#include "../../java/io/File.hpp"
#include "./DrmRights.hpp"

namespace android::drm
{
	// Fields
	
	DrmRights::DrmRights(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmRights::DrmRights(android::drm::ProcessedData arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Landroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	DrmRights::DrmRights(java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	DrmRights::DrmRights(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	DrmRights::DrmRights(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	DrmRights::DrmRights(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring DrmRights::getAccountId()
	{
		return __thiz.callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray DrmRights::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jstring DrmRights::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmRights::getSubscriptionId()
	{
		return __thiz.callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::drm

