#pragma once

#include "../../os/Parcel.def.hpp"
#include "../View.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AutofillId.def.hpp"

namespace android::view::autofill
{
	// Fields
	inline JObject AutofillId::CREATOR()
	{
		return getStaticObjectField(
			"android.view.autofill.AutofillId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::autofill::AutofillId AutofillId::create(android::view::View arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillId",
			"create",
			"(Landroid/view/View;I)Landroid/view/autofill/AutofillId;",
			arg0.object(),
			arg1
		);
	}
	inline jint AutofillId::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AutofillId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AutofillId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AutofillId::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AutofillId::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::autofill;
#endif
