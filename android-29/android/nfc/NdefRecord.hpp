#pragma once

#ifndef ANDROID_NFC_NDEFRECORD
#define ANDROID_NFC_NDEFRECORD

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::nfc
{
	class NdefRecord : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jbyteArray RTD_ALTERNATIVE_CARRIER();
		static jbyteArray RTD_HANDOVER_CARRIER();
		static jbyteArray RTD_HANDOVER_REQUEST();
		static jbyteArray RTD_HANDOVER_SELECT();
		static jbyteArray RTD_SMART_POSTER();
		static jbyteArray RTD_TEXT();
		static jbyteArray RTD_URI();
		static jshort TNF_ABSOLUTE_URI();
		static jshort TNF_EMPTY();
		static jshort TNF_EXTERNAL_TYPE();
		static jshort TNF_MIME_MEDIA();
		static jshort TNF_UNCHANGED();
		static jshort TNF_UNKNOWN();
		static jshort TNF_WELL_KNOWN();
		
		// Constructors
		void __constructor(jshort arg0, jbyteArray arg1, jbyteArray arg2, jbyteArray arg3);
		void __constructor(jbyteArray arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jbyteArray getId();
		jbyteArray toByteArray();
		jbyteArray getType();
		QAndroidJniObject toUri();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject createApplicationRecord(jstring arg0);
		static QAndroidJniObject createUri(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject createUri(jstring arg0);
		static QAndroidJniObject createMime(jstring arg0, jbyteArray arg1);
		static QAndroidJniObject createExternal(jstring arg0, jstring arg1, jbyteArray arg2);
		static QAndroidJniObject createTextRecord(jstring arg0, jstring arg1);
		jshort getTnf();
		jbyteArray getPayload();
		jstring toMimeType();
	};
} // namespace __jni_impl::android::nfc

#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::nfc
{
	// Fields
	QAndroidJniObject NdefRecord::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefRecord",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jbyteArray NdefRecord::RTD_ALTERNATIVE_CARRIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_ALTERNATIVE_CARRIER",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_HANDOVER_CARRIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_CARRIER",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_HANDOVER_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_REQUEST",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_HANDOVER_SELECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_HANDOVER_SELECT",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_SMART_POSTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_SMART_POSTER",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_TEXT",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::RTD_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefRecord",
			"RTD_URI",
			"[B"
		).object<jbyteArray>();
	}
	jshort NdefRecord::TNF_ABSOLUTE_URI()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_ABSOLUTE_URI"
		);
	}
	jshort NdefRecord::TNF_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_EMPTY"
		);
	}
	jshort NdefRecord::TNF_EXTERNAL_TYPE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_EXTERNAL_TYPE"
		);
	}
	jshort NdefRecord::TNF_MIME_MEDIA()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_MIME_MEDIA"
		);
	}
	jshort NdefRecord::TNF_UNCHANGED()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_UNCHANGED"
		);
	}
	jshort NdefRecord::TNF_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_UNKNOWN"
		);
	}
	jshort NdefRecord::TNF_WELL_KNOWN()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.nfc.NdefRecord",
			"TNF_WELL_KNOWN"
		);
	}
	
	// Constructors
	void NdefRecord::__constructor(jshort arg0, jbyteArray arg1, jbyteArray arg2, jbyteArray arg3)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefRecord",
			"(S[B[B[B)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void NdefRecord::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefRecord",
			"([B)V",
			arg0);
	}
	
	// Methods
	jboolean NdefRecord::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NdefRecord::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NdefRecord::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray NdefRecord::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray NdefRecord::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject NdefRecord::toUri()
	{
		return __thiz.callObjectMethod(
			"toUri",
			"()Landroid/net/Uri;"
		);
	}
	jint NdefRecord::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NdefRecord::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject NdefRecord::createApplicationRecord(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createApplicationRecord",
			"(Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0
		);
	}
	QAndroidJniObject NdefRecord::createUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createUri",
			"(Landroid/net/Uri;)Landroid/nfc/NdefRecord;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NdefRecord::createUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createUri",
			"(Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0
		);
	}
	QAndroidJniObject NdefRecord::createMime(jstring arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createMime",
			"(Ljava/lang/String;[B)Landroid/nfc/NdefRecord;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject NdefRecord::createExternal(jstring arg0, jstring arg1, jbyteArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createExternal",
			"(Ljava/lang/String;Ljava/lang/String;[B)Landroid/nfc/NdefRecord;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject NdefRecord::createTextRecord(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.NdefRecord",
			"createTextRecord",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/nfc/NdefRecord;",
			arg0,
			arg1
		);
	}
	jshort NdefRecord::getTnf()
	{
		return __thiz.callMethod<jshort>(
			"getTnf",
			"()S"
		);
	}
	jbyteArray NdefRecord::getPayload()
	{
		return __thiz.callObjectMethod(
			"getPayload",
			"()[B"
		).object<jbyteArray>();
	}
	jstring NdefRecord::toMimeType()
	{
		return __thiz.callObjectMethod(
			"toMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class NdefRecord : public __jni_impl::android::nfc::NdefRecord
	{
	public:
		NdefRecord(QAndroidJniObject obj) { __thiz = obj; }
		NdefRecord(jshort arg0, jbyteArray arg1, jbyteArray arg2, jbyteArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		NdefRecord(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::nfc

#endif // ANDROID_NFC_NDEFRECORD

