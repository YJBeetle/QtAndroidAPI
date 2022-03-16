#include "../../../../JObject.hpp"
#include "../SelectionKey.hpp"
#include "./AbstractSelectableChannel.hpp"
#include "./AbstractSelectionKey.hpp"
#include "./SelectorProvider.hpp"
#include "./AbstractSelector.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	void AbstractSelector::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean AbstractSelector::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	java::nio::channels::spi::SelectorProvider AbstractSelector::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
} // namespace java::nio::channels::spi

