#include "../../../../JObject.hpp"
#include "../SelectionKey.hpp"
#include "./AbstractSelectableChannel.hpp"
#include "./AbstractSelectionKey.hpp"
#include "./SelectorProvider.hpp"
#include "./AbstractSelector.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QJniObject forward
	AbstractSelector::AbstractSelector(QJniObject obj) : java::nio::channels::Selector(obj) {}
	
	// Constructors
	
	// Methods
	void AbstractSelector::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean AbstractSelector::isOpen()
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	java::nio::channels::spi::SelectorProvider AbstractSelector::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
} // namespace java::nio::channels::spi

