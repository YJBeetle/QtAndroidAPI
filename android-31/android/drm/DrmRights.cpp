#include "./ProcessedData.hpp"
#include "../../java/io/File.hpp"
#include "./DrmRights.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmRights::DrmRights(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmRights::DrmRights(android::drm::ProcessedData arg0, jstring arg1)
		: __JniBaseClass(
			"android.drm.DrmRights",
			"(Landroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	DrmRights::DrmRights(java::io::File arg0, jstring arg1)
		: __JniBaseClass(
			"android.drm.DrmRights",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	DrmRights::DrmRights(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	DrmRights::DrmRights(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	DrmRights::DrmRights(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		: __JniBaseClass(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jstring DrmRights::getAccountId()
	{
		return callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray DrmRights::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jstring DrmRights::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmRights::getSubscriptionId()
	{
		return callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::drm

