#include "../../os/Parcel.hpp"
#include "./InstrumentationInfo.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass InstrumentationInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.InstrumentationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring InstrumentationInfo::dataDir()
	{
		return getObjectField(
			"dataDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean InstrumentationInfo::functionalTest()
	{
		return getField<jboolean>(
			"functionalTest"
		);
	}
	jboolean InstrumentationInfo::handleProfiling()
	{
		return getField<jboolean>(
			"handleProfiling"
		);
	}
	jstring InstrumentationInfo::publicSourceDir()
	{
		return getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InstrumentationInfo::sourceDir()
	{
		return getObjectField(
			"sourceDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray InstrumentationInfo::splitNames()
	{
		return getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray InstrumentationInfo::splitPublicSourceDirs()
	{
		return getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray InstrumentationInfo::splitSourceDirs()
	{
		return getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring InstrumentationInfo::targetPackage()
	{
		return getObjectField(
			"targetPackage",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InstrumentationInfo::targetProcesses()
	{
		return getObjectField(
			"targetProcesses",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	InstrumentationInfo::InstrumentationInfo(QAndroidJniObject obj) : android::content::pm::PackageItemInfo(obj) {}
	
	// Constructors
	InstrumentationInfo::InstrumentationInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.InstrumentationInfo",
			"()V"
		) {}
	InstrumentationInfo::InstrumentationInfo(android::content::pm::InstrumentationInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.InstrumentationInfo",
			"(Landroid/content/pm/InstrumentationInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint InstrumentationInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring InstrumentationInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InstrumentationInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

