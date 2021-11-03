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
	
	// QJniObject forward
	Signature::Signature(QJniObject obj) : JObject(obj) {}
	
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
	jint Signature::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Signature::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Signature::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JByteArray Signature::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	JCharArray Signature::toChars() const
	{
		return callObjectMethod(
			"toChars",
			"()[C"
		);
	}
	JCharArray Signature::toChars(JCharArray arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"toChars",
			"([C[I)[C",
			arg0.object<jcharArray>(),
			arg1.object<jintArray>()
		);
	}
	JString Signature::toCharsString() const
	{
		return callObjectMethod(
			"toCharsString",
			"()Ljava/lang/String;"
		);
	}
	void Signature::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

