#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_VISIBILITYSETTERACTION
#define ANDROID_SERVICE_AUTOFILL_VISIBILITYSETTERACTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::service::autofill
{
	class VisibilitySetterAction_Builder;
}

namespace __jni_impl::android::service::autofill
{
	class VisibilitySetterAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "VisibilitySetterAction_Builder.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject VisibilitySetterAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.VisibilitySetterAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void VisibilitySetterAction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.VisibilitySetterAction",
			"(V)V");
	}
	
	// Methods
	jint VisibilitySetterAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring VisibilitySetterAction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VisibilitySetterAction::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class VisibilitySetterAction : public __jni_impl::android::service::autofill::VisibilitySetterAction
	{
	public:
		VisibilitySetterAction(QAndroidJniObject obj) { __thiz = obj; }
		VisibilitySetterAction()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_VISIBILITYSETTERACTION

