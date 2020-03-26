#pragma once

#ifndef ANDROID_NFC_NDEFMESSAGE
#define ANDROID_NFC_NDEFMESSAGE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class NdefRecord;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::nfc
{
	class NdefMessage : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jarray arg0);
		void __constructor(__jni_impl::android::nfc::NdefRecord arg0, jarray arg1);
		void __constructor(jbyteArray arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jbyteArray toByteArray();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jarray getRecords();
		jint getByteArrayLength();
	};
} // namespace __jni_impl::android::nfc

#include "NdefRecord.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::nfc
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
	
	// Constructors
	void NdefMessage::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"([Landroid/nfc/NdefRecord;)V",
			arg0);
	}
	void NdefMessage::__constructor(__jni_impl::android::nfc::NdefRecord arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"(Landroid/nfc/NdefRecord;[Landroid/nfc/NdefRecord;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void NdefMessage::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"([B)V",
			arg0);
	}
	
	// Methods
	jboolean NdefMessage::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NdefMessage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jint NdefMessage::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NdefMessage::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jarray NdefMessage::getRecords()
	{
		return __thiz.callObjectMethod(
			"getRecords",
			"()[Landroid/nfc/NdefRecord;"
		).object<jarray>();
	}
	jint NdefMessage::getByteArrayLength()
	{
		return __thiz.callMethod<jint>(
			"getByteArrayLength",
			"()I"
		);
	}
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class NdefMessage : public __jni_impl::android::nfc::NdefMessage
	{
	public:
		NdefMessage(QAndroidJniObject obj) { __thiz = obj; }
		NdefMessage(jarray arg0)
		{
			__constructor(
				arg0);
		}
		NdefMessage(__jni_impl::android::nfc::NdefRecord arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		NdefMessage(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::nfc

#endif // ANDROID_NFC_NDEFMESSAGE

