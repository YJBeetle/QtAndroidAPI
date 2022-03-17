#pragma once

#include "../../os/Parcel.def.hpp"
#include "./ChangedPackages.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject ChangedPackages::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ChangedPackages",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ChangedPackages::ChangedPackages(jint arg0, JObject arg1)
		: JObject(
			"android.content.pm.ChangedPackages",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint ChangedPackages::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject ChangedPackages::getPackageNames() const
	{
		return callObjectMethod(
			"getPackageNames",
			"()Ljava/util/List;"
		);
	}
	inline jint ChangedPackages::getSequenceNumber() const
	{
		return callMethod<jint>(
			"getSequenceNumber",
			"()I"
		);
	}
	inline void ChangedPackages::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

