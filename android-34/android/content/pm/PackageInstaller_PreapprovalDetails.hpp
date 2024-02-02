#pragma once

#include "../../graphics/Bitmap.def.hpp"
#include "../../icu/util/ULocale.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_PreapprovalDetails.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageInstaller_PreapprovalDetails::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$PreapprovalDetails",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PackageInstaller_PreapprovalDetails::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::Bitmap PackageInstaller_PreapprovalDetails::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline JString PackageInstaller_PreapprovalDetails::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::icu::util::ULocale PackageInstaller_PreapprovalDetails::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline JString PackageInstaller_PreapprovalDetails::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller_PreapprovalDetails::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PackageInstaller_PreapprovalDetails::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
