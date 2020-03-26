#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_CHARSEQUENCETRANSFORMATION
#define ANDROID_SERVICE_AUTOFILL_CHARSEQUENCETRANSFORMATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class CharSequenceTransformation_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class CharSequenceTransformation : public __JniBaseClass
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

#include "CharSequenceTransformation_Builder.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject CharSequenceTransformation::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.CharSequenceTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CharSequenceTransformation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.CharSequenceTransformation",
			"(V)V");
	}
	
	// Methods
	jstring CharSequenceTransformation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CharSequenceTransformation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CharSequenceTransformation::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class CharSequenceTransformation : public __jni_impl::android::service::autofill::CharSequenceTransformation
	{
	public:
		CharSequenceTransformation(QAndroidJniObject obj) { __thiz = obj; }
		CharSequenceTransformation()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_CHARSEQUENCETRANSFORMATION

