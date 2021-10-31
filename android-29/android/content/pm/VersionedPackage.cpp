#include "../../os/Parcel.hpp"
#include "./VersionedPackage.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject VersionedPackage::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.VersionedPackage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VersionedPackage::VersionedPackage(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VersionedPackage::VersionedPackage(jstring arg0, jint arg1)
		: __JniBaseClass(
			"android.content.pm.VersionedPackage",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	VersionedPackage::VersionedPackage(jstring arg0, jlong arg1)
		: __JniBaseClass(
			"android.content.pm.VersionedPackage",
			"(Ljava/lang/String;J)V",
			arg0,
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
	jlong VersionedPackage::getLongVersionCode()
	{
		return callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	jstring VersionedPackage::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint VersionedPackage::getVersionCode()
	{
		return callMethod<jint>(
			"getVersionCode",
			"()I"
		);
	}
	jstring VersionedPackage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

