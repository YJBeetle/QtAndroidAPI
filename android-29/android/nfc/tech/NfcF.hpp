#pragma once

#ifndef ANDROID_NFC_TECH_NFCF
#define ANDROID_NFC_TECH_NFCF

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class NfcF : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		void connect();
		void close();
		QAndroidJniObject getTag();
		QAndroidJniObject transceive(jbyteArray arg0);
		jint getMaxTransceiveLength();
		void setTimeout(jint arg0);
		jint getTimeout();
		jboolean isConnected();
		QAndroidJniObject getSystemCode();
		QAndroidJniObject getManufacturer();
	};
} // namespace __jni_impl::android::nfc::tech

#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	
	// Constructors
	void NfcF::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.NfcF",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NfcF::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcF",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcF;",
			arg0.__jniObject().object());
	}
	void NfcF::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V");
	}
	void NfcF::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject NfcF::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;");
	}
	QAndroidJniObject NfcF::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0);
	}
	jint NfcF::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I");
	}
	void NfcF::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0);
	}
	jint NfcF::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I");
	}
	jboolean NfcF::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z");
	}
	QAndroidJniObject NfcF::getSystemCode()
	{
		return __thiz.callObjectMethod(
			"getSystemCode",
			"()[B");
	}
	QAndroidJniObject NfcF::getManufacturer()
	{
		return __thiz.callObjectMethod(
			"getManufacturer",
			"()[B");
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class NfcF : public __jni_impl::android::nfc::tech::NfcF
	{
	public:
		NfcF(QAndroidJniObject obj) { __thiz = obj; }
		NfcF()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

#endif // ANDROID_NFC_TECH_NFCF

