#include "../os/ParcelFileDescriptor.hpp"
#include "../../JString.hpp"
#include "./Connection_RttTextStream.hpp"

namespace android::telecom
{
	// Fields
	
	// QAndroidJniObject forward
	Connection_RttTextStream::Connection_RttTextStream(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString Connection_RttTextStream::read()
	{
		return callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		);
	}
	JString Connection_RttTextStream::readImmediately()
	{
		return callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		);
	}
	void Connection_RttTextStream::write(JString arg0)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::telecom

