#pragma once

#ifndef ANDROID_NFC_TECH_NFCB
#define ANDROID_NFC_TECH_NFCB

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class NfcB : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getApplicationData();
		jint getMaxTransceiveLength();
		jbyteArray getProtocolInfo();
		QAndroidJniObject getTag();
		jboolean isConnected();
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace __jni_impl::android::nfc::tech

#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	
	// Constructors
	void NfcB::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.NfcB",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NfcB::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcB",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcB;",
			arg0.__jniObject().object()
		);
	}
	void NfcB::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcB::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray NfcB::getApplicationData()
	{
		return __thiz.callObjectMethod(
			"getApplicationData",
			"()[B"
		).object<jbyteArray>();
	}
	jint NfcB::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyteArray NfcB::getProtocolInfo()
	{
		return __thiz.callObjectMethod(
			"getProtocolInfo",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject NfcB::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcB::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray NfcB::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class NfcB : public __jni_impl::android::nfc::tech::NfcB
	{
	public:
		NfcB(QAndroidJniObject obj) { __thiz = obj; }
		NfcB()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

#endif // ANDROID_NFC_TECH_NFCB

