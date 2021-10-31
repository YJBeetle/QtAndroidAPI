#include "./MmTelFeature_MmTelCapabilities.hpp"

namespace android::telephony::ims::feature
{
	// Fields
	jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_SMS"
		);
	}
	jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_UT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_UT"
		);
	}
	jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_VIDEO"
		);
	}
	jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_VOICE"
		);
	}
	
	// QJniObject forward
	MmTelFeature_MmTelCapabilities::MmTelFeature_MmTelCapabilities(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MmTelFeature_MmTelCapabilities::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MmTelFeature_MmTelCapabilities::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring MmTelFeature_MmTelCapabilities::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telephony::ims::feature

