#include "../../app/Activity.hpp"
#include "../../content/ComponentName.hpp"
#include "../NfcAdapter.hpp"
#include "./CardEmulation.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	jstring CardEmulation::ACTION_CHANGE_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"ACTION_CHANGE_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CardEmulation::CATEGORY_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"CATEGORY_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CardEmulation::CATEGORY_PAYMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"CATEGORY_PAYMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CardEmulation::EXTRA_CATEGORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"EXTRA_CATEGORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CardEmulation::EXTRA_SERVICE_COMPONENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.CardEmulation",
			"EXTRA_SERVICE_COMPONENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CardEmulation::SELECTION_MODE_ALWAYS_ASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_ALWAYS_ASK"
		);
	}
	jint CardEmulation::SELECTION_MODE_ASK_IF_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_ASK_IF_CONFLICT"
		);
	}
	jint CardEmulation::SELECTION_MODE_PREFER_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.CardEmulation",
			"SELECTION_MODE_PREFER_DEFAULT"
		);
	}
	
	CardEmulation::CardEmulation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CardEmulation::getInstance(android::nfc::NfcAdapter arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.cardemulation.CardEmulation",
			"getInstance",
			"(Landroid/nfc/NfcAdapter;)Landroid/nfc/cardemulation/CardEmulation;",
			arg0.__jniObject().object()
		);
	}
	jboolean CardEmulation::categoryAllowsForegroundPreference(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"categoryAllowsForegroundPreference",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject CardEmulation::getAidsForService(android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint CardEmulation::getSelectionModeForCategory(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getSelectionModeForCategory",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jboolean CardEmulation::isDefaultServiceForAid(android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isDefaultServiceForAid",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean CardEmulation::isDefaultServiceForCategory(android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isDefaultServiceForCategory",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean CardEmulation::registerAidsForService(android::content::ComponentName arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"registerAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean CardEmulation::removeAidsForService(android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean CardEmulation::setOffHostForService(android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setOffHostForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean CardEmulation::setPreferredService(android::app::Activity arg0, android::content::ComponentName arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean CardEmulation::supportsAidPrefixRegistration()
	{
		return __thiz.callMethod<jboolean>(
			"supportsAidPrefixRegistration",
			"()Z"
		);
	}
	jboolean CardEmulation::unsetOffHostForService(android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unsetOffHostForService",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CardEmulation::unsetPreferredService(android::app::Activity arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unsetPreferredService",
			"(Landroid/app/Activity;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::nfc::cardemulation

