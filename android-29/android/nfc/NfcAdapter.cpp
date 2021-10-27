#include "../app/Activity.hpp"
#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "./NdefMessage.hpp"
#include "./Tag.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "./NfcAdapter.hpp"

namespace android::nfc
{
	// Fields
	jstring NfcAdapter::ACTION_ADAPTER_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_ADAPTER_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::ACTION_NDEF_DISCOVERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_NDEF_DISCOVERED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::ACTION_TAG_DISCOVERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_TAG_DISCOVERED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::ACTION_TECH_DISCOVERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_TECH_DISCOVERED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::ACTION_TRANSACTION_DETECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_TRANSACTION_DETECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::EXTRA_ADAPTER_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_ADAPTER_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::EXTRA_AID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_AID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::EXTRA_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::EXTRA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::EXTRA_NDEF_MESSAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_NDEF_MESSAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::EXTRA_READER_PRESENCE_CHECK_DELAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_READER_PRESENCE_CHECK_DELAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::EXTRA_SECURE_ELEMENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_SECURE_ELEMENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NfcAdapter::EXTRA_TAG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NfcAdapter::FLAG_READER_NFC_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_A"
		);
	}
	jint NfcAdapter::FLAG_READER_NFC_B()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_B"
		);
	}
	jint NfcAdapter::FLAG_READER_NFC_BARCODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_BARCODE"
		);
	}
	jint NfcAdapter::FLAG_READER_NFC_F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_F"
		);
	}
	jint NfcAdapter::FLAG_READER_NFC_V()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_V"
		);
	}
	jint NfcAdapter::FLAG_READER_NO_PLATFORM_SOUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NO_PLATFORM_SOUNDS"
		);
	}
	jint NfcAdapter::FLAG_READER_SKIP_NDEF_CHECK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_SKIP_NDEF_CHECK"
		);
	}
	jint NfcAdapter::STATE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"STATE_OFF"
		);
	}
	jint NfcAdapter::STATE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"STATE_ON"
		);
	}
	jint NfcAdapter::STATE_TURNING_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"STATE_TURNING_OFF"
		);
	}
	jint NfcAdapter::STATE_TURNING_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"STATE_TURNING_ON"
		);
	}
	
	NfcAdapter::NfcAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NfcAdapter::getDefaultAdapter(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.NfcAdapter",
			"getDefaultAdapter",
			"(Landroid/content/Context;)Landroid/nfc/NfcAdapter;",
			arg0.__jniObject().object()
		);
	}
	void NfcAdapter::disableForegroundDispatch(android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"disableForegroundDispatch",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void NfcAdapter::disableForegroundNdefPush(android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"disableForegroundNdefPush",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void NfcAdapter::disableReaderMode(android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"disableReaderMode",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void NfcAdapter::enableForegroundDispatch(android::app::Activity arg0, android::app::PendingIntent arg1, jarray arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"enableForegroundDispatch",
			"(Landroid/app/Activity;Landroid/app/PendingIntent;[Landroid/content/IntentFilter;[[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void NfcAdapter::enableForegroundNdefPush(android::app::Activity arg0, android::nfc::NdefMessage arg1)
	{
		__thiz.callMethod<void>(
			"enableForegroundNdefPush",
			"(Landroid/app/Activity;Landroid/nfc/NdefMessage;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NfcAdapter::enableReaderMode(android::app::Activity arg0, __JniBaseClass arg1, jint arg2, android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"enableReaderMode",
			"(Landroid/app/Activity;Landroid/nfc/NfcAdapter$ReaderCallback;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean NfcAdapter::ignore(android::nfc::Tag arg0, jint arg1, __JniBaseClass arg2, android::os::Handler arg3)
	{
		return __thiz.callMethod<jboolean>(
			"ignore",
			"(Landroid/nfc/Tag;ILandroid/nfc/NfcAdapter$OnTagRemovedListener;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean NfcAdapter::invokeBeam(android::app::Activity arg0)
	{
		return __thiz.callMethod<jboolean>(
			"invokeBeam",
			"(Landroid/app/Activity;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean NfcAdapter::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean NfcAdapter::isNdefPushEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isNdefPushEnabled",
			"()Z"
		);
	}
	jboolean NfcAdapter::isSecureNfcEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSecureNfcEnabled",
			"()Z"
		);
	}
	jboolean NfcAdapter::isSecureNfcSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isSecureNfcSupported",
			"()Z"
		);
	}
	void NfcAdapter::setBeamPushUris(jarray arg0, android::app::Activity arg1)
	{
		__thiz.callMethod<void>(
			"setBeamPushUris",
			"([Landroid/net/Uri;Landroid/app/Activity;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void NfcAdapter::setBeamPushUrisCallback(__JniBaseClass arg0, android::app::Activity arg1)
	{
		__thiz.callMethod<void>(
			"setBeamPushUrisCallback",
			"(Landroid/nfc/NfcAdapter$CreateBeamUrisCallback;Landroid/app/Activity;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NfcAdapter::setNdefPushMessage(android::nfc::NdefMessage arg0, android::app::Activity arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setNdefPushMessage",
			"(Landroid/nfc/NdefMessage;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void NfcAdapter::setNdefPushMessageCallback(__JniBaseClass arg0, android::app::Activity arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setNdefPushMessageCallback",
			"(Landroid/nfc/NfcAdapter$CreateNdefMessageCallback;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void NfcAdapter::setOnNdefPushCompleteCallback(__JniBaseClass arg0, android::app::Activity arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setOnNdefPushCompleteCallback",
			"(Landroid/nfc/NfcAdapter$OnNdefPushCompleteCallback;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::nfc

