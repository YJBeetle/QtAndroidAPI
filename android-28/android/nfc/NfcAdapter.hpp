#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../app/Activity.def.hpp"
#include "../app/PendingIntent.def.hpp"
#include "../content/Context.def.hpp"
#include "./NdefMessage.def.hpp"
#include "./Tag.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "./NfcAdapter.def.hpp"

namespace android::nfc
{
	// Fields
	inline JString NfcAdapter::ACTION_ADAPTER_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_ADAPTER_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::ACTION_NDEF_DISCOVERED()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_NDEF_DISCOVERED",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::ACTION_TAG_DISCOVERED()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_TAG_DISCOVERED",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::ACTION_TECH_DISCOVERED()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_TECH_DISCOVERED",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::ACTION_TRANSACTION_DETECTED()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"ACTION_TRANSACTION_DETECTED",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::EXTRA_ADAPTER_STATE()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_ADAPTER_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::EXTRA_AID()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_AID",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::EXTRA_DATA()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::EXTRA_ID()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::EXTRA_NDEF_MESSAGES()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_NDEF_MESSAGES",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::EXTRA_READER_PRESENCE_CHECK_DELAY()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_READER_PRESENCE_CHECK_DELAY",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::EXTRA_SECURE_ELEMENT_NAME()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_SECURE_ELEMENT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString NfcAdapter::EXTRA_TAG()
	{
		return getStaticObjectField(
			"android.nfc.NfcAdapter",
			"EXTRA_TAG",
			"Ljava/lang/String;"
		);
	}
	inline jint NfcAdapter::FLAG_READER_NFC_A()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_A"
		);
	}
	inline jint NfcAdapter::FLAG_READER_NFC_B()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_B"
		);
	}
	inline jint NfcAdapter::FLAG_READER_NFC_BARCODE()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_BARCODE"
		);
	}
	inline jint NfcAdapter::FLAG_READER_NFC_F()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_F"
		);
	}
	inline jint NfcAdapter::FLAG_READER_NFC_V()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NFC_V"
		);
	}
	inline jint NfcAdapter::FLAG_READER_NO_PLATFORM_SOUNDS()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_NO_PLATFORM_SOUNDS"
		);
	}
	inline jint NfcAdapter::FLAG_READER_SKIP_NDEF_CHECK()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"FLAG_READER_SKIP_NDEF_CHECK"
		);
	}
	inline jint NfcAdapter::STATE_OFF()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"STATE_OFF"
		);
	}
	inline jint NfcAdapter::STATE_ON()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"STATE_ON"
		);
	}
	inline jint NfcAdapter::STATE_TURNING_OFF()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"STATE_TURNING_OFF"
		);
	}
	inline jint NfcAdapter::STATE_TURNING_ON()
	{
		return getStaticField<jint>(
			"android.nfc.NfcAdapter",
			"STATE_TURNING_ON"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::nfc::NfcAdapter NfcAdapter::getDefaultAdapter(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.NfcAdapter",
			"getDefaultAdapter",
			"(Landroid/content/Context;)Landroid/nfc/NfcAdapter;",
			arg0.object()
		);
	}
	inline void NfcAdapter::disableForegroundDispatch(android::app::Activity arg0) const
	{
		callMethod<void>(
			"disableForegroundDispatch",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void NfcAdapter::disableForegroundNdefPush(android::app::Activity arg0) const
	{
		callMethod<void>(
			"disableForegroundNdefPush",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void NfcAdapter::disableReaderMode(android::app::Activity arg0) const
	{
		callMethod<void>(
			"disableReaderMode",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void NfcAdapter::enableForegroundDispatch(android::app::Activity arg0, android::app::PendingIntent arg1, JArray arg2, JArray arg3) const
	{
		callMethod<void>(
			"enableForegroundDispatch",
			"(Landroid/app/Activity;Landroid/app/PendingIntent;[Landroid/content/IntentFilter;[[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jarray>()
		);
	}
	inline void NfcAdapter::enableForegroundNdefPush(android::app::Activity arg0, android::nfc::NdefMessage arg1) const
	{
		callMethod<void>(
			"enableForegroundNdefPush",
			"(Landroid/app/Activity;Landroid/nfc/NdefMessage;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void NfcAdapter::enableReaderMode(android::app::Activity arg0, JObject arg1, jint arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"enableReaderMode",
			"(Landroid/app/Activity;Landroid/nfc/NfcAdapter$ReaderCallback;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline jboolean NfcAdapter::ignore(android::nfc::Tag arg0, jint arg1, JObject arg2, android::os::Handler arg3) const
	{
		return callMethod<jboolean>(
			"ignore",
			"(Landroid/nfc/Tag;ILandroid/nfc/NfcAdapter$OnTagRemovedListener;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean NfcAdapter::invokeBeam(android::app::Activity arg0) const
	{
		return callMethod<jboolean>(
			"invokeBeam",
			"(Landroid/app/Activity;)Z",
			arg0.object()
		);
	}
	inline jboolean NfcAdapter::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean NfcAdapter::isNdefPushEnabled() const
	{
		return callMethod<jboolean>(
			"isNdefPushEnabled",
			"()Z"
		);
	}
	inline void NfcAdapter::setBeamPushUris(JArray arg0, android::app::Activity arg1) const
	{
		callMethod<void>(
			"setBeamPushUris",
			"([Landroid/net/Uri;Landroid/app/Activity;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void NfcAdapter::setBeamPushUrisCallback(JObject arg0, android::app::Activity arg1) const
	{
		callMethod<void>(
			"setBeamPushUrisCallback",
			"(Landroid/nfc/NfcAdapter$CreateBeamUrisCallback;Landroid/app/Activity;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void NfcAdapter::setNdefPushMessage(android::nfc::NdefMessage arg0, android::app::Activity arg1, JArray arg2) const
	{
		callMethod<void>(
			"setNdefPushMessage",
			"(Landroid/nfc/NdefMessage;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline void NfcAdapter::setNdefPushMessageCallback(JObject arg0, android::app::Activity arg1, JArray arg2) const
	{
		callMethod<void>(
			"setNdefPushMessageCallback",
			"(Landroid/nfc/NfcAdapter$CreateNdefMessageCallback;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline void NfcAdapter::setOnNdefPushCompleteCallback(JObject arg0, android::app::Activity arg1, JArray arg2) const
	{
		callMethod<void>(
			"setOnNdefPushCompleteCallback",
			"(Landroid/nfc/NfcAdapter$OnNdefPushCompleteCallback;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
} // namespace android::nfc

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc;
#endif
