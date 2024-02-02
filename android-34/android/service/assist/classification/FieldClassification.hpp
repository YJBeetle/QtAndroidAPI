#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../view/autofill/AutofillId.def.hpp"
#include "../../../../JString.hpp"
#include "./FieldClassification.def.hpp"

namespace android::service::assist::classification
{
	// Fields
	inline JObject FieldClassification::CREATOR()
	{
		return getStaticObjectField(
			"android.service.assist.classification.FieldClassification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline FieldClassification::FieldClassification(android::view::autofill::AutofillId arg0, JObject arg1)
		: JObject(
			"android.service.assist.classification.FieldClassification",
			"(Landroid/view/autofill/AutofillId;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint FieldClassification::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::view::autofill::AutofillId FieldClassification::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	inline JObject FieldClassification::getHints() const
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/Set;"
		);
	}
	inline JString FieldClassification::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FieldClassification::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::assist::classification

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::assist::classification;
#endif
