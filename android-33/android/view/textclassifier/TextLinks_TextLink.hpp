#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_TextLink.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextLinks_TextLink::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLinks$TextLink",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextLinks_TextLink::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat TextLinks_TextLink::getConfidenceScore(JString arg0) const
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	inline jint TextLinks_TextLink::getEnd() const
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	inline JString TextLinks_TextLink::getEntity(jint arg0) const
	{
		return callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint TextLinks_TextLink::getEntityCount() const
	{
		return callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	inline android::os::Bundle TextLinks_TextLink::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint TextLinks_TextLink::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	inline JString TextLinks_TextLink::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextLinks_TextLink::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
