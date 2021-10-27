#include "../Tag.hpp"
#include "./MifareUltralight.hpp"

namespace android::nfc::tech
{
	// Fields
	jint MifareUltralight::_PAGE_SIZE()
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
	
	MifareUltralight::MifareUltralight(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MifareUltralight::get(android::nfc::Tag arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.tech.MifareUltralight",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareUltralight;",
			arg0.__jniObject().object()
		);
	}
	void MifareUltralight::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MifareUltralight::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jint MifareUltralight::getMaxTransceiveLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTransceiveLength",
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
	jint MifareUltralight::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint MifareUltralight::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
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
	void MifareUltralight::setTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
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
	void MifareUltralight::writePage(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"writePage",
			"(I[B)V",
			arg0,
			arg1
		);
	}
} // namespace android::nfc::tech

