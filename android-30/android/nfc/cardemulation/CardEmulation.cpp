#include "../../app/Activity.hpp"
#include "../../content/ComponentName.hpp"
#include "../NfcAdapter.hpp"
#include "./CardEmulation.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	jstring CardEmulation::ACTION_CHANGE_DEFAULT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"ACTION_CHANGE_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CardEmulation::CATEGORY_OTHER()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"CATEGORY_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CardEmulation::CATEGORY_PAYMENT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"CATEGORY_PAYMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CardEmulation::EXTRA_CATEGORY()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"EXTRA_CATEGORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CardEmulation::EXTRA_SERVICE_COMPONENT()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"EXTRA_SERVICE_COMPONENT",
			"Ljava/lang/String;"
		).object<jstring>();
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
	CardEmulation::CardEmulation(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean CardEmulation::categoryAllowsForegroundPreference(jstring arg0)
	{
		return callMethod<jboolean>(
			"categoryAllowsForegroundPreference",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	__JniBaseClass CardEmulation::getAidsForPreferredPaymentService()
	{
		return callObjectMethod(
			"getAidsForPreferredPaymentService",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass CardEmulation::getAidsForService(android::content::ComponentName arg0, jstring arg1)
	{
		return callObjectMethod(
			"getAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	jstring CardEmulation::getDescriptionForPreferredPaymentService()
	{
		return callObjectMethod(
			"getDescriptionForPreferredPaymentService",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring CardEmulation::getRouteDestinationForPreferredPaymentService()
	{
		return callObjectMethod(
			"getRouteDestinationForPreferredPaymentService",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CardEmulation::getSelectionModeForCategory(jstring arg0)
	{
		return callMethod<jint>(
			"getSelectionModeForCategory",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jboolean CardEmulation::isDefaultServiceForAid(android::content::ComponentName arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"isDefaultServiceForAid",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean CardEmulation::isDefaultServiceForCategory(android::content::ComponentName arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"isDefaultServiceForCategory",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean CardEmulation::registerAidsForService(android::content::ComponentName arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callMethod<jboolean>(
			"registerAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean CardEmulation::removeAidsForService(android::content::ComponentName arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"removeAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean CardEmulation::setOffHostForService(android::content::ComponentName arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"setOffHostForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean CardEmulation::setPreferredService(android::app::Activity arg0, android::content::ComponentName arg1)
	{
		return callMethod<jboolean>(
			"setPreferredService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean CardEmulation::supportsAidPrefixRegistration()
	{
		return callMethod<jboolean>(
			"supportsAidPrefixRegistration",
			"()Z"
		);
	}
	jboolean CardEmulation::unsetOffHostForService(android::content::ComponentName arg0)
	{
		return callMethod<jboolean>(
			"unsetOffHostForService",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean CardEmulation::unsetPreferredService(android::app::Activity arg0)
	{
		return callMethod<jboolean>(
			"unsetPreferredService",
			"(Landroid/app/Activity;)Z",
			arg0.object()
		);
	}
} // namespace android::nfc::cardemulation

