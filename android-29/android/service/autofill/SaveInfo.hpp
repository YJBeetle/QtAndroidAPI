#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_SAVEINFO
#define ANDROID_SERVICE_AUTOFILL_SAVEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class SaveInfo_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class SaveInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_DELAY_SAVE();
		static jint FLAG_DONT_SAVE_ON_FINISH();
		static jint FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE();
		static jint NEGATIVE_BUTTON_STYLE_CANCEL();
		static jint NEGATIVE_BUTTON_STYLE_REJECT();
		static jint SAVE_DATA_TYPE_ADDRESS();
		static jint SAVE_DATA_TYPE_CREDIT_CARD();
		static jint SAVE_DATA_TYPE_EMAIL_ADDRESS();
		static jint SAVE_DATA_TYPE_GENERIC();
		static jint SAVE_DATA_TYPE_PASSWORD();
		static jint SAVE_DATA_TYPE_USERNAME();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "SaveInfo_Builder.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
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
	
	// Constructors
	void SaveInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.SaveInfo",
			"(V)V");
	}
	
	// Methods
	jstring SaveInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SaveInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SaveInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class SaveInfo : public __jni_impl::android::service::autofill::SaveInfo
	{
	public:
		SaveInfo(QAndroidJniObject obj) { __thiz = obj; }
		SaveInfo()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_SAVEINFO

