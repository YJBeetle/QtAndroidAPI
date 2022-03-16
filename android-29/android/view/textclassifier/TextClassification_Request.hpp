#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/ZonedDateTime.def.hpp"
#include "./TextClassification_Request.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextClassification_Request::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassification$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextClassification_Request::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString TextClassification_Request::getCallingPackageName() const
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::LocaleList TextClassification_Request::getDefaultLocales() const
	{
		return callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jint TextClassification_Request::getEndIndex() const
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	inline android::os::Bundle TextClassification_Request::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline java::time::ZonedDateTime TextClassification_Request::getReferenceTime() const
	{
		return callObjectMethod(
			"getReferenceTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	inline jint TextClassification_Request::getStartIndex() const
	{
		return callMethod<jint>(
			"getStartIndex",
			"()I"
		);
	}
	inline JString TextClassification_Request::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void TextClassification_Request::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

