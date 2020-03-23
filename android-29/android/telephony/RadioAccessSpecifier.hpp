#pragma once

#ifndef ANDROID_TELEPHONY_RADIOACCESSSPECIFIER
#define ANDROID_TELEPHONY_RADIOACCESSSPECIFIER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class RadioAccessSpecifier : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jint arg0, jintArray arg1, jintArray arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getChannels();
		jint getRadioAccessNetwork();
		QAndroidJniObject getBands();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject RadioAccessSpecifier::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.RadioAccessSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void RadioAccessSpecifier::__constructor(jint arg0, jintArray arg1, jintArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.RadioAccessSpecifier",
			"(I[I[I)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean RadioAccessSpecifier::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint RadioAccessSpecifier::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint RadioAccessSpecifier::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void RadioAccessSpecifier::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject RadioAccessSpecifier::getChannels()
	{
		return __thiz.callObjectMethod(
			"getChannels",
			"()[I");
	}
	jint RadioAccessSpecifier::getRadioAccessNetwork()
	{
		return __thiz.callMethod<jint>(
			"getRadioAccessNetwork",
			"()I");
	}
	QAndroidJniObject RadioAccessSpecifier::getBands()
	{
		return __thiz.callObjectMethod(
			"getBands",
			"()[I");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class RadioAccessSpecifier : public __jni_impl::android::telephony::RadioAccessSpecifier
	{
	public:
		RadioAccessSpecifier(QAndroidJniObject obj) { __thiz = obj; }
		RadioAccessSpecifier(jint arg0, jintArray arg1, jintArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_RADIOACCESSSPECIFIER

