#include "./SEService.hpp"
#include "./Session.hpp"
#include "./Reader.hpp"

namespace android::se::omapi
{
	// Fields
	
	// QAndroidJniObject forward
	Reader::Reader(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void Reader::closeSessions()
	{
		callMethod<void>(
			"closeSessions",
			"()V"
		);
	}
	jstring Reader::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Reader::getSEService()
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
	QAndroidJniObject Reader::openSession()
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/se/omapi/Session;"
		);
	}
} // namespace android::se::omapi

