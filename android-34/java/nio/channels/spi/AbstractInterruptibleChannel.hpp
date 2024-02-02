#pragma once

#include "../../../../JObject.hpp"
#include "../../../lang/Thread.def.hpp"
#include "./AbstractInterruptibleChannel.def.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AbstractInterruptibleChannel::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean AbstractInterruptibleChannel::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
} // namespace java::nio::channels::spi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels::spi;
#endif
