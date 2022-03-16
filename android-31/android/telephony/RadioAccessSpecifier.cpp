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
	jint RadioAccessSpecifier::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RadioAccessSpecifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JIntArray RadioAccessSpecifier::getBands() const
	{
		return callObjectMethod(
			"getBands",
			"()[I"
		);
	}
	JIntArray RadioAccessSpecifier::getChannels() const
	{
		return callObjectMethod(
			"getChannels",
			"()[I"
		);
	}
	jint RadioAccessSpecifier::getRadioAccessNetwork() const
	{
		return callMethod<jint>(
			"getRadioAccessNetwork",
			"()I"
		);
	}
	jint RadioAccessSpecifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void RadioAccessSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

