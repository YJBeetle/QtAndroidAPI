#pragma once

#ifndef ANDROID_NFC_TECH_NFCBARCODE
#define ANDROID_NFC_TECH_NFCBARCODE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class NfcBarcode : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_KOVIO();
		static jint TYPE_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		void connect();
		void close();
		jint getType();
		QAndroidJniObject getTag();
		jbyteArray getBarcode();
		jboolean isConnected();
	};
} // namespace __jni_impl::android::nfc::tech

#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	jint NfcBarcode::TYPE_KOVIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.NfcBarcode",
			"TYPE_KOVIO"
		);
	}
	jint NfcBarcode::TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.NfcBarcode",
			"TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	void NfcBarcode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.NfcBarcode",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NfcBarcode::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcBarcode",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcBarcode;",
			arg0.__jniObject().object()
		);
	}
	void NfcBarcode::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	void NfcBarcode::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint NfcBarcode::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	QAndroidJniObject NfcBarcode::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jbyteArray NfcBarcode::getBarcode()
	{
		return __thiz.callObjectMethod(
			"getBarcode",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean NfcBarcode::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class NfcBarcode : public __jni_impl::android::nfc::tech::NfcBarcode
	{
	public:
		NfcBarcode(QAndroidJniObject obj) { __thiz = obj; }
		NfcBarcode()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

#endif // ANDROID_NFC_TECH_NFCBARCODE

