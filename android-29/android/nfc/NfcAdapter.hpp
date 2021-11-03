#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
class JArray;
namespace android::app
{
	class Activity;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::nfc
{
	class NdefMessage;
}
namespace android::nfc
{
	class Tag;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::nfc
{
	class NfcAdapter : public JObject
	{
	public:
		// Fields
		static JString ACTION_ADAPTER_STATE_CHANGED();
		static JString ACTION_NDEF_DISCOVERED();
		static JString ACTION_TAG_DISCOVERED();
		static JString ACTION_TECH_DISCOVERED();
		static JString ACTION_TRANSACTION_DETECTED();
		static JString EXTRA_ADAPTER_STATE();
		static JString EXTRA_AID();
		static JString EXTRA_DATA();
		static JString EXTRA_ID();
		static JString EXTRA_NDEF_MESSAGES();
		static JString EXTRA_READER_PRESENCE_CHECK_DELAY();
		static JString EXTRA_SECURE_ELEMENT_NAME();
		static JString EXTRA_TAG();
		static jint FLAG_READER_NFC_A();
		static jint FLAG_READER_NFC_B();
		static jint FLAG_READER_NFC_BARCODE();
		static jint FLAG_READER_NFC_F();
		static jint FLAG_READER_NFC_V();
		static jint FLAG_READER_NO_PLATFORM_SOUNDS();
		static jint FLAG_READER_SKIP_NDEF_CHECK();
		static jint STATE_OFF();
		static jint STATE_ON();
		static jint STATE_TURNING_OFF();
		static jint STATE_TURNING_ON();
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcAdapter(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::NfcAdapter getDefaultAdapter(android::content::Context arg0);
		void disableForegroundDispatch(android::app::Activity arg0) const;
		void disableForegroundNdefPush(android::app::Activity arg0) const;
		void disableReaderMode(android::app::Activity arg0) const;
		void enableForegroundDispatch(android::app::Activity arg0, android::app::PendingIntent arg1, JArray arg2, JArray arg3) const;
		void enableForegroundNdefPush(android::app::Activity arg0, android::nfc::NdefMessage arg1) const;
		void enableReaderMode(android::app::Activity arg0, JObject arg1, jint arg2, android::os::Bundle arg3) const;
		jboolean ignore(android::nfc::Tag arg0, jint arg1, JObject arg2, android::os::Handler arg3) const;
		jboolean invokeBeam(android::app::Activity arg0) const;
		jboolean isEnabled() const;
		jboolean isNdefPushEnabled() const;
		jboolean isSecureNfcEnabled() const;
		jboolean isSecureNfcSupported() const;
		void setBeamPushUris(JArray arg0, android::app::Activity arg1) const;
		void setBeamPushUrisCallback(JObject arg0, android::app::Activity arg1) const;
		void setNdefPushMessage(android::nfc::NdefMessage arg0, android::app::Activity arg1, JArray arg2) const;
		void setNdefPushMessageCallback(JObject arg0, android::app::Activity arg1, JArray arg2) const;
		void setOnNdefPushCompleteCallback(JObject arg0, android::app::Activity arg1, JArray arg2) const;
	};
} // namespace android::nfc

