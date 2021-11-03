#include "./SEService.hpp"
#include "./Session.hpp"
#include "../../../JString.hpp"
#include "./Reader.hpp"

namespace android::se::omapi
{
	// Fields
	
	// QJniObject forward
	Reader::Reader(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Reader::closeSessions()
	{
		callMethod<void>(
			"closeSessions",
			"()V"
		);
	}
	JString Reader::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	android::se::omapi::SEService Reader::getSEService()
	{
		return callObjectMethod(
			"getSEService",
			"()Landroid/se/omapi/SEService;"
		);
	}
	jboolean Reader::isSecureElementPresent()
	{
		return callMethod<jboolean>(
			"isSecureElementPresent",
			"()Z"
		);
	}
	android::se::omapi::Session Reader::openSession()
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/se/omapi/Session;"
		);
	}
} // namespace android::se::omapi

