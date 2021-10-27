#pragma once

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
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
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
	jint AssociationRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AssociationRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AssociationRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AssociationRequest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

