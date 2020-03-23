#pragma once

#ifndef ANDROID_NFC_NFCEVENT
#define ANDROID_NFC_NFCEVENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class NfcAdapter;
}

namespace __jni_impl::android::nfc
{
	class NfcEvent : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject nfcAdapter();
		jint peerLlcpMajorVersion();
		jint peerLlcpMinorVersion();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::nfc

#include "NfcAdapter.hpp"

namespace __jni_impl::android::nfc
{
	// Fields
	QAndroidJniObject NfcEvent::nfcAdapter()
	{
		return __thiz.getObjectField(
			"nfcAdapter",
			"Landroid/nfc/NfcAdapter;");
	}
	jint NfcEvent::peerLlcpMajorVersion()
	{
		return __thiz.getField<jint>(
			"peerLlcpMajorVersion");
	}
	jint NfcEvent::peerLlcpMinorVersion()
	{
		return __thiz.getField<jint>(
			"peerLlcpMinorVersion");
	}
	
	// Constructors
	void NfcEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NfcEvent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class NfcEvent : public __jni_impl::android::nfc::NfcEvent
	{
	public:
		NfcEvent(QAndroidJniObject obj) { __thiz = obj; }
		NfcEvent()
		{
			__constructor();
		}
	};
} // namespace android::nfc

#endif // ANDROID_NFC_NFCEVENT

