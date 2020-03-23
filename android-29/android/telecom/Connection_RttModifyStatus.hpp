#pragma once

#ifndef ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS
#define ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telecom
{
	class Connection_RttModifyStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint SESSION_MODIFY_REQUEST_FAIL();
		static jint SESSION_MODIFY_REQUEST_INVALID();
		static jint SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE();
		static jint SESSION_MODIFY_REQUEST_SUCCESS();
		static jint SESSION_MODIFY_REQUEST_TIMED_OUT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telecom


namespace __jni_impl::android::telecom
{
	// Fields
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_FAIL");
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_INVALID");
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE");
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_SUCCESS");
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_TIMED_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_TIMED_OUT");
	}
	
	// Constructors
	void Connection_RttModifyStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Connection$RttModifyStatus",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class Connection_RttModifyStatus : public __jni_impl::android::telecom::Connection_RttModifyStatus
	{
	public:
		Connection_RttModifyStatus(QAndroidJniObject obj) { __thiz = obj; }
		Connection_RttModifyStatus()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS

