#include "./AbstractSelectionKey.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	AbstractSelectionKey::AbstractSelectionKey(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AbstractSelectionKey::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean AbstractSelectionKey::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
} // namespace java::nio::channels::spi

