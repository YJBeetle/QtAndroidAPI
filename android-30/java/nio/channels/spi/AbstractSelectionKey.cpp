#include "./AbstractSelectionKey.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QJniObject forward
	AbstractSelectionKey::AbstractSelectionKey(QJniObject obj) : java::nio::channels::SelectionKey(obj) {}
	
	// Constructors
	
	// Methods
	void AbstractSelectionKey::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean AbstractSelectionKey::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
} // namespace java::nio::channels::spi

