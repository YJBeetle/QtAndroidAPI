#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class NdefMessage;
}
namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class Ndef : public __JniBaseClass
	{
	public:
		// Fields
		static jstring MIFARE_CLASSIC();
		static jstring NFC_FORUM_TYPE_1();
		static jstring NFC_FORUM_TYPE_2();
		static jstring NFC_FORUM_TYPE_3();
		static jstring NFC_FORUM_TYPE_4();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		jboolean canMakeReadOnly();
		void close();
		void connect();
		QAndroidJniObject getCachedNdefMessage();
		jint getMaxSize();
		QAndroidJniObject getNdefMessage();
		QAndroidJniObject getTag();
		jstring getType();
		jboolean isConnected();
		jboolean isWritable();
		jboolean makeReadOnly();
		void writeNdefMessage(__jni_impl::android::nfc::NdefMessage arg0);
	};
} // namespace __jni_impl::android::nfc::tech

#include "../NdefMessage.hpp"
#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	jstring Ndef::MIFARE_CLASSIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.Ndef",
			"MIFARE_CLASSIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ndef::NFC_FORUM_TYPE_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ndef::NFC_FORUM_TYPE_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ndef::NFC_FORUM_TYPE_3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ndef::NFC_FORUM_TYPE_4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.Ndef",
			"NFC_FORUM_TYPE_4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Ndef::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.Ndef",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Ndef::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.Ndef",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/Ndef;",
			arg0.__jniObject().object()
		);
	}
	jboolean Ndef::canMakeReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"canMakeReadOnly",
			"()Z"
		);
	}
	void Ndef::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Ndef::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	QAndroidJniObject Ndef::getCachedNdefMessage()
	{
		return __thiz.callObjectMethod(
			"getCachedNdefMessage",
			"()Landroid/nfc/NdefMessage;"
		);
	}
	jint Ndef::getMaxSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxSize",
			"()I"
		);
	}
	QAndroidJniObject Ndef::getNdefMessage()
	{
		return __thiz.callObjectMethod(
			"getNdefMessage",
			"()Landroid/nfc/NdefMessage;"
		);
	}
	QAndroidJniObject Ndef::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jstring Ndef::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Ndef::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean Ndef::isWritable()
	{
		return __thiz.callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	jboolean Ndef::makeReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"makeReadOnly",
			"()Z"
		);
	}
	void Ndef::writeNdefMessage(__jni_impl::android::nfc::NdefMessage arg0)
	{
		__thiz.callMethod<void>(
			"writeNdefMessage",
			"(Landroid/nfc/NdefMessage;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class Ndef : public __jni_impl::android::nfc::tech::Ndef
	{
	public:
		Ndef(QAndroidJniObject obj) { __thiz = obj; }
		Ndef()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

