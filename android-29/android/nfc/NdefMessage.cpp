#include "./NdefRecord.hpp"
#include "../os/Parcel.hpp"
#include "./NdefMessage.hpp"

namespace android::nfc
{
	// Fields
	QAndroidJniObject NdefMessage::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefMessage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	NdefMessage::NdefMessage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NdefMessage::NdefMessage(jbyteArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"([B)V",
			arg0
		);
	}
	NdefMessage::NdefMessage(jarray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"([Landroid/nfc/NdefRecord;)V",
			arg0
		);
	}
	NdefMessage::NdefMessage(android::nfc::NdefRecord &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"(Landroid/nfc/NdefRecord;[Landroid/nfc/NdefRecord;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint NdefMessage::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NdefMessage::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint NdefMessage::getByteArrayLength()
	{
		return __thiz.callMethod<jint>(
			"getByteArrayLength",
			"()I"
		);
	}
	jarray NdefMessage::getRecords()
	{
		return __thiz.callObjectMethod(
			"getRecords",
			"()[Landroid/nfc/NdefRecord;"
		).object<jarray>();
	}
	jint NdefMessage::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray NdefMessage::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring NdefMessage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NdefMessage::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::nfc

