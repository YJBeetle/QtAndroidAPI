#pragma once

#include "../../os/Parcel.def.hpp"
#include "./SaveInfo_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./SaveInfo.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject SaveInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.SaveInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SaveInfo::FLAG_DELAY_SAVE()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_DELAY_SAVE"
		);
	}
	inline jint SaveInfo::FLAG_DONT_SAVE_ON_FINISH()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_DONT_SAVE_ON_FINISH"
		);
	}
	inline jint SaveInfo::FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE"
		);
	}
	inline jint SaveInfo::NEGATIVE_BUTTON_STYLE_CANCEL()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"NEGATIVE_BUTTON_STYLE_CANCEL"
		);
	}
	inline jint SaveInfo::NEGATIVE_BUTTON_STYLE_REJECT()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"NEGATIVE_BUTTON_STYLE_REJECT"
		);
	}
	inline jint SaveInfo::SAVE_DATA_TYPE_ADDRESS()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_ADDRESS"
		);
	}
	inline jint SaveInfo::SAVE_DATA_TYPE_CREDIT_CARD()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_CREDIT_CARD"
		);
	}
	inline jint SaveInfo::SAVE_DATA_TYPE_EMAIL_ADDRESS()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_EMAIL_ADDRESS"
		);
	}
	inline jint SaveInfo::SAVE_DATA_TYPE_GENERIC()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_GENERIC"
		);
	}
	inline jint SaveInfo::SAVE_DATA_TYPE_PASSWORD()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_PASSWORD"
		);
	}
	inline jint SaveInfo::SAVE_DATA_TYPE_USERNAME()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_USERNAME"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SaveInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SaveInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SaveInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

// Base class headers

