#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SystemUpdatePolicy_ValidationFailedException.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject SystemUpdatePolicy_ValidationFailedException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE"
		);
	}
	inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG"
		);
	}
	inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_DUPLICATE_OR_OVERLAP()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_DUPLICATE_OR_OVERLAP"
		);
	}
	inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE"
		);
	}
	inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_NEW_FREEZE_PERIOD_TOO_LONG()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_NEW_FREEZE_PERIOD_TOO_LONG"
		);
	}
	inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SystemUpdatePolicy_ValidationFailedException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SystemUpdatePolicy_ValidationFailedException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline void SystemUpdatePolicy_ValidationFailedException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/lang/IllegalArgumentException.hpp"

