#include "../../app/Activity.hpp"
#include "../../content/ComponentName.hpp"
#include "../NfcAdapter.hpp"
#include "../../../JString.hpp"
#include "./CardEmulation.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	JString CardEmulation::ACTION_CHANGE_DEFAULT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"ACTION_CHANGE_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	JString CardEmulation::CATEGORY_OTHER()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"CATEGORY_OTHER",
			"Ljava/lang/String;"
		);
	}
	JString CardEmulation::CATEGORY_PAYMENT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"CATEGORY_PAYMENT",
			"Ljava/lang/String;"
		);
	}
	JString CardEmulation::EXTRA_CATEGORY()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"EXTRA_CATEGORY",
			"Ljava/lang/String;"
		);
	}
	JString CardEmulation::EXTRA_SERVICE_COMPONENT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"EXTRA_SERVICE_COMPONENT",
			"Ljava/lang/String;"
		);
	}
	jint CardEmulation::SELECTION_MODE_ALWAYS_ASK()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_ALWAYS_ASK"
		);
	}
	jint CardEmulation::SELECTION_MODE_ASK_IF_CONFLICT()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_ASK_IF_CONFLICT"
		);
	}
	jint CardEmulation::SELECTION_MODE_PREFER_DEFAULT()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_PREFER_DEFAULT"
		);
	}
	
	// QJniObject forward
	CardEmulation::CardEmulation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::nfc::cardemulation::CardEmulation CardEmulation::getInstance(android::nfc::NfcAdapter arg0)
	{
		return callStaticObjectMethod(
			"android.nfc.cardemulation.CardEmulation",
			"getInstance",
			"(Landroid/nfc/NfcAdapter;)Landroid/nfc/cardemulation/CardEmulation;",
			arg0.object()
		);
	}
	jboolean CardEmulation::categoryAllowsForegroundPreference(JString arg0) const
	{
		return callMethod<jboolean>(
			"categoryAllowsForegroundPreference",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject CardEmulation::getAidsForService(android::content::ComponentName arg0, JString arg1) const
	{
		return callObjectMethod(
			"getAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint CardEmulation::getSelectionModeForCategory(JString arg0) const
	{
		return callMethod<jint>(
			"getSelectionModeForCategory",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jboolean CardEmulation::isDefaultServiceForAid(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isDefaultServiceForAid",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean CardEmulation::isDefaultServiceForCategory(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isDefaultServiceForCategory",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean CardEmulation::registerAidsForService(android::content::ComponentName arg0, JString arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"registerAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	jboolean CardEmulation::removeAidsForService(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"removeAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean CardEmulation::setPreferredService(android::app::Activity arg0, android::content::ComponentName arg1) const
	{
		return callMethod<jboolean>(
			"setPreferredService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean CardEmulation::supportsAidPrefixRegistration() const
	{
		return callMethod<jboolean>(
			"supportsAidPrefixRegistration",
			"()Z"
		);
	}
	jboolean CardEmulation::unsetPreferredService(android::app::Activity arg0) const
	{
		return callMethod<jboolean>(
			"unsetPreferredService",
			"(Landroid/app/Activity;)Z",
			arg0.object()
		);
	}
} // namespace android::nfc::cardemulation

