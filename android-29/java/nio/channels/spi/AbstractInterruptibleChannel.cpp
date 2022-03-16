#include "../../../../JObject.hpp"
#include "../../../lang/Thread.hpp"
#include "./AbstractInterruptibleChannel.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	void AbstractInterruptibleChannel::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean AbstractInterruptibleChannel::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
} // namespace java::nio::channels::spi

