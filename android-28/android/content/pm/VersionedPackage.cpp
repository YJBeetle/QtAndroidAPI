#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./VersionedPackage.hpp"

namespace android::content::pm
{
	// Fields
	JObject VersionedPackage::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.VersionedPackage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	VersionedPackage::VersionedPackage(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	VersionedPackage::VersionedPackage(JString arg0, jint arg1)
		: JObject(
			"android.content.pm.VersionedPackage",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	VersionedPackage::VersionedPackage(JString arg0, jlong arg1)
		: JObject(
			"android.content.pm.VersionedPackage",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	jint VersionedPackage::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong VersionedPackage::getLongVersionCode() const
	{
		return callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	JString VersionedPackage::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint VersionedPackage::getVersionCode() const
	{
		return callMethod<jint>(
			"getVersionCode",
			"()I"
		);
	}
	JString VersionedPackage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VersionedPackage::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

