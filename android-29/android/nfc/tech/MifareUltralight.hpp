#pragma once

#ifndef ANDROID_NFC_TECH_MIFAREULTRALIGHT
#define ANDROID_NFC_TECH_MIFAREULTRALIGHT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class MifareUltralight : public __JniBaseClass
	{
	public:
		// Fields
		static jint PAGE_SIZE();
		static jint TYPE_ULTRALIGHT();
		static jint TYPE_ULTRALIGHT_C();
		static jint TYPE_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		void connect();
		void close();
		jint getType();
		QAndroidJniObject getTag();
		jbyteArray transceive(jbyteArray arg0);
		jint getMaxTransceiveLength();
		void setTimeout(jint arg0);
		jint getTimeout();
		jboolean isConnected();
		jbyteArray readPages(jint arg0);
		void writePage(jint arg0, jbyteArray arg1);
	};
} // namespace __jni_impl::android::nfc::tech

#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	jint MifareUltralight::PAGE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"PAGE_SIZE"
		);
	}
	jint MifareUltralight::TYPE_ULTRALIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_ULTRALIGHT"
		);
	}
	jint MifareUltralight::TYPE_ULTRALIGHT_C()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_ULTRALIGHT_C"
		);
	}
	jint MifareUltralight::TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	void MifareUltralight::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.MifareUltralight",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MifareUltralight::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.MifareUltralight",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareUltralight;",
			arg0.__jniObject().object()
		);
	}
	void MifareUltralight::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MifareUltralight::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint MifareUltralight::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	QAndroidJniObject MifareUltralight::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jbyteArray MifareUltralight::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jint MifareUltralight::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	void MifareUltralight::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jint MifareUltralight::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jboolean MifareUltralight::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray MifareUltralight::readPages(jint arg0)
	{
		return __thiz.callObjectMethod(
			"readPages",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	void MifareUltralight::writePage(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"writePage",
			"(I[B)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class MifareUltralight : public __jni_impl::android::nfc::tech::MifareUltralight
	{
	public:
		MifareUltralight(QAndroidJniObject obj) { __thiz = obj; }
		MifareUltralight()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

#endif // ANDROID_NFC_TECH_MIFAREULTRALIGHT

