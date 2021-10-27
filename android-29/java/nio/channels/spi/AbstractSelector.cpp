#include "../SelectionKey.hpp"
#include "./AbstractSelectableChannel.hpp"
#include "./AbstractSelectionKey.hpp"
#include "./SelectorProvider.hpp"
#include "./AbstractSelector.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	AbstractSelector::AbstractSelector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AbstractSelector::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean AbstractSelector::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	QAndroidJniObject AbstractSelector::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
} // namespace java::nio::channels::spi

