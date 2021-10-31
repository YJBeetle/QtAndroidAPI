#include "../SelectionKey.hpp"
#include "./AbstractSelectableChannel.hpp"
#include "./AbstractSelectionKey.hpp"
#include "./SelectorProvider.hpp"
#include "./AbstractSelector.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractSelector::AbstractSelector(QAndroidJniObject obj) : java::nio::channels::Selector(obj) {}
	
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
	QAndroidJniObject AbstractSelector::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
} // namespace java::nio::channels::spi

