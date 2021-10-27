#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::nfc
{
	class NfcAdapter;
}

namespace __jni_impl::android::nfc::cardemulation
{
	class NfcFCardEmulation : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::android::nfc::NfcAdapter arg0);
		jboolean disableService(__jni_impl::android::app::Activity arg0);
		jboolean enableService(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::ComponentName arg1);
		jstring getNfcid2ForService(__jni_impl::android::content::ComponentName arg0);
		jstring getSystemCodeForService(__jni_impl::android::content::ComponentName arg0);
		jboolean registerSystemCodeForService(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean registerSystemCodeForService(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean setNfcid2ForService(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		jboolean setNfcid2ForService(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		jboolean unregisterSystemCodeForService(__jni_impl::android::content::ComponentName arg0);
	};
} // namespace __jni_impl::android::nfc::cardemulation

#include "../../app/Activity.hpp"
#include "../../content/ComponentName.hpp"
#include "../NfcAdapter.hpp"

namespace __jni_impl::android::nfc::cardemulation
{
	// Fields
	
	// Constructors
	void NfcFCardEmulation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.cardemulation.NfcFCardEmulation",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NfcFCardEmulation::getInstance(__jni_impl::android::nfc::NfcAdapter arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.nfc.cardemulation.NfcFCardEmulation",
			"getInstance",
			"(Landroid/nfc/NfcAdapter;)Landroid/nfc/cardemulation/NfcFCardEmulation;",
			arg0.__jniObject().object()
		);
	}
	jboolean NfcFCardEmulation::disableService(__jni_impl::android::app::Activity arg0)
	{
		return __thiz.callMethod<jboolean>(
			"disableService",
			"(Landroid/app/Activity;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean NfcFCardEmulation::enableService(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::ComponentName arg1)
	{
		return __thiz.callMethod<jboolean>(
			"enableService",
			"(Landroid/app/Activity;Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring NfcFCardEmulation::getNfcid2ForService(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getNfcid2ForService",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring NfcFCardEmulation::getSystemCodeForService(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemCodeForService",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean NfcFCardEmulation::registerSystemCodeForService(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerSystemCodeForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean NfcFCardEmulation::registerSystemCodeForService(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerSystemCodeForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean NfcFCardEmulation::setNfcid2ForService(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setNfcid2ForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean NfcFCardEmulation::setNfcid2ForService(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setNfcid2ForService",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean NfcFCardEmulation::unregisterSystemCodeForService(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterSystemCodeForService",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::nfc::cardemulation

namespace android::nfc::cardemulation
{
	class NfcFCardEmulation : public __jni_impl::android::nfc::cardemulation::NfcFCardEmulation
	{
	public:
		NfcFCardEmulation(QAndroidJniObject obj) { __thiz = obj; }
		NfcFCardEmulation()
		{
			__constructor();
		}
	};
} // namespace android::nfc::cardemulation

