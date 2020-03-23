#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_GROUPCALL
#define ANDROID_TELEPHONY_MBMS_GROUPCALL

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class GroupCall : public __JniBaseClass
	{
	public:
		// Fields
		static jint REASON_BY_USER_REQUEST();
		static jint REASON_FREQUENCY_CONFLICT();
		static jint REASON_LEFT_MBMS_BROADCAST_AREA();
		static jint REASON_NONE();
		static jint REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE();
		static jint REASON_OUT_OF_MEMORY();
		static jint STATE_STALLED();
		static jint STATE_STARTED();
		static jint STATE_STOPPED();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jlong getTmgi();
		void updateGroupCall(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint GroupCall::REASON_BY_USER_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_BY_USER_REQUEST");
	}
	jint GroupCall::REASON_FREQUENCY_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_FREQUENCY_CONFLICT");
	}
	jint GroupCall::REASON_LEFT_MBMS_BROADCAST_AREA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_LEFT_MBMS_BROADCAST_AREA");
	}
	jint GroupCall::REASON_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_NONE");
	}
	jint GroupCall::REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE");
	}
	jint GroupCall::REASON_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_OUT_OF_MEMORY");
	}
	jint GroupCall::STATE_STALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STALLED");
	}
	jint GroupCall::STATE_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STARTED");
	}
	jint GroupCall::STATE_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STOPPED");
	}
	
	// Constructors
	void GroupCall::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.GroupCall",
			"(V)V");
	}
	
	// Methods
	void GroupCall::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jlong GroupCall::getTmgi()
	{
		return __thiz.callMethod<jlong>(
			"getTmgi",
			"()J");
	}
	void GroupCall::updateGroupCall(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"updateGroupCall",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class GroupCall : public __jni_impl::android::telephony::mbms::GroupCall
	{
	public:
		GroupCall(QAndroidJniObject obj) { __thiz = obj; }
		GroupCall()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_GROUPCALL

