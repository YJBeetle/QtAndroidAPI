#pragma once

#include "../os/Parcel.def.hpp"
#include "./PrintAttributes_Margins.def.hpp"
#include "./PrintAttributes_MediaSize.def.hpp"
#include "./PrintAttributes_Resolution.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintAttributes.def.hpp"

namespace android::print
{
	// Fields
	inline jint PrintAttributes::COLOR_MODE_COLOR()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_COLOR"
		);
	}
	inline jint PrintAttributes::COLOR_MODE_MONOCHROME()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_MONOCHROME"
		);
	}
	inline JObject PrintAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PrintAttributes::DUPLEX_MODE_LONG_EDGE()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_LONG_EDGE"
		);
	}
	inline jint PrintAttributes::DUPLEX_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_NONE"
		);
	}
	inline jint PrintAttributes::DUPLEX_MODE_SHORT_EDGE()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_SHORT_EDGE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PrintAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PrintAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PrintAttributes::getColorMode() const
	{
		return callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	inline jint PrintAttributes::getDuplexMode() const
	{
		return callMethod<jint>(
			"getDuplexMode",
			"()I"
		);
	}
	inline android::print::PrintAttributes_MediaSize PrintAttributes::getMediaSize() const
	{
		return callObjectMethod(
			"getMediaSize",
			"()Landroid/print/PrintAttributes$MediaSize;"
		);
	}
	inline android::print::PrintAttributes_Margins PrintAttributes::getMinMargins() const
	{
		return callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	inline android::print::PrintAttributes_Resolution PrintAttributes::getResolution() const
	{
		return callObjectMethod(
			"getResolution",
			"()Landroid/print/PrintAttributes$Resolution;"
		);
	}
	inline jint PrintAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PrintAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PrintAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

