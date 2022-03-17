#pragma once

#include "../os/Parcel.def.hpp"
#include "./PrinterCapabilitiesInfo.def.hpp"
#include "./PrinterId.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrinterInfo.def.hpp"

namespace android::print
{
	// Fields
	inline JObject PrinterInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrinterInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PrinterInfo::STATUS_BUSY()
	{
		return getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_BUSY"
		);
	}
	inline jint PrinterInfo::STATUS_IDLE()
	{
		return getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_IDLE"
		);
	}
	inline jint PrinterInfo::STATUS_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_UNAVAILABLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PrinterInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PrinterInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::print::PrinterCapabilitiesInfo PrinterInfo::getCapabilities() const
	{
		return callObjectMethod(
			"getCapabilities",
			"()Landroid/print/PrinterCapabilitiesInfo;"
		);
	}
	inline JString PrinterInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline android::print::PrinterId PrinterInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrinterId;"
		);
	}
	inline JString PrinterInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint PrinterInfo::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline jint PrinterInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PrinterInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PrinterInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

// Base class headers

