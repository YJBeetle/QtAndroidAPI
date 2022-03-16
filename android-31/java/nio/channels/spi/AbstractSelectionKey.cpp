#include "./AbstractSelectionKey.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	void AbstractSelectionKey::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean AbstractSelectionKey::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
} // namespace java::nio::channels::spi

