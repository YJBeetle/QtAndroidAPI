#include "../../app/Activity.hpp"
#include "../../content/ComponentName.hpp"
#include "../NfcAdapter.hpp"
#include "./NfcFCardEmulation.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	
	// QAndroidJniObject forward
	NfcFCardEmulation::NfcFCardEmulation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::cardemulation::NfcFCardEmulation NfcFCardEmulation::getInstance(android::nfc::NfcAdapter arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.cardemulation.NfcFCardEmulation",
			"getInstance",
			"(Landroid/nfc/NfcAdapter;)Landroid/nfc/cardemulation/NfcFCardEmulation;",
			arg0.object()
		);
	}
	jboolean NfcFCardEmulation::disableService(android::app::Activity arg0)
	{
		return callMethod<jboolean>(
			"disableService",
			"(Landroid/app/Activity;)Z",
			arg0.object()
		);
	}
	jboolean NfcFCardEmulation::enableService(android::app::Activity arg0, android::content::ComponentName arg1)
	{
		return callMethod<jboolean>(
			"enableService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jstring NfcFCardEmulation::getNfcid2ForService(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"getNfcid2ForService",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring NfcFCardEmulation::getSystemCodeForService(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"getSystemCodeForService",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jboolean NfcFCardEmulation::registerSystemCodeForService(android::content::ComponentName arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"registerSystemCodeForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean NfcFCardEmulation::setNfcid2ForService(android::content::ComponentName arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"setNfcid2ForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean NfcFCardEmulation::unregisterSystemCodeForService(android::content::ComponentName arg0)
	{
		return callMethod<jboolean>(
			"unregisterSystemCodeForService",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
} // namespace android::nfc::cardemulation

