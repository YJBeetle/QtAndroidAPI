#pragma once

#ifndef ANDROID_TELECOM_CALL_CALLBACK
#define ANDROID_TELECOM_CALL_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class Call;
}
namespace __jni_impl::android::telecom
{
	class Call_Details;
}
namespace __jni_impl::android::telecom
{
	class InCallService_VideoCall;
}
namespace __jni_impl::android::telecom
{
	class Call_RttCall;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::telecom
{
	class Call_Callback : public __JniBaseClass
	{
	public:
		// Fields
		static jint HANDOVER_FAILURE_DEST_APP_REJECTED();
		static jint HANDOVER_FAILURE_NOT_SUPPORTED();
		static jint HANDOVER_FAILURE_ONGOING_EMERGENCY_CALL();
		static jint HANDOVER_FAILURE_UNKNOWN();
		static jint HANDOVER_FAILURE_USER_REJECTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onParentChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::android::telecom::Call arg1);
		void onChildrenChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::__JniBaseClass arg1);
		void onDetailsChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::android::telecom::Call_Details arg1);
		void onCannedTextResponsesLoaded(__jni_impl::android::telecom::Call arg0, __jni_impl::__JniBaseClass arg1);
		void onVideoCallChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::android::telecom::InCallService_VideoCall arg1);
		void onCallDestroyed(__jni_impl::android::telecom::Call arg0);
		void onConferenceableCallsChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::__JniBaseClass arg1);
		void onRttModeChanged(__jni_impl::android::telecom::Call arg0, jint arg1);
		void onRttStatusChanged(__jni_impl::android::telecom::Call arg0, jboolean arg1, __jni_impl::android::telecom::Call_RttCall arg2);
		void onRttRequest(__jni_impl::android::telecom::Call arg0, jint arg1);
		void onRttInitiationFailure(__jni_impl::android::telecom::Call arg0, jint arg1);
		void onPostDialWait(__jni_impl::android::telecom::Call arg0, jstring arg1);
		void onConnectionEvent(__jni_impl::android::telecom::Call arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void onStateChanged(__jni_impl::android::telecom::Call arg0, jint arg1);
		void onHandoverComplete(__jni_impl::android::telecom::Call arg0);
		void onHandoverFailed(__jni_impl::android::telecom::Call arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "Call.hpp"
#include "Call_Details.hpp"
#include "InCallService_VideoCall.hpp"
#include "Call_RttCall.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	jint Call_Callback::HANDOVER_FAILURE_DEST_APP_REJECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_DEST_APP_REJECTED"
		);
	}
	jint Call_Callback::HANDOVER_FAILURE_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_NOT_SUPPORTED"
		);
	}
	jint Call_Callback::HANDOVER_FAILURE_ONGOING_EMERGENCY_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_ONGOING_EMERGENCY_CALL"
		);
	}
	jint Call_Callback::HANDOVER_FAILURE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_UNKNOWN"
		);
	}
	jint Call_Callback::HANDOVER_FAILURE_USER_REJECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_USER_REJECTED"
		);
	}
	
	// Constructors
	void Call_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Call$Callback",
			"()V");
	}
	
	// Methods
	void Call_Callback::onParentChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::android::telecom::Call arg1)
	{
		__thiz.callMethod<void>(
			"onParentChanged",
			"(Landroid/telecom/Call;Landroid/telecom/Call;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Call_Callback::onChildrenChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onChildrenChanged",
			"(Landroid/telecom/Call;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Call_Callback::onDetailsChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::android::telecom::Call_Details arg1)
	{
		__thiz.callMethod<void>(
			"onDetailsChanged",
			"(Landroid/telecom/Call;Landroid/telecom/Call$Details;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Call_Callback::onCannedTextResponsesLoaded(__jni_impl::android::telecom::Call arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onCannedTextResponsesLoaded",
			"(Landroid/telecom/Call;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Call_Callback::onVideoCallChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::android::telecom::InCallService_VideoCall arg1)
	{
		__thiz.callMethod<void>(
			"onVideoCallChanged",
			"(Landroid/telecom/Call;Landroid/telecom/InCallService$VideoCall;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Call_Callback::onCallDestroyed(__jni_impl::android::telecom::Call arg0)
	{
		__thiz.callMethod<void>(
			"onCallDestroyed",
			"(Landroid/telecom/Call;)V",
			arg0.__jniObject().object()
		);
	}
	void Call_Callback::onConferenceableCallsChanged(__jni_impl::android::telecom::Call arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onConferenceableCallsChanged",
			"(Landroid/telecom/Call;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Call_Callback::onRttModeChanged(__jni_impl::android::telecom::Call arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onRttModeChanged",
			"(Landroid/telecom/Call;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Call_Callback::onRttStatusChanged(__jni_impl::android::telecom::Call arg0, jboolean arg1, __jni_impl::android::telecom::Call_RttCall arg2)
	{
		__thiz.callMethod<void>(
			"onRttStatusChanged",
			"(Landroid/telecom/Call;ZLandroid/telecom/Call$RttCall;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Call_Callback::onRttRequest(__jni_impl::android::telecom::Call arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onRttRequest",
			"(Landroid/telecom/Call;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Call_Callback::onRttInitiationFailure(__jni_impl::android::telecom::Call arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onRttInitiationFailure",
			"(Landroid/telecom/Call;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Call_Callback::onPostDialWait(__jni_impl::android::telecom::Call arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onPostDialWait",
			"(Landroid/telecom/Call;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Call_Callback::onConnectionEvent(__jni_impl::android::telecom::Call arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/Call;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Call_Callback::onStateChanged(__jni_impl::android::telecom::Call arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStateChanged",
			"(Landroid/telecom/Call;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Call_Callback::onHandoverComplete(__jni_impl::android::telecom::Call arg0)
	{
		__thiz.callMethod<void>(
			"onHandoverComplete",
			"(Landroid/telecom/Call;)V",
			arg0.__jniObject().object()
		);
	}
	void Call_Callback::onHandoverFailed(__jni_impl::android::telecom::Call arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onHandoverFailed",
			"(Landroid/telecom/Call;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class Call_Callback : public __jni_impl::android::telecom::Call_Callback
	{
	public:
		Call_Callback(QAndroidJniObject obj) { __thiz = obj; }
		Call_Callback()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CALL_CALLBACK

