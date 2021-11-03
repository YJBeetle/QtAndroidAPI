#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./Tag.hpp"

namespace android::nfc
{
	// Fields
	JObject Tag::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.Tag",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Tag::Tag(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Tag::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JByteArray Tag::getId() const
	{
		return callObjectMethod(
			"getId",
			"()[B"
		);
	}
	JArray Tag::getTechList() const
	{
		return callObjectMethod(
			"getTechList",
			"()[Ljava/lang/String;"
		);
	}
	JString Tag::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Tag::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

