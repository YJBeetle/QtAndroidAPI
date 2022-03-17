#pragma once

#include "../os/Parcel.def.hpp"
#include "./PrintAttributes.def.hpp"
#include "./PrintAttributes_Margins.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrinterCapabilitiesInfo.def.hpp"

namespace android::print
{
	// Fields
	inline JObject PrinterCapabilitiesInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrinterCapabilitiesInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PrinterCapabilitiesInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PrinterCapabilitiesInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PrinterCapabilitiesInfo::getColorModes() const
	{
		return callMethod<jint>(
			"getColorModes",
			"()I"
		);
	}
	inline android::print::PrintAttributes PrinterCapabilitiesInfo::getDefaults() const
	{
		return callObjectMethod(
			"getDefaults",
			"()Landroid/print/PrintAttributes;"
		);
	}
	inline jint PrinterCapabilitiesInfo::getDuplexModes() const
	{
		return callMethod<jint>(
			"getDuplexModes",
			"()I"
		);
	}
	inline JObject PrinterCapabilitiesInfo::getMediaSizes() const
	{
		return callObjectMethod(
			"getMediaSizes",
			"()Ljava/util/List;"
		);
	}
	inline android::print::PrintAttributes_Margins PrinterCapabilitiesInfo::getMinMargins() const
	{
		return callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	inline JObject PrinterCapabilitiesInfo::getResolutions() const
	{
		return callObjectMethod(
			"getResolutions",
			"()Ljava/util/List;"
		);
	}
	inline jint PrinterCapabilitiesInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PrinterCapabilitiesInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PrinterCapabilitiesInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

