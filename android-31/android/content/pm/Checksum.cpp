#include "../../../JByteArray.hpp"
#include "../../os/Parcel.hpp"
#include "./Checksum.hpp"

namespace android::content::pm
{
	// Fields
	JObject Checksum::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.Checksum",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Checksum::TYPE_PARTIAL_MERKLE_ROOT_1M_SHA256()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_PARTIAL_MERKLE_ROOT_1M_SHA256"
		);
	}
	jint Checksum::TYPE_PARTIAL_MERKLE_ROOT_1M_SHA512()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_PARTIAL_MERKLE_ROOT_1M_SHA512"
		);
	}
	jint Checksum::TYPE_WHOLE_MD5()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_MD5"
		);
	}
	jint Checksum::TYPE_WHOLE_MERKLE_ROOT_4K_SHA256()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_MERKLE_ROOT_4K_SHA256"
		);
	}
	jint Checksum::TYPE_WHOLE_SHA1()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_SHA1"
		);
	}
	jint Checksum::TYPE_WHOLE_SHA256()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_SHA256"
		);
	}
	jint Checksum::TYPE_WHOLE_SHA512()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_SHA512"
		);
	}
	
	// QAndroidJniObject forward
	Checksum::Checksum(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Checksum::Checksum(jint arg0, JByteArray arg1)
		: JObject(
			"android.content.pm.Checksum",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	jint Checksum::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Checksum::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JByteArray Checksum::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		);
	}
	void Checksum::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

