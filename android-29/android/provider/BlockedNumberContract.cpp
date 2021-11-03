#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./BlockedNumberContract.hpp"

namespace android::provider
{
	// Fields
	JString BlockedNumberContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
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
	BlockedNumberContract::BlockedNumberContract(QJniObject obj) : JObject(obj) {}
	
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
	jboolean BlockedNumberContract::isBlocked(android::content::Context arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"isBlocked",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint BlockedNumberContract::unblock(android::content::Context arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.provider.BlockedNumberContract",
			"unblock",
			"(Landroid/content/Context;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

