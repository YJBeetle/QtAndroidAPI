#pragma once

#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./Connection_RttTextStream.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString Connection_RttTextStream::read() const
	{
		return callObjectMethod(
			"read",
			"()Ljava/lang/String;"
		);
	}
	inline JString Connection_RttTextStream::readImmediately() const
	{
		return callObjectMethod(
			"readImmediately",
			"()Ljava/lang/String;"
		);
	}
	inline void Connection_RttTextStream::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
