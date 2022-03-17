#pragma once

#include "../../app/Activity.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../NfcAdapter.def.hpp"
#include "../../../JString.hpp"
#include "./NfcFCardEmulation.def.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::nfc::cardemulation::NfcFCardEmulation NfcFCardEmulation::getInstance(android::nfc::NfcAdapter arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.cardemulation.NfcFCardEmulation",
			"getInstance",
			"(Landroid/nfc/NfcAdapter;)Landroid/nfc/cardemulation/NfcFCardEmulation;",
			arg0.object()
		);
	}
	inline jboolean NfcFCardEmulation::disableService(android::app::Activity arg0) const
	{
		return callMethod<jboolean>(
			"disableService",
			"(Landroid/app/Activity;)Z",
			arg0.object()
		);
	}
	inline jboolean NfcFCardEmulation::enableService(android::app::Activity arg0, android::content::ComponentName arg1) const
	{
		return callMethod<jboolean>(
			"enableService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString NfcFCardEmulation::getNfcid2ForService(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getNfcid2ForService",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString NfcFCardEmulation::getSystemCodeForService(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getSystemCodeForService",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean NfcFCardEmulation::registerSystemCodeForService(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"registerSystemCodeForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean NfcFCardEmulation::setNfcid2ForService(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"setNfcid2ForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean NfcFCardEmulation::unregisterSystemCodeForService(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"unregisterSystemCodeForService",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
} // namespace android::nfc::cardemulation

// Base class headers

