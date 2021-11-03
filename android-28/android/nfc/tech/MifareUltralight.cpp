#include "../Tag.hpp"
#include "./MifareUltralight.hpp"

namespace android::nfc::tech
{
	// Fields
	jint MifareUltralight::_PAGE_SIZE()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"PAGE_SIZE"
		);
	}
	jint MifareUltralight::TYPE_ULTRALIGHT()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_ULTRALIGHT"
		);
	}
	jint MifareUltralight::TYPE_ULTRALIGHT_C()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_ULTRALIGHT_C"
		);
	}
	jint MifareUltralight::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.nfc.tech.MifareUltralight",
			"TYPE_UNKNOWN"
		);
	}
	
	// QJniObject forward
	MifareUltralight::MifareUltralight(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::tech::MifareUltralight MifareUltralight::get(android::nfc::Tag arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.tech.MifareUltralight",
			"get",
			"(Landroid/nfc/Tag;)Landroid/nfc/tech/MifareUltralight;",
			arg0.object()
		);
	}
	void MifareUltralight::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MifareUltralight::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jint MifareUltralight::getMaxTransceiveLength()
	{
		return callMethod<jint>(
			"getMaxTransceiveLength",
			"()I"
		);
	}
	android::nfc::Tag MifareUltralight::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Landroid/nfc/Tag;"
		);
	}
	jint MifareUltralight::getTimeout()
	{
		return callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint MifareUltralight::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean MifareUltralight::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jbyteArray MifareUltralight::readPages(jint arg0)
	{
		return callObjectMethod(
			"readPages",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	void MifareUltralight::setTimeout(jint arg0)
	{
		callMethod<void>(
			"setTimeout",
			"(I)V",
			arg0
		);
	}
	jbyteArray MifareUltralight::transceive(jbyteArray arg0)
	{
		return callObjectMethod(
			"transceive",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	void MifareUltralight::writePage(jint arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"writePage",
			"(I[B)V",
			arg0,
			arg1
		);
	}
} // namespace android::nfc::tech

