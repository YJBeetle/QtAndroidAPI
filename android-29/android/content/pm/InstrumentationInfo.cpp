#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./InstrumentationInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject InstrumentationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.InstrumentationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString InstrumentationInfo::dataDir()
	{
		return getObjectField(
			"dataDir",
			"Ljava/lang/String;"
		);
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
	JString InstrumentationInfo::publicSourceDir()
	{
		return getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;"
		);
	}
	JString InstrumentationInfo::sourceDir()
	{
		return getObjectField(
			"sourceDir",
			"Ljava/lang/String;"
		);
	}
	JArray InstrumentationInfo::splitNames()
	{
		return getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		);
	}
	JArray InstrumentationInfo::splitPublicSourceDirs()
	{
		return getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;"
		);
	}
	JArray InstrumentationInfo::splitSourceDirs()
	{
		return getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;"
		);
	}
	JString InstrumentationInfo::targetPackage()
	{
		return getObjectField(
			"targetPackage",
			"Ljava/lang/String;"
		);
	}
	JString InstrumentationInfo::targetProcesses()
	{
		return getObjectField(
			"targetProcesses",
			"Ljava/lang/String;"
		);
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
	JString InstrumentationInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

