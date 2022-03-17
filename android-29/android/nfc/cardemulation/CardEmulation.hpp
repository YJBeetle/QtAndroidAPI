#pragma once

#include "../../app/Activity.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../NfcAdapter.def.hpp"
#include "../../../JString.hpp"
#include "./CardEmulation.def.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	inline JString CardEmulation::ACTION_CHANGE_DEFAULT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"ACTION_CHANGE_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	inline JString CardEmulation::CATEGORY_OTHER()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"CATEGORY_OTHER",
			"Ljava/lang/String;"
		);
	}
	inline JString CardEmulation::CATEGORY_PAYMENT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"CATEGORY_PAYMENT",
			"Ljava/lang/String;"
		);
	}
	inline JString CardEmulation::EXTRA_CATEGORY()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"EXTRA_CATEGORY",
			"Ljava/lang/String;"
		);
	}
	inline JString CardEmulation::EXTRA_SERVICE_COMPONENT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"EXTRA_SERVICE_COMPONENT",
			"Ljava/lang/String;"
		);
	}
	inline jint CardEmulation::SELECTION_MODE_ALWAYS_ASK()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_ALWAYS_ASK"
		);
	}
	inline jint CardEmulation::SELECTION_MODE_ASK_IF_CONFLICT()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_ASK_IF_CONFLICT"
		);
	}
	inline jint CardEmulation::SELECTION_MODE_PREFER_DEFAULT()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_PREFER_DEFAULT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::nfc::cardemulation::CardEmulation CardEmulation::getInstance(android::nfc::NfcAdapter arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.cardemulation.CardEmulation",
			"getInstance",
			"(Landroid/nfc/NfcAdapter;)Landroid/nfc/cardemulation/CardEmulation;",
			arg0.object()
		);
	}
	inline jboolean CardEmulation::categoryAllowsForegroundPreference(JString arg0) const
	{
		return callMethod<jboolean>(
			"categoryAllowsForegroundPreference",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject CardEmulation::getAidsForService(android::content::ComponentName arg0, JString arg1) const
	{
		return callObjectMethod(
			"getAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint CardEmulation::getSelectionModeForCategory(JString arg0) const
	{
		return callMethod<jint>(
			"getSelectionModeForCategory",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jboolean CardEmulation::isDefaultServiceForAid(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isDefaultServiceForAid",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean CardEmulation::isDefaultServiceForCategory(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isDefaultServiceForCategory",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean CardEmulation::registerAidsForService(android::content::ComponentName arg0, JString arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"registerAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jboolean CardEmulation::removeAidsForService(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"removeAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean CardEmulation::setOffHostForService(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"setOffHostForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean CardEmulation::setPreferredService(android::app::Activity arg0, android::content::ComponentName arg1) const
	{
		return callMethod<jboolean>(
			"setPreferredService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean CardEmulation::supportsAidPrefixRegistration() const
	{
		return callMethod<jboolean>(
			"supportsAidPrefixRegistration",
			"()Z"
		);
	}
	inline jboolean CardEmulation::unsetOffHostForService(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"unsetOffHostForService",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean CardEmulation::unsetPreferredService(android::app::Activity arg0) const
	{
		return callMethod<jboolean>(
			"unsetPreferredService",
			"(Landroid/app/Activity;)Z",
			arg0.object()
		);
	}
} // namespace android::nfc::cardemulation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc::cardemulation;
#endif
