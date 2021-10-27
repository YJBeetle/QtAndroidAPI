#pragma once

#ifndef ANDROID_NFC_NFCADAPTER
#define ANDROID_NFC_NFCADAPTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::nfc
{
	class NdefMessage;
}
namespace __jni_impl::android::nfc
{
	class Tag;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::nfc
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefaultAdapter(__jni_impl::android::content::Context arg0);
		void disableForegroundDispatch(__jni_impl::android::app::Activity arg0);
		void disableForegroundNdefPush(__jni_impl::android::app::Activity arg0);
		void disableReaderMode(__jni_impl::android::app::Activity arg0);
		void enableForegroundDispatch(__jni_impl::android::app::Activity arg0, __jni_impl::android::app::PendingIntent arg1, jarray arg2, jarray arg3);
		void enableForegroundNdefPush(__jni_impl::android::app::Activity arg0, __jni_impl::android::nfc::NdefMessage arg1);
		void enableReaderMode(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::os::Bundle arg3);
		jboolean ignore(__jni_impl::android::nfc::Tag arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		jboolean invokeBeam(__jni_impl::android::app::Activity arg0);
		jboolean isEnabled();
		jboolean isNdefPushEnabled();
		jboolean isSecureNfcEnabled();
		jboolean isSecureNfcSupported();
		void setBeamPushUris(jarray arg0, __jni_impl::android::app::Activity arg1);
		void setBeamPushUrisCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::app::Activity arg1);
		void setNdefPushMessage(__jni_impl::android::nfc::NdefMessage arg0, __jni_impl::android::app::Activity arg1, jarray arg2);
		void setNdefPushMessageCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::app::Activity arg1, jarray arg2);
		void setOnNdefPushCompleteCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::app::Activity arg1, jarray arg2);
	};
} // namespace __jni_impl::android::nfc

#include "../app/Activity.hpp"
#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "NdefMessage.hpp"
#include "Tag.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::nfc
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
	
	// Constructors
	void NfcAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NfcAdapter",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NfcAdapter::getDefaultAdapter(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.NfcAdapter",
			"getDefaultAdapter",
			"(Landroid/content/Context;)Landroid/nfc/NfcAdapter;",
			arg0.__jniObject().object()
		);
	}
	void NfcAdapter::disableForegroundDispatch(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"disableForegroundDispatch",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void NfcAdapter::disableForegroundNdefPush(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"disableForegroundNdefPush",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void NfcAdapter::disableReaderMode(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"disableReaderMode",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void NfcAdapter::enableForegroundDispatch(__jni_impl::android::app::Activity arg0, __jni_impl::android::app::PendingIntent arg1, jarray arg2, jarray arg3)
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
	void NfcAdapter::enableForegroundNdefPush(__jni_impl::android::app::Activity arg0, __jni_impl::android::nfc::NdefMessage arg1)
	{
		__thiz.callMethod<void>(
			"enableForegroundNdefPush",
			"(Landroid/app/Activity;Landroid/nfc/NdefMessage;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NfcAdapter::enableReaderMode(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::os::Bundle arg3)
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
	jboolean NfcAdapter::ignore(__jni_impl::android::nfc::Tag arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
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
	jboolean NfcAdapter::invokeBeam(__jni_impl::android::app::Activity arg0)
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
	void NfcAdapter::setBeamPushUris(jarray arg0, __jni_impl::android::app::Activity arg1)
	{
		__thiz.callMethod<void>(
			"setBeamPushUris",
			"([Landroid/net/Uri;Landroid/app/Activity;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void NfcAdapter::setBeamPushUrisCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::app::Activity arg1)
	{
		__thiz.callMethod<void>(
			"setBeamPushUrisCallback",
			"(Landroid/nfc/NfcAdapter$CreateBeamUrisCallback;Landroid/app/Activity;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NfcAdapter::setNdefPushMessage(__jni_impl::android::nfc::NdefMessage arg0, __jni_impl::android::app::Activity arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setNdefPushMessage",
			"(Landroid/nfc/NdefMessage;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void NfcAdapter::setNdefPushMessageCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::app::Activity arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setNdefPushMessageCallback",
			"(Landroid/nfc/NfcAdapter$CreateNdefMessageCallback;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void NfcAdapter::setOnNdefPushCompleteCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::app::Activity arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setOnNdefPushCompleteCallback",
			"(Landroid/nfc/NfcAdapter$OnNdefPushCompleteCallback;Landroid/app/Activity;[Landroid/app/Activity;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class NfcAdapter : public __jni_impl::android::nfc::NfcAdapter
	{
	public:
		NfcAdapter(QAndroidJniObject obj) { __thiz = obj; }
		NfcAdapter()
		{
			__constructor();
		}
	};
} // namespace android::nfc

#endif // ANDROID_NFC_NFCADAPTER

