#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./CallLog.hpp"

namespace android::provider
{
	// Fields
	JString CallLog::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.CallLog",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri CallLog::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	CallLog::CallLog()
		: JObject(
			"android.provider.CallLog",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

