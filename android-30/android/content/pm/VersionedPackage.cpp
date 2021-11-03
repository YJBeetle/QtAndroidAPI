#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
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
	
	// QAndroidJniObject forward
	VersionedPackage::VersionedPackage(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint VersionedPackage::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VersionedPackage::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong VersionedPackage::getLongVersionCode()
	{
		return callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	JString VersionedPackage::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint VersionedPackage::getVersionCode()
	{
		return callMethod<jint>(
			"getVersionCode",
			"()I"
		);
	}
	jint VersionedPackage::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString VersionedPackage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VersionedPackage::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

