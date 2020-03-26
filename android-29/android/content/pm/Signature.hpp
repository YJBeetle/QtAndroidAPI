#pragma once

#ifndef ANDROID_CONTENT_PM_SIGNATURE
#define ANDROID_CONTENT_PM_SIGNATURE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class Signature : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jcharArray toChars(jcharArray arg0, jintArray arg1);
		jcharArray toChars();
		jbyteArray toByteArray();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring toCharsString();
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject Signature::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.Signature",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Signature::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.Signature",
			"([B)V",
			arg0);
	}
	void Signature::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.Signature",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jboolean Signature::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Signature::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jcharArray Signature::toChars(jcharArray arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"toChars",
			"([C[I)[C",
			arg0,
			arg1
		).object<jcharArray>();
	}
	jcharArray Signature::toChars()
	{
		return __thiz.callObjectMethod(
			"toChars",
			"()[C"
		).object<jcharArray>();
	}
	jbyteArray Signature::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jint Signature::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Signature::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring Signature::toCharsString()
	{
		return __thiz.callObjectMethod(
			"toCharsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class Signature : public __jni_impl::android::content::pm::Signature
	{
	public:
		Signature(QAndroidJniObject obj) { __thiz = obj; }
		Signature(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		Signature(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_SIGNATURE

