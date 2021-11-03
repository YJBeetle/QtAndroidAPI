#include "../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	Tag::Tag(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Tag::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jbyteArray Tag::getId()
	{
		return callObjectMethod(
			"getId",
			"()[B"
		).object<jbyteArray>();
	}
	jarray Tag::getTechList()
	{
		return callObjectMethod(
			"getTechList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Tag::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Tag::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

