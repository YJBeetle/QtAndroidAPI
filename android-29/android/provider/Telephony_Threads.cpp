#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./Telephony_Threads.hpp"

namespace android::provider
{
	// Fields
	jint Telephony_Threads::BROADCAST_THREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Threads",
			"BROADCAST_THREAD"
		);
	}
	jint Telephony_Threads::COMMON_THREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Threads",
			"COMMON_THREAD"
		);
	}
	QAndroidJniObject Telephony_Threads::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Threads",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_Threads::OBSOLETE_THREADS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Threads",
			"OBSOLETE_THREADS_URI",
			"Landroid/net/Uri;"
		);
	}
	
	Telephony_Threads::Telephony_Threads(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong Telephony_Threads::getOrCreateThreadId(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong Telephony_Threads::getOrCreateThreadId(android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong Telephony_Threads::getOrCreateThreadId(android::content::Context arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/util/Set;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::provider

