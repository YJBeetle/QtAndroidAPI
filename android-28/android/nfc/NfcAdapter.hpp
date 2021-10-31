#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::nfc
{
	class NfcAdapter : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_ADAPTER_STATE_CHANGED();
		static jstring ACTION_NDEF_DISCOVERED();
		static jstring ACTION_TAG_DISCOVERED();
		static jstring ACTION_TECH_DISCOVERED();
		static jstring ACTION_TRANSACTION_DETECTED();
		static jstring EXTRA_ADAPTER_STATE();
		static jstring EXTRA_AID();
		static jstring EXTRA_DATA();
		static jstring EXTRA_ID();
		static jstring EXTRA_NDEF_MESSAGES();
		static jstring EXTRA_READER_PRESENCE_CHECK_DELAY();
		static jstring EXTRA_SECURE_ELEMENT_NAME();
		static jstring EXTRA_TAG();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcAdapter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcAdapter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::NfcAdapter getDefaultAdapter(android::content::Context arg0);
		void disableForegroundDispatch(android::app::Activity arg0);
		void disableForegroundNdefPush(android::app::Activity arg0);
		void disableReaderMode(android::app::Activity arg0);
		void enableForegroundDispatch(android::app::Activity arg0, android::app::PendingIntent arg1, jarray arg2, jarray arg3);
		void enableForegroundNdefPush(android::app::Activity arg0, android::nfc::NdefMessage arg1);
		void enableReaderMode(android::app::Activity arg0, __JniBaseClass arg1, jint arg2, android::os::Bundle arg3);
		jboolean ignore(android::nfc::Tag arg0, jint arg1, __JniBaseClass arg2, android::os::Handler arg3);
		jboolean invokeBeam(android::app::Activity arg0);
		jboolean isEnabled();
		jboolean isNdefPushEnabled();
		void setBeamPushUris(jarray arg0, android::app::Activity arg1);
		void setBeamPushUrisCallback(__JniBaseClass arg0, android::app::Activity arg1);
		void setNdefPushMessage(android::nfc::NdefMessage arg0, android::app::Activity arg1, jarray arg2);
		void setNdefPushMessageCallback(__JniBaseClass arg0, android::app::Activity arg1, jarray arg2);
		void setOnNdefPushCompleteCallback(__JniBaseClass arg0, android::app::Activity arg1, jarray arg2);
	};
} // namespace android::nfc

