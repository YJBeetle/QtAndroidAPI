#include "../os/ParcelFileDescriptor.hpp"
#include "./Connection_RttTextStream.hpp"

namespace android::telecom
{
	// Fields
	
	Connection_RttTextStream::Connection_RttTextStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring Connection_RttTextStream::read()
	{
		return __thiz.callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection_RttTextStream::readImmediately()
	{
		return __thiz.callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Connection_RttTextStream::write(jstring arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::telecom

