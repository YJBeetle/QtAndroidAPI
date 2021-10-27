#include "../os/Parcel.hpp"
#include "./Tag.hpp"

namespace android::nfc
{
	// Fields
	QAndroidJniObject Tag::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.Tag",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Tag::Tag(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Tag::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jbyteArray Tag::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()[B"
		).object<jbyteArray>();
	}
	jarray Tag::getTechList()
	{
		return __thiz.callObjectMethod(
			"getTechList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Tag::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Tag::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::nfc

