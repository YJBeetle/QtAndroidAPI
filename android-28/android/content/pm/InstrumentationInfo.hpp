#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./InstrumentationInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject InstrumentationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.InstrumentationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString InstrumentationInfo::dataDir()
	{
		return getObjectField(
			"dataDir",
			"Ljava/lang/String;"
		);
	}
	inline jboolean InstrumentationInfo::functionalTest()
	{
		return getField<jboolean>(
			"functionalTest"
		);
	}
	inline jboolean InstrumentationInfo::handleProfiling()
	{
		return getField<jboolean>(
			"handleProfiling"
		);
	}
	inline JString InstrumentationInfo::publicSourceDir()
	{
		return getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;"
		);
	}
	inline JString InstrumentationInfo::sourceDir()
	{
		return getObjectField(
			"sourceDir",
			"Ljava/lang/String;"
		);
	}
	inline JArray InstrumentationInfo::splitNames()
	{
		return getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		);
	}
	inline JArray InstrumentationInfo::splitPublicSourceDirs()
	{
		return getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;"
		);
	}
	inline JArray InstrumentationInfo::splitSourceDirs()
	{
		return getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;"
		);
	}
	inline JString InstrumentationInfo::targetPackage()
	{
		return getObjectField(
			"targetPackage",
			"Ljava/lang/String;"
		);
	}
	inline JString InstrumentationInfo::targetProcesses()
	{
		return getObjectField(
			"targetProcesses",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline InstrumentationInfo::InstrumentationInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.InstrumentationInfo",
			"()V"
		) {}
	inline InstrumentationInfo::InstrumentationInfo(android::content::pm::InstrumentationInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.InstrumentationInfo",
			"(Landroid/content/pm/InstrumentationInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint InstrumentationInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString InstrumentationInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InstrumentationInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers
#include "./PackageItemInfo.hpp"

