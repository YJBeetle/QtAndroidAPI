#pragma once

#ifndef ANDROID_COMPANION_ASSOCIATIONREQUEST
#define ANDROID_COMPANION_ASSOCIATIONREQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::companion
{
	class AssociationRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::companion

#include "../os/Parcel.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	QAndroidJniObject AssociationRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.companion.AssociationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AssociationRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.AssociationRequest",
			"(V)V");
	}
	
	// Methods
	jboolean AssociationRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AssociationRequest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AssociationRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint AssociationRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AssociationRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class AssociationRequest : public __jni_impl::android::companion::AssociationRequest
	{
	public:
		AssociationRequest(QAndroidJniObject obj) { __thiz = obj; }
		AssociationRequest()
		{
			__constructor();
		}
	};
} // namespace android::companion

#endif // ANDROID_COMPANION_ASSOCIATIONREQUEST

