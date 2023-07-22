#pragma once

#include "../../../../JObject.hpp"
#include "../../../lang/invoke/VarHandle.def.hpp"
#include "../SelectionKey.def.hpp"
#include "./AbstractSelectableChannel.def.hpp"
#include "./AbstractSelectionKey.def.hpp"
#include "./SelectorProvider.def.hpp"
#include "./AbstractSelector.def.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AbstractSelector::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean AbstractSelector::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	inline java::nio::channels::spi::SelectorProvider AbstractSelector::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
} // namespace java::nio::channels::spi

// Base class headers
#include "../Selector.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels::spi;
#endif
