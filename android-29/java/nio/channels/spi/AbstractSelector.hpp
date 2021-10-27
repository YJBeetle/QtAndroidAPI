#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../Selector.hpp"

namespace java::nio::channels
{
	class SelectionKey;
}
namespace java::nio::channels::spi
{
	class AbstractSelectableChannel;
}
namespace java::nio::channels::spi
{
	class AbstractSelectionKey;
}
namespace java::nio::channels::spi
{
	class SelectorProvider;
}

namespace java::nio::channels::spi
{
	class AbstractSelector : public java::nio::channels::Selector
	{
	public:
		// Fields
		
		AbstractSelector(QAndroidJniObject obj);
		// Constructors
		AbstractSelector() = default;
		
		// Methods
		void close();
		jboolean isOpen();
		QAndroidJniObject provider();
	};
} // namespace java::nio::channels::spi

