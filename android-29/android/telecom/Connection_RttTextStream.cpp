#include "../os/ParcelFileDescriptor.hpp"
#include "./Connection_RttTextStream.hpp"

namespace android::telecom
{
	// Fields
	
	// QAndroidJniObject forward
	Connection_RttTextStream::Connection_RttTextStream(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring Connection_RttTextStream::read()
	{
		return callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection_RttTextStream::readImmediately()
	{
		return callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Connection_RttTextStream::write(jstring arg0)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::telecom

