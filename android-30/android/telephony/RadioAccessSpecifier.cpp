#include "../../JIntArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
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
	RadioAccessSpecifier::RadioAccessSpecifier(jint arg0, JIntArray arg1, JIntArray arg2)
		: JObject(
			"android.telephony.RadioAccessSpecifier",
			"(I[I[I)V",
			arg0,
			arg1.object<jintArray>(),
			arg2.object<jintArray>()
		) {}
	
	// Methods
	jint RadioAccessSpecifier::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RadioAccessSpecifier::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JIntArray RadioAccessSpecifier::getBands()
	{
		return callObjectMethod(
			"getBands",
			"()[I"
		);
	}
	JIntArray RadioAccessSpecifier::getChannels()
	{
		return callObjectMethod(
			"getChannels",
			"()[I"
		);
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

