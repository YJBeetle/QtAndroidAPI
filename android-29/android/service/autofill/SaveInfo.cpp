#include "../../os/Parcel.hpp"
#include "./SaveInfo_Builder.hpp"
#include "./SaveInfo.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject SaveInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.SaveInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SaveInfo::FLAG_DELAY_SAVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_DELAY_SAVE"
		);
	}
	jint SaveInfo::FLAG_DONT_SAVE_ON_FINISH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_DONT_SAVE_ON_FINISH"
		);
	}
	jint SaveInfo::FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE"
		);
	}
	jint SaveInfo::NEGATIVE_BUTTON_STYLE_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"NEGATIVE_BUTTON_STYLE_CANCEL"
		);
	}
	jint SaveInfo::NEGATIVE_BUTTON_STYLE_REJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"NEGATIVE_BUTTON_STYLE_REJECT"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_ADDRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_ADDRESS"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_CREDIT_CARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_CREDIT_CARD"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_EMAIL_ADDRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_EMAIL_ADDRESS"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_GENERIC"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_PASSWORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_PASSWORD"
		);
	}
	jint SaveInfo::SAVE_DATA_TYPE_USERNAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.SaveInfo",
			"SAVE_DATA_TYPE_USERNAME"
		);
	}
	
	SaveInfo::SaveInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SaveInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring SaveInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SaveInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

