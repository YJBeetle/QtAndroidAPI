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
		void close();
		void connect();
		jbyteArray getAtqa();
		jint getMaxTransceiveLength();
		jshort getSak();
		QAndroidJniObject getTag();
		jint getTimeout();
		jboolean isConnected();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
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
			arg0.__jniObject().object()
		);
	}
	void NfcA::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcA::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyteArray NfcA::getAtqa()
	{
		return __thiz.callObjectMethod(
			"getAtqa",
			"()[B"
		).object<jbyteArray>();
	}
	jint NfcA::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jshort NfcA::getSak()
	{
		return __thiz.callMethod<jshort>(
			"getSak",
			"()S"
		);
	}
	QAndroidJniObject NfcA::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint NfcA::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean NfcA::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void NfcA::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray NfcA::transceive(jbyteArray arg0)
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

