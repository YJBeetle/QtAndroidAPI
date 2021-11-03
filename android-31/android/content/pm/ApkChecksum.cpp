#include "../../os/Parcel.hpp"
#include "../../../java/security/cert/Certificate.hpp"
#include "./ApkChecksum.hpp"

namespace android::content::pm
{
	// Fields
	JObject ApkChecksum::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ApkChecksum",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ApkChecksum::ApkChecksum(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ApkChecksum::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	java::security::cert::Certificate ApkChecksum::getInstallerCertificate()
	{
		return callObjectMethod(
			"getInstallerCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	jstring ApkChecksum::getInstallerPackageName()
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApkChecksum::getSplitName()
	{
		return callObjectMethod(
			"getSplitName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApkChecksum::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jbyteArray ApkChecksum::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		).object<jbyteArray>();
	}
	void ApkChecksum::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

