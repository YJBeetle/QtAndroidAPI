#include "../../JByteArray.hpp"
#include "./ProcessedData.hpp"
#include "../../java/io/File.hpp"
#include "../../JString.hpp"
#include "./DrmRights.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmRights::DrmRights(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmRights::DrmRights(android::drm::ProcessedData arg0, JString arg1)
		: JObject(
			"android.drm.DrmRights",
			"(Landroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	DrmRights::DrmRights(java::io::File arg0, JString arg1)
		: JObject(
			"android.drm.DrmRights",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	DrmRights::DrmRights(JString arg0, JString arg1)
		: JObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	DrmRights::DrmRights(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	DrmRights::DrmRights(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	JString DrmRights::getAccountId()
	{
		return callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		);
	}
	JByteArray DrmRights::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	JString DrmRights::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	JString DrmRights::getSubscriptionId()
	{
		return callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::drm

