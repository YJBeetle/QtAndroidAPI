#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PageRange.def.hpp"

namespace android::print
{
	// Fields
	inline android::print::PageRange PageRange::ALL_PAGES()
	{
		return getStaticObjectField(
			"android.print.PageRange",
			"ALL_PAGES",
			"Landroid/print/PageRange;"
		);
	}
	inline JObject PageRange::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PageRange",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PageRange::PageRange(jint arg0, jint arg1)
		: JObject(
			"android.print.PageRange",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint PageRange::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PageRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PageRange::getEnd() const
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	inline jint PageRange::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	inline jint PageRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PageRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PageRange::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

