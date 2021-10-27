#pragma once

#ifndef ANDROID_VIEW_AUTOFILL_AUTOFILLID
#define ANDROID_VIEW_AUTOFILL_AUTOFILLID

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::autofill
{
	class AutofillId : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::autofill

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::autofill
{
	// Fields
	QAndroidJniObject AutofillId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AutofillId::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.autofill.AutofillId",
			"(V)V");
	}
	
	// Methods
	jint AutofillId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AutofillId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AutofillId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AutofillId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AutofillId::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::autofill

namespace android::view::autofill
{
	class AutofillId : public __jni_impl::android::view::autofill::AutofillId
	{
	public:
		AutofillId(QAndroidJniObject obj) { __thiz = obj; }
		AutofillId()
		{
			__constructor();
		}
	};
} // namespace android::view::autofill

#endif // ANDROID_VIEW_AUTOFILL_AUTOFILLID

