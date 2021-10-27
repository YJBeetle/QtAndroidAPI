#pragma once

#ifndef ANDROID_TELEPHONY_MBMSGROUPCALLSESSION
#define ANDROID_TELEPHONY_MBMSGROUPCALLSESSION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::telephony::mbms
{
	class GroupCall;
}

namespace __jni_impl::android::telephony
{
	class MbmsGroupCallSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		void close();
		QAndroidJniObject startGroupCall(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
	};
} // namespace __jni_impl::android::telephony

#include "../content/Context.hpp"
#include "mbms/GroupCall.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void MbmsGroupCallSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.MbmsGroupCallSession",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MbmsGroupCallSession::create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsGroupCallSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsGroupCallSessionCallback;)Landroid/telephony/MbmsGroupCallSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MbmsGroupCallSession::create(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsGroupCallSession",
			"create",
			"(Landroid/content/Context;ILjava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsGroupCallSessionCallback;)Landroid/telephony/MbmsGroupCallSession;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void MbmsGroupCallSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MbmsGroupCallSession::startGroupCall(jlong arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		return __thiz.callObjectMethod(
			"startGroupCall",
			"(JLjava/util/List;Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/GroupCallCallback;)Landroid/telephony/mbms/GroupCall;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class MbmsGroupCallSession : public __jni_impl::android::telephony::MbmsGroupCallSession
	{
	public:
		MbmsGroupCallSession(QAndroidJniObject obj) { __thiz = obj; }
		MbmsGroupCallSession()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_MBMSGROUPCALLSESSION

