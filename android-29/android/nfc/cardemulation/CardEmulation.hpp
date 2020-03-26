#pragma once

#ifndef ANDROID_NFC_CARDEMULATION_CARDEMULATION
#define ANDROID_NFC_CARDEMULATION_CARDEMULATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class NfcAdapter;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::app
{
	class Activity;
}

namespace __jni_impl::android::nfc::cardemulation
{
	class CardEmulation : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHANGE_DEFAULT();
		static jstring CATEGORY_OTHER();
		static jstring CATEGORY_PAYMENT();
		static jstring EXTRA_CATEGORY();
		static jstring EXTRA_SERVICE_COMPONENT();
		static jint SELECTION_MODE_ALWAYS_ASK();
		static jint SELECTION_MODE_ASK_IF_CONFLICT();
		static jint SELECTION_MODE_PREFER_DEFAULT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::android::nfc::NfcAdapter arg0);
		jboolean isDefaultServiceForCategory(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean isDefaultServiceForAid(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean categoryAllowsForegroundPreference(jstring arg0);
		jint getSelectionModeForCategory(jstring arg0);
		jboolean registerAidsForService(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		jboolean unsetOffHostForService(__jni_impl::android::content::ComponentName arg0);
		jboolean setOffHostForService(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		QAndroidJniObject getAidsForService(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean removeAidsForService(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean setPreferredService(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::ComponentName arg1);
		jboolean unsetPreferredService(__jni_impl::android::app::Activity arg0);
		jboolean supportsAidPrefixRegistration();
	};
} // namespace __jni_impl::android::nfc::cardemulation

#include "../NfcAdapter.hpp"
#include "../../content/ComponentName.hpp"
#include "../../app/Activity.hpp"

namespace __jni_impl::android::nfc::cardemulation
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
	
	// Constructors
	void CardEmulation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.cardemulation.CardEmulation",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CardEmulation::getInstance(__jni_impl::android::nfc::NfcAdapter arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.cardemulation.CardEmulation",
			"getInstance",
			"(Landroid/nfc/NfcAdapter;)Landroid/nfc/cardemulation/CardEmulation;",
			arg0.__jniObject().object()
		);
	}
	jboolean CardEmulation::isDefaultServiceForCategory(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isDefaultServiceForCategory",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean CardEmulation::isDefaultServiceForAid(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isDefaultServiceForAid",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
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
	jint CardEmulation::getSelectionModeForCategory(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getSelectionModeForCategory",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jboolean CardEmulation::registerAidsForService(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"registerAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean CardEmulation::unsetOffHostForService(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unsetOffHostForService",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CardEmulation::setOffHostForService(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setOffHostForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject CardEmulation::getAidsForService(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean CardEmulation::removeAidsForService(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeAidsForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean CardEmulation::setPreferredService(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::ComponentName arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean CardEmulation::unsetPreferredService(__jni_impl::android::app::Activity arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unsetPreferredService",
			"(Landroid/app/Activity;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CardEmulation::supportsAidPrefixRegistration()
	{
		return __thiz.callMethod<jboolean>(
			"supportsAidPrefixRegistration",
			"()Z"
		);
	}
} // namespace __jni_impl::android::nfc::cardemulation

namespace android::nfc::cardemulation
{
	class CardEmulation : public __jni_impl::android::nfc::cardemulation::CardEmulation
	{
	public:
		CardEmulation(QAndroidJniObject obj) { __thiz = obj; }
		CardEmulation()
		{
			__constructor();
		}
	};
} // namespace android::nfc::cardemulation

#endif // ANDROID_NFC_CARDEMULATION_CARDEMULATION

