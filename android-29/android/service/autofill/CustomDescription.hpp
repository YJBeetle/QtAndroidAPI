#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION
#define ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class CustomDescription_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class CustomDescription : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "CustomDescription_Builder.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject CustomDescription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.CustomDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CustomDescription::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.CustomDescription",
			"(V)V");
	}
	
	// Methods
	jstring CustomDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CustomDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CustomDescription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class CustomDescription : public __jni_impl::android::service::autofill::CustomDescription
	{
	public:
		CustomDescription(QAndroidJniObject obj) { __thiz = obj; }
		CustomDescription()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION

