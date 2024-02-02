#pragma once

#include "./spi/SelectorProvider.def.hpp"
#include "./Pipe_SinkChannel.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Pipe_SinkChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

// Base class headers
#include "./spi/AbstractInterruptibleChannel.hpp"
#include "./SelectableChannel.hpp"
#include "./spi/AbstractSelectableChannel.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
