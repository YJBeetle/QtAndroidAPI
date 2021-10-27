#include "./SEService.hpp"
#include "./Session.hpp"
#include "./Reader.hpp"

namespace android::se::omapi
{
	// Fields
	
	Reader::Reader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Reader::closeSessions()
	{
		__thiz.callMethod<void>(
			"closeSessions",
			"()V"
		);
	}
	jstring Reader::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Reader::getSEService()
	{
		return __thiz.callObjectMethod(
			"getSEService",
			"()Landroid/se/omapi/SEService;"
		);
	}
	jboolean Reader::isSecureElementPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isSecureElementPresent",
			"()Z"
		);
	}
	QAndroidJniObject Reader::openSession()
	{
		return __thiz.callObjectMethod(
			"openSession",
			"()Landroid/se/omapi/Session;"
		);
	}
} // namespace android::se::omapi

