#include "../../../JByteArray.hpp"
#include "../../../JCharArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	Signature::Signature(JByteArray arg0)
		: JObject(
			"android.content.pm.Signature",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	Signature::Signature(JString arg0)
		: JObject(
			"android.content.pm.Signature",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint Signature::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Signature::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Signature::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JByteArray Signature::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	JCharArray Signature::toChars()
	{
		return callObjectMethod(
			"toChars",
			"()[C"
		);
	}
	JCharArray Signature::toChars(JCharArray arg0, JIntArray arg1)
	{
		return callObjectMethod(
			"toChars",
			"([C[I)[C",
			arg0.object<jcharArray>(),
			arg1.object<jintArray>()
		);
	}
	JString Signature::toCharsString()
	{
		return callObjectMethod(
			"toCharsString",
			"()Ljava/lang/String;"
		);
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

