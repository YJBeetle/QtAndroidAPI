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
	
	// QAndroidJniObject forward
	Telephony_Threads::Telephony_Threads(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jlong Telephony_Threads::getOrCreateThreadId(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/lang/String;)J",
			arg0.object(),
			arg1
		);
	}
	jlong Telephony_Threads::getOrCreateThreadId(android::content::Context arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/util/Set;)J",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::provider

