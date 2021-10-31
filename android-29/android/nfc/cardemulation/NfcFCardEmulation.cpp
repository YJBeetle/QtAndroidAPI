#include "../../app/Activity.hpp"
#include "../../content/ComponentName.hpp"
#include "../NfcAdapter.hpp"
#include "./NfcFCardEmulation.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	
	NfcFCardEmulation::NfcFCardEmulation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NfcFCardEmulation::getInstance(android::nfc::NfcAdapter arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.cardemulation.NfcFCardEmulation",
			"getInstance",
			"(Landroid/nfc/NfcAdapter;)Landroid/nfc/cardemulation/NfcFCardEmulation;",
			arg0.__jniObject().object()
		);
	}
	jboolean NfcFCardEmulation::disableService(android::app::Activity arg0)
	{
		return __thiz.callMethod<jboolean>(
			"disableService",
			"(Landroid/app/Activity;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean NfcFCardEmulation::enableService(android::app::Activity arg0, android::content::ComponentName arg1)
	{
		return __thiz.callMethod<jboolean>(
			"enableService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring NfcFCardEmulation::getNfcid2ForService(android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getNfcid2ForService",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring NfcFCardEmulation::getSystemCodeForService(android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemCodeForService",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean NfcFCardEmulation::registerSystemCodeForService(android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerSystemCodeForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean NfcFCardEmulation::setNfcid2ForService(android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setNfcid2ForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean NfcFCardEmulation::unregisterSystemCodeForService(android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterSystemCodeForService",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::nfc::cardemulation

