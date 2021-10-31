#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./BlockedNumberContract.hpp"

namespace android::provider
{
	// Fields
	jstring BlockedNumberContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BlockedNumberContract::AUTHORITY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	
	BlockedNumberContract::BlockedNumberContract(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean BlockedNumberContract::canCurrentUserBlockNumbers(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"canCurrentUserBlockNumbers",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BlockedNumberContract::isBlocked(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"isBlocked",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint BlockedNumberContract::unblock(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.BlockedNumberContract",
			"unblock",
			"(Landroid/content/Context;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::provider

