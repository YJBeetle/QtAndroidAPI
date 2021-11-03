#pragma once

#include "../Selector.hpp"

class JObject;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractSelector(const char *className, const char *sig, Ts...agv) : java::nio::channels::Selector(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSelector(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean isOpen();
		java::nio::channels::spi::SelectorProvider provider();
	};
} // namespace java::nio::channels::spi

