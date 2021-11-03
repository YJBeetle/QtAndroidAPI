#include "../os/Parcel.hpp"
#include "./RadioAccessSpecifier.hpp"

namespace android::telephony
{
	// Fields
	JObject RadioAccessSpecifier::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.RadioAccessSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	RadioAccessSpecifier::RadioAccessSpecifier(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RadioAccessSpecifier::RadioAccessSpecifier(jint arg0, jintArray arg1, jintArray arg2)
		: JObject(
			"android.telephony.RadioAccessSpecifier",
			"(I[I[I)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint RadioAccessSpecifier::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RadioAccessSpecifier::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jintArray RadioAccessSpecifier::getBands()
	{
		return callObjectMethod(
			"getBands",
			"()[I"
		).object<jintArray>();
	}
	jintArray RadioAccessSpecifier::getChannels()
	{
		return callObjectMethod(
			"getChannels",
			"()[I"
		).object<jintArray>();
	}
	jint RadioAccessSpecifier::getRadioAccessNetwork()
	{
		return callMethod<jint>(
			"getRadioAccessNetwork",
			"()I"
		);
	}
	jint RadioAccessSpecifier::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void RadioAccessSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

