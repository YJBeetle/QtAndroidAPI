#include "../content/Context.hpp"
#include "./mbms/GroupCall.hpp"
#include "./MbmsGroupCallSession.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	MbmsGroupCallSession::MbmsGroupCallSession(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MbmsGroupCallSession::create(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsGroupCallSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsGroupCallSessionCallback;)Landroid/telephony/MbmsGroupCallSession;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject MbmsGroupCallSession::create(android::content::Context arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsGroupCallSession",
			"create",
			"(Landroid/content/Context;ILjava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsGroupCallSessionCallback;)Landroid/telephony/MbmsGroupCallSession;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void MbmsGroupCallSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MbmsGroupCallSession::startGroupCall(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3, __JniBaseClass arg4)
	{
		return callObjectMethod(
			"startGroupCall",
			"(JLjava/util/List;Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/GroupCallCallback;)Landroid/telephony/mbms/GroupCall;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::telephony
