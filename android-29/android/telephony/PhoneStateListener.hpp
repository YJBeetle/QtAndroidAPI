#pragma once

#ifndef ANDROID_TELEPHONY_PHONESTATELISTENER
#define ANDROID_TELEPHONY_PHONESTATELISTENER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telephony
{
	class ServiceState;
}
namespace __jni_impl::android::telephony
{
	class CellLocation;
}
namespace __jni_impl::android::telephony
{
	class SignalStrength;
}

namespace __jni_impl::android::telephony
{
	class PhoneStateListener : public __JniBaseClass
	{
	public:
		// Fields
		static jint LISTEN_ACTIVE_DATA_SUBSCRIPTION_ID_CHANGE();
		static jint LISTEN_CALL_FORWARDING_INDICATOR();
		static jint LISTEN_CALL_STATE();
		static jint LISTEN_CELL_INFO();
		static jint LISTEN_CELL_LOCATION();
		static jint LISTEN_DATA_ACTIVITY();
		static jint LISTEN_DATA_CONNECTION_STATE();
		static jint LISTEN_EMERGENCY_NUMBER_LIST();
		static jint LISTEN_MESSAGE_WAITING_INDICATOR();
		static jint LISTEN_NONE();
		static jint LISTEN_SERVICE_STATE();
		static jint LISTEN_SIGNAL_STRENGTH();
		static jint LISTEN_SIGNAL_STRENGTHS();
		static jint LISTEN_USER_MOBILE_DATA_STATE();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		void onServiceStateChanged(__jni_impl::android::telephony::ServiceState arg0);
		void onSignalStrengthChanged(jint arg0);
		void onMessageWaitingIndicatorChanged(jboolean arg0);
		void onCallForwardingIndicatorChanged(jboolean arg0);
		void onCellLocationChanged(__jni_impl::android::telephony::CellLocation arg0);
		void onCallStateChanged(jint arg0, jstring arg1);
		void onDataConnectionStateChanged(jint arg0);
		void onDataConnectionStateChanged(jint arg0, jint arg1);
		void onDataActivity(jint arg0);
		void onSignalStrengthsChanged(__jni_impl::android::telephony::SignalStrength arg0);
		void onCellInfoChanged(__jni_impl::__JniBaseClass arg0);
		void onUserMobileDataStateChanged(jboolean arg0);
		void onActiveDataSubscriptionIdChanged(jint arg0);
	};
} // namespace __jni_impl::android::telephony

#include "ServiceState.hpp"
#include "CellLocation.hpp"
#include "SignalStrength.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jint PhoneStateListener::LISTEN_ACTIVE_DATA_SUBSCRIPTION_ID_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_ACTIVE_DATA_SUBSCRIPTION_ID_CHANGE");
	}
	jint PhoneStateListener::LISTEN_CALL_FORWARDING_INDICATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_FORWARDING_INDICATOR");
	}
	jint PhoneStateListener::LISTEN_CALL_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_STATE");
	}
	jint PhoneStateListener::LISTEN_CELL_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CELL_INFO");
	}
	jint PhoneStateListener::LISTEN_CELL_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CELL_LOCATION");
	}
	jint PhoneStateListener::LISTEN_DATA_ACTIVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DATA_ACTIVITY");
	}
	jint PhoneStateListener::LISTEN_DATA_CONNECTION_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DATA_CONNECTION_STATE");
	}
	jint PhoneStateListener::LISTEN_EMERGENCY_NUMBER_LIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_EMERGENCY_NUMBER_LIST");
	}
	jint PhoneStateListener::LISTEN_MESSAGE_WAITING_INDICATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_MESSAGE_WAITING_INDICATOR");
	}
	jint PhoneStateListener::LISTEN_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_NONE");
	}
	jint PhoneStateListener::LISTEN_SERVICE_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SERVICE_STATE");
	}
	jint PhoneStateListener::LISTEN_SIGNAL_STRENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SIGNAL_STRENGTH");
	}
	jint PhoneStateListener::LISTEN_SIGNAL_STRENGTHS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SIGNAL_STRENGTHS");
	}
	jint PhoneStateListener::LISTEN_USER_MOBILE_DATA_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_USER_MOBILE_DATA_STATE");
	}
	
	// Constructors
	void PhoneStateListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneStateListener",
			"()V");
	}
	void PhoneStateListener::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneStateListener",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void PhoneStateListener::onServiceStateChanged(__jni_impl::android::telephony::ServiceState arg0)
	{
		__thiz.callMethod<void>(
			"onServiceStateChanged",
			"(Landroid/telephony/ServiceState;)V",
			arg0.__jniObject().object());
	}
	void PhoneStateListener::onSignalStrengthChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onSignalStrengthChanged",
			"(I)V",
			arg0);
	}
	void PhoneStateListener::onMessageWaitingIndicatorChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onMessageWaitingIndicatorChanged",
			"(Z)V",
			arg0);
	}
	void PhoneStateListener::onCallForwardingIndicatorChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onCallForwardingIndicatorChanged",
			"(Z)V",
			arg0);
	}
	void PhoneStateListener::onCellLocationChanged(__jni_impl::android::telephony::CellLocation arg0)
	{
		__thiz.callMethod<void>(
			"onCellLocationChanged",
			"(Landroid/telephony/CellLocation;)V",
			arg0.__jniObject().object());
	}
	void PhoneStateListener::onCallStateChanged(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onCallStateChanged",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	void PhoneStateListener::onDataConnectionStateChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onDataConnectionStateChanged",
			"(I)V",
			arg0);
	}
	void PhoneStateListener::onDataConnectionStateChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onDataConnectionStateChanged",
			"(II)V",
			arg0,
			arg1);
	}
	void PhoneStateListener::onDataActivity(jint arg0)
	{
		__thiz.callMethod<void>(
			"onDataActivity",
			"(I)V",
			arg0);
	}
	void PhoneStateListener::onSignalStrengthsChanged(__jni_impl::android::telephony::SignalStrength arg0)
	{
		__thiz.callMethod<void>(
			"onSignalStrengthsChanged",
			"(Landroid/telephony/SignalStrength;)V",
			arg0.__jniObject().object());
	}
	void PhoneStateListener::onCellInfoChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCellInfoChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	void PhoneStateListener::onUserMobileDataStateChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onUserMobileDataStateChanged",
			"(Z)V",
			arg0);
	}
	void PhoneStateListener::onActiveDataSubscriptionIdChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onActiveDataSubscriptionIdChanged",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class PhoneStateListener : public __jni_impl::android::telephony::PhoneStateListener
	{
	public:
		PhoneStateListener(QAndroidJniObject obj) { __thiz = obj; }
		PhoneStateListener()
		{
			__constructor();
		}
		PhoneStateListener(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_PHONESTATELISTENER

