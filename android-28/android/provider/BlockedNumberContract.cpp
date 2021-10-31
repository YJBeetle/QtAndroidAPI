#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./BlockedNumberContract.hpp"

namespace android::provider
{
	// Fields
	jstring BlockedNumberContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri BlockedNumberContract::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	BlockedNumberContract::BlockedNumberContract(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean BlockedNumberContract::canCurrentUserBlockNumbers(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"canCurrentUserBlockNumbers",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	jboolean BlockedNumberContract::isBlocked(android::content::Context arg0, jstring arg1)
	{
		return callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"isBlocked",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jint BlockedNumberContract::unblock(android::content::Context arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.provider.BlockedNumberContract",
			"unblock",
			"(Landroid/content/Context;Ljava/lang/String;)I",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

