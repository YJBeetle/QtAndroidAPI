#include "../os/Parcel.hpp"
#include "./RadioAccessSpecifier.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject RadioAccessSpecifier::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.RadioAccessSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	RadioAccessSpecifier::RadioAccessSpecifier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RadioAccessSpecifier::RadioAccessSpecifier(jint arg0, jintArray arg1, jintArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.RadioAccessSpecifier",
			"(I[I[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint RadioAccessSpecifier::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RadioAccessSpecifier::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jintArray RadioAccessSpecifier::getBands()
	{
		return __thiz.callObjectMethod(
			"getBands",
			"()[I"
		).object<jintArray>();
	}
	jintArray RadioAccessSpecifier::getChannels()
	{
		return __thiz.callObjectMethod(
			"getChannels",
			"()[I"
		).object<jintArray>();
	}
	jint RadioAccessSpecifier::getRadioAccessNetwork()
	{
		return __thiz.callMethod<jint>(
			"getRadioAccessNetwork",
			"()I"
		);
	}
	jint RadioAccessSpecifier::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void RadioAccessSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

