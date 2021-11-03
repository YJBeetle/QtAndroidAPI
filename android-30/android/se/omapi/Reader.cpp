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
	void Reader::closeSessions() const
	{
		callMethod<void>(
			"closeSessions",
			"()V"
		);
	}
	JString Reader::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	android::se::omapi::SEService Reader::getSEService() const
	{
		return callObjectMethod(
			"getSEService",
			"()Landroid/se/omapi/SEService;"
		);
	}
	jboolean Reader::isSecureElementPresent() const
	{
		return callMethod<jboolean>(
			"isSecureElementPresent",
			"()Z"
		);
	}
	android::se::omapi::Session Reader::openSession() const
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/se/omapi/Session;"
		);
	}
} // namespace android::se::omapi

