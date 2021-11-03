#include "../../os/Parcel.hpp"
#include "./Signature.hpp"

namespace android::content::pm
{
	// Fields
	JObject Signature::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.Signature",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Signature::Signature(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Signature::Signature(jbyteArray arg0)
		: JObject(
			"android.content.pm.Signature",
			"([B)V",
			arg0
		) {}
	Signature::Signature(jstring arg0)
		: JObject(
			"android.content.pm.Signature",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint Signature::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Signature::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Signature::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray Signature::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jcharArray Signature::toChars()
	{
		return callObjectMethod(
			"toChars",
			"()[C"
		).object<jcharArray>();
	}
	jcharArray Signature::toChars(jcharArray arg0, jintArray arg1)
	{
		return callObjectMethod(
			"toChars",
			"([C[I)[C",
			arg0,
			arg1
		).object<jcharArray>();
	}
	jstring Signature::toCharsString()
	{
		return callObjectMethod(
			"toCharsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Signature::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

