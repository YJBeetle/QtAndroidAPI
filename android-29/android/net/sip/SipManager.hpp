#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net::sip
{
	class SipAudioCall;
}
namespace __jni_impl::android::net::sip
{
	class SipAudioCall_Listener;
}
namespace __jni_impl::android::net::sip
{
	class SipProfile;
}
namespace __jni_impl::android::net::sip
{
	class SipSession;
}
namespace __jni_impl::android::net::sip
{
	class SipSession_Listener;
}

namespace __jni_impl::android::net::sip
{
	class SipManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_CALL_ID();
		static jstring EXTRA_OFFER_SD();
		static jint INCOMING_CALL_RESULT_CODE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getCallId(__jni_impl::android::content::Intent arg0);
		static jstring getOfferSessionDescription(__jni_impl::android::content::Intent arg0);
		static jboolean isApiSupported(__jni_impl::android::content::Context arg0);
		static jboolean isIncomingCallIntent(__jni_impl::android::content::Intent arg0);
		static jboolean isSipWifiOnly(__jni_impl::android::content::Context arg0);
		static jboolean isVoipSupported(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject newInstance(__jni_impl::android::content::Context arg0);
		void close(jstring arg0);
		void close(const QString &arg0);
		QAndroidJniObject createSipSession(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::android::net::sip::SipSession_Listener arg1);
		QAndroidJniObject getSessionFor(__jni_impl::android::content::Intent arg0);
		jboolean isOpened(jstring arg0);
		jboolean isOpened(const QString &arg0);
		jboolean isRegistered(jstring arg0);
		jboolean isRegistered(const QString &arg0);
		QAndroidJniObject makeAudioCall(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::android::net::sip::SipProfile arg1, __jni_impl::android::net::sip::SipAudioCall_Listener arg2, jint arg3);
		QAndroidJniObject makeAudioCall(jstring arg0, jstring arg1, __jni_impl::android::net::sip::SipAudioCall_Listener arg2, jint arg3);
		QAndroidJniObject makeAudioCall(const QString &arg0, const QString &arg1, __jni_impl::android::net::sip::SipAudioCall_Listener arg2, jint arg3);
		void open(__jni_impl::android::net::sip::SipProfile arg0);
		void open(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::android::app::PendingIntent arg1, __jni_impl::__JniBaseClass arg2);
		void _register(__jni_impl::android::net::sip::SipProfile arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		void setRegistrationListener(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void setRegistrationListener(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject takeAudioCall(__jni_impl::android::content::Intent arg0, __jni_impl::android::net::sip::SipAudioCall_Listener arg1);
		void unregister(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::net::sip

#include "../../app/PendingIntent.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./SipAudioCall.hpp"
#include "./SipAudioCall_Listener.hpp"
#include "./SipProfile.hpp"
#include "./SipSession.hpp"
#include "./SipSession_Listener.hpp"

namespace __jni_impl::android::net::sip
{
	// Fields
	jstring SipManager::EXTRA_CALL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.sip.SipManager",
			"EXTRA_CALL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipManager::EXTRA_OFFER_SD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.sip.SipManager",
			"EXTRA_OFFER_SD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint SipManager::INCOMING_CALL_RESULT_CODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.sip.SipManager",
			"INCOMING_CALL_RESULT_CODE"
		);
	}
	
	// Constructors
	void SipManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipManager",
			"(V)V");
	}
	
	// Methods
	jstring SipManager::getCallId(__jni_impl::android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.sip.SipManager",
			"getCallId",
			"(Landroid/content/Intent;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring SipManager::getOfferSessionDescription(__jni_impl::android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.sip.SipManager",
			"getOfferSessionDescription",
			"(Landroid/content/Intent;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean SipManager::isApiSupported(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isApiSupported",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean SipManager::isIncomingCallIntent(__jni_impl::android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isIncomingCallIntent",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean SipManager::isSipWifiOnly(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isSipWifiOnly",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean SipManager::isVoipSupported(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.sip.SipManager",
			"isVoipSupported",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SipManager::newInstance(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.sip.SipManager",
			"newInstance",
			"(Landroid/content/Context;)Landroid/net/sip/SipManager;",
			arg0.__jniObject().object()
		);
	}
	void SipManager::close(jstring arg0)
	{
		__thiz.callMethod<void>(
			"close",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SipManager::close(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"close",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SipManager::createSipSession(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::android::net::sip::SipSession_Listener arg1)
	{
		return __thiz.callObjectMethod(
			"createSipSession",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession$Listener;)Landroid/net/sip/SipSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SipManager::getSessionFor(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"getSessionFor",
			"(Landroid/content/Intent;)Landroid/net/sip/SipSession;",
			arg0.__jniObject().object()
		);
	}
	jboolean SipManager::isOpened(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOpened",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean SipManager::isOpened(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOpened",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean SipManager::isRegistered(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRegistered",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean SipManager::isRegistered(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRegistered",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SipManager::makeAudioCall(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::android::net::sip::SipProfile arg1, __jni_impl::android::net::sip::SipAudioCall_Listener arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"makeAudioCall",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipProfile;Landroid/net/sip/SipAudioCall$Listener;I)Landroid/net/sip/SipAudioCall;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject SipManager::makeAudioCall(jstring arg0, jstring arg1, __jni_impl::android::net::sip::SipAudioCall_Listener arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"makeAudioCall",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/sip/SipAudioCall$Listener;I)Landroid/net/sip/SipAudioCall;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject SipManager::makeAudioCall(const QString &arg0, const QString &arg1, __jni_impl::android::net::sip::SipAudioCall_Listener arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"makeAudioCall",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/sip/SipAudioCall$Listener;I)Landroid/net/sip/SipAudioCall;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void SipManager::open(__jni_impl::android::net::sip::SipProfile arg0)
	{
		__thiz.callMethod<void>(
			"open",
			"(Landroid/net/sip/SipProfile;)V",
			arg0.__jniObject().object()
		);
	}
	void SipManager::open(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::android::app::PendingIntent arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"open",
			"(Landroid/net/sip/SipProfile;Landroid/app/PendingIntent;Landroid/net/sip/SipRegistrationListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SipManager::_register(__jni_impl::android::net::sip::SipProfile arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"register",
			"(Landroid/net/sip/SipProfile;ILandroid/net/sip/SipRegistrationListener;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void SipManager::setRegistrationListener(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setRegistrationListener",
			"(Ljava/lang/String;Landroid/net/sip/SipRegistrationListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SipManager::setRegistrationListener(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setRegistrationListener",
			"(Ljava/lang/String;Landroid/net/sip/SipRegistrationListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SipManager::takeAudioCall(__jni_impl::android::content::Intent arg0, __jni_impl::android::net::sip::SipAudioCall_Listener arg1)
	{
		return __thiz.callObjectMethod(
			"takeAudioCall",
			"(Landroid/content/Intent;Landroid/net/sip/SipAudioCall$Listener;)Landroid/net/sip/SipAudioCall;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SipManager::unregister(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"unregister",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipRegistrationListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipManager : public __jni_impl::android::net::sip::SipManager
	{
	public:
		SipManager(QAndroidJniObject obj) { __thiz = obj; }
		SipManager()
		{
			__constructor();
		}
	};
} // namespace android::net::sip

