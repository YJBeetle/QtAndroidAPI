#pragma once

#ifndef ANDROID_NFC_TECH_NFCA
#define ANDROID_NFC_TECH_NFCA

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class NfcA : public __JniBaseClass
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
		QAndroidJniObject getAtqa();
		jshort getSak();
	};
} // namespace __jni_impl::android::nfc::tech

#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	
	// Constructors
	void NfcA::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.NfcA",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NfcA::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcA",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcA;",
			arg0.__jniObject().object());
	}
	void NfcA::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V");
	}
	void NfcA::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject NfcA::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;");
	}
	QAndroidJniObject NfcA::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0);
	}
	jint NfcA::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I");
	}
	void NfcA::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0);
	}
	jint NfcA::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I");
	}
	jboolean NfcA::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z");
	}
	QAndroidJniObject NfcA::getAtqa()
	{
		return __thiz.callObjectMethod(
			"getAtqa",
			"()[B");
	}
	jshort NfcA::getSak()
	{
		return __thiz.callMethod<jshort>(
			"getSak",
			"()S");
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class NfcA : public __jni_impl::android::nfc::tech::NfcA
	{
	public:
		NfcA(QAndroidJniObject obj) { __thiz = obj; }
		NfcA()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

#endif // ANDROID_NFC_TECH_NFCA

