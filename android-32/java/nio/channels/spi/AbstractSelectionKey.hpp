#pragma once

#include "./AbstractSelectionKey.def.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AbstractSelectionKey::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jboolean AbstractSelectionKey::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
} // namespace java::nio::channels::spi

// Base class headers
#include "../SelectionKey.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels::spi;
#endif
