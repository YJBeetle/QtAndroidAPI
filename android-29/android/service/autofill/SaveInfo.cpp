#include "../../os/Parcel.hpp"
#include "./SaveInfo_Builder.hpp"
#include "../../../JString.hpp"
#include "./SaveInfo.hpp"

namespace android::service::autofill
{
	// Fields
	JObject SaveInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.SaveInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SaveInfo::FLAG_DELAY_SAVE()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_DELAY_SAVE"
		);
	}
	jint SaveInfo::FLAG_DONT_SAVE_ON_FINISH()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_DONT_SAVE_ON_FINISH"
		);
	}
	jint SaveInfo::FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE"
		);
	}
	jint SaveInfo::NEGATIVE_BUTTON_STYLE_CANCEL()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"NEGATIVE_BUTTON_STYLE_CANCEL"
		);
	}
	jint SaveInfo::NEGATIVE_BUTTON_STYLE_REJECT()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"NEGATIVE_BUTTON_STYLE_REJECT"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_ADDRESS()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_ADDRESS"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_CREDIT_CARD()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_CREDIT_CARD"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_EMAIL_ADDRESS()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_EMAIL_ADDRESS"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_GENERIC()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_GENERIC"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_PASSWORD()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_PASSWORD"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_USERNAME()
	{
		return getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_USERNAME"
		);
	}
	
	// QAndroidJniObject forward
	SaveInfo::SaveInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SaveInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString SaveInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SaveInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

