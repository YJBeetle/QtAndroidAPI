#include "../os/ParcelFileDescriptor.hpp"
#include "../../JString.hpp"
#include "./Connection_RttTextStream.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	
	// Methods
	JString Connection_RttTextStream::read() const
	{
		return callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		);
	}
	JString Connection_RttTextStream::readImmediately() const
	{
		return callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		);
	}
	void Connection_RttTextStream::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::telecom

