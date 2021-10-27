#pragma once

#ifndef ANDROID_NFC_TECH_NFCV
#define ANDROID_NFC_TECH_NFCV

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class NfcV : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		void close();
		void connect();
		jbyte getDsfId();
		jint getMaxTransceiveLength();
		jbyte getResponseFlags();
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
	void NfcV::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.NfcV",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NfcV::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.NfcV",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/NfcV;",
			arg0.__jniObject().object()
		);
	}
	void NfcV::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void NfcV::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jbyte NfcV::getDsfId()
	{
		return __thiz.callMethod<jbyte>(
			"getDsfId",
			"()B"
		);
	}
	jint NfcV::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	jbyte NfcV::getResponseFlags()
	{
		return __thiz.callMethod<jbyte>(
			"getResponseFlags",
			"()B"
		);
	}
	QAndroidJniObject NfcV::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jboolean NfcV::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray NfcV::transceive(jbyteArray arg0)
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
	class NfcV : public __jni_impl::android::nfc::tech::NfcV
	{
	public:
		NfcV(QAndroidJniObject obj) { __thiz = obj; }
		NfcV()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

#endif // ANDROID_NFC_TECH_NFCV

