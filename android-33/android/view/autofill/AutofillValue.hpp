#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AutofillValue.def.hpp"

namespace android::view::autofill
{
	// Fields
	inline JObject AutofillValue::CREATOR()
	{
		return getStaticObjectField(
			"android.view.autofill.AutofillValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::autofill::AutofillValue AutofillValue::forDate(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forDate",
			"(J)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	inline android::view::autofill::AutofillValue AutofillValue::forList(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forList",
			"(I)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	inline android::view::autofill::AutofillValue AutofillValue::forText(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/autofill/AutofillValue;",
			arg0.object<jstring>()
		);
	}
	inline android::view::autofill::AutofillValue AutofillValue::forToggle(jboolean arg0)
	{
		return callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forToggle",
			"(Z)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	inline jint AutofillValue::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AutofillValue::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong AutofillValue::getDateValue() const
	{
		return callMethod<jlong>(
			"getDateValue",
			"()J"
		);
	}
	inline jint AutofillValue::getListValue() const
	{
		return callMethod<jint>(
			"getListValue",
			"()I"
		);
	}
	inline JString AutofillValue::getTextValue() const
	{
		return callObjectMethod(
			"getTextValue",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean AutofillValue::getToggleValue() const
	{
		return callMethod<jboolean>(
			"getToggleValue",
			"()Z"
		);
	}
	inline jint AutofillValue::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AutofillValue::isDate() const
	{
		return callMethod<jboolean>(
			"isDate",
			"()Z"
		);
	}
	inline jboolean AutofillValue::isList() const
	{
		return callMethod<jboolean>(
			"isList",
			"()Z"
		);
	}
	inline jboolean AutofillValue::isText() const
	{
		return callMethod<jboolean>(
			"isText",
			"()Z"
		);
	}
	inline jboolean AutofillValue::isToggle() const
	{
		return callMethod<jboolean>(
			"isToggle",
			"()Z"
		);
	}
	inline JString AutofillValue::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AutofillValue::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
