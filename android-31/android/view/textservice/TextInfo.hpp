#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./TextInfo.def.hpp"

namespace android::view::textservice
{
	// Fields
	inline JObject TextInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.TextInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TextInfo::TextInfo(android::os::Parcel arg0)
		: JObject(
			"android.view.textservice.TextInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline TextInfo::TextInfo(JString arg0)
		: JObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline TextInfo::TextInfo(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	inline TextInfo::TextInfo(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.view.textservice.TextInfo",
			"(Ljava/lang/CharSequence;IIII)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline jint TextInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString TextInfo::getCharSequence() const
	{
		return callObjectMethod(
			"getCharSequence",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TextInfo::getCookie() const
	{
		return callMethod<jint>(
			"getCookie",
			"()I"
		);
	}
	inline jint TextInfo::getSequence() const
	{
		return callMethod<jint>(
			"getSequence",
			"()I"
		);
	}
	inline JString TextInfo::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	inline void TextInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

// Base class headers

