#pragma once

#ifndef ANDROID_NFC_TECH_MIFARECLASSIC
#define ANDROID_NFC_TECH_MIFARECLASSIC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class Tag;
}

namespace __jni_impl::android::nfc::tech
{
	class MifareClassic : public __JniBaseClass
	{
	public:
		// Fields
		static jint BLOCK_SIZE();
		static QAndroidJniObject KEY_DEFAULT();
		static QAndroidJniObject KEY_MIFARE_APPLICATION_DIRECTORY();
		static QAndroidJniObject KEY_NFC_FORUM();
		static jint SIZE_1K();
		static jint SIZE_2K();
		static jint SIZE_4K();
		static jint SIZE_MINI();
		static jint TYPE_CLASSIC();
		static jint TYPE_PLUS();
		static jint TYPE_PRO();
		static jint TYPE_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::nfc::Tag arg0);
		void increment(jint arg0, jint arg1);
		void connect();
		void close();
		jint getType();
		jint getSize();
		void transfer(jint arg0);
		QAndroidJniObject getTag();
		void decrement(jint arg0, jint arg1);
		jint getSectorCount();
		jint getBlockCount();
		jint getBlockCountInSector(jint arg0);
		jint blockToSector(jint arg0);
		jint sectorToBlock(jint arg0);
		jboolean authenticateSectorWithKeyA(jint arg0, jbyteArray arg1);
		jboolean authenticateSectorWithKeyB(jint arg0, jbyteArray arg1);
		QAndroidJniObject readBlock(jint arg0);
		void writeBlock(jint arg0, jbyteArray arg1);
		void restore(jint arg0);
		QAndroidJniObject transceive(jbyteArray arg0);
		jint getMaxTransceiveLength();
		void setTimeout(jint arg0);
		jint getTimeout();
		jboolean isConnected();
	};
} // namespace __jni_impl::android::nfc::tech

#include "../Tag.hpp"

namespace __jni_impl::android::nfc::tech
{
	// Fields
	jint MifareClassic::BLOCK_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"BLOCK_SIZE");
	}
	QAndroidJniObject MifareClassic::KEY_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_DEFAULT",
			"[B");
	}
	QAndroidJniObject MifareClassic::KEY_MIFARE_APPLICATION_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_MIFARE_APPLICATION_DIRECTORY",
			"[B");
	}
	QAndroidJniObject MifareClassic::KEY_NFC_FORUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.tech.MifareClassic",
			"KEY_NFC_FORUM",
			"[B");
	}
	jint MifareClassic::SIZE_1K()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_1K");
	}
	jint MifareClassic::SIZE_2K()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_2K");
	}
	jint MifareClassic::SIZE_4K()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_4K");
	}
	jint MifareClassic::SIZE_MINI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"SIZE_MINI");
	}
	jint MifareClassic::TYPE_CLASSIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_CLASSIC");
	}
	jint MifareClassic::TYPE_PLUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_PLUS");
	}
	jint MifareClassic::TYPE_PRO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_PRO");
	}
	jint MifareClassic::TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.tech.MifareClassic",
			"TYPE_UNKNOWN");
	}
	
	// Constructors
	void MifareClassic::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.tech.MifareClassic",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MifareClassic::get(__jni_impl::android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.MifareClassic",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareClassic;",
			arg0.__jniObject().object());
	}
	void MifareClassic::increment(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"increment",
			"(II)V",
			arg0,
			arg1);
	}
	void MifareClassic::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V");
	}
	void MifareClassic::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jint MifareClassic::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I");
	}
	jint MifareClassic::getSize()
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"()I");
	}
	void MifareClassic::transfer(jint arg0)
	{
		__thiz.callMethod<void>(
			"transfer",
			"(I)V",
			arg0);
	}
	QAndroidJniObject MifareClassic::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;");
	}
	void MifareClassic::decrement(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"decrement",
			"(II)V",
			arg0,
			arg1);
	}
	jint MifareClassic::getSectorCount()
	{
		return __thiz.callMethod<jint>(
			"getSectorCount",
			"()I");
	}
	jint MifareClassic::getBlockCount()
	{
		return __thiz.callMethod<jint>(
			"getBlockCount",
			"()I");
	}
	jint MifareClassic::getBlockCountInSector(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getBlockCountInSector",
			"(I)I",
			arg0);
	}
	jint MifareClassic::blockToSector(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"blockToSector",
			"(I)I",
			arg0);
	}
	jint MifareClassic::sectorToBlock(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"sectorToBlock",
			"(I)I",
			arg0);
	}
	jboolean MifareClassic::authenticateSectorWithKeyA(jint arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jboolean>(
			"authenticateSectorWithKeyA",
			"(I[B)Z",
			arg0,
			arg1);
	}
	jboolean MifareClassic::authenticateSectorWithKeyB(jint arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jboolean>(
			"authenticateSectorWithKeyB",
			"(I[B)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject MifareClassic::readBlock(jint arg0)
	{
		return __thiz.callObjectMethod(
			"readBlock",
			"(I)[B",
			arg0);
	}
	void MifareClassic::writeBlock(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"writeBlock",
			"(I[B)V",
			arg0,
			arg1);
	}
	void MifareClassic::restore(jint arg0)
	{
		__thiz.callMethod<void>(
			"restore",
			"(I)V",
			arg0);
	}
	QAndroidJniObject MifareClassic::transceive(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"transceive",
			"([B)[B",
			arg0);
	}
	jint MifareClassic::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
			"()I");
	}
	void MifareClassic::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0);
	}
	jint MifareClassic::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I");
	}
	jboolean MifareClassic::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z");
	}
} // namespace __jni_impl::android::nfc::tech

namespace android::nfc::tech
{
	class MifareClassic : public __jni_impl::android::nfc::tech::MifareClassic
	{
	public:
		MifareClassic(QAndroidJniObject obj) { __thiz = obj; }
		MifareClassic()
		{
			__constructor();
		}
	};
} // namespace android::nfc::tech

#endif // ANDROID_NFC_TECH_MIFARECLASSIC

