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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractSelector(const char *className, const char *sig, Ts...agv) : java::nio::channels::Selector(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSelector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		jboolean isOpen() const;
		java::nio::channels::spi::SelectorProvider provider() const;
	};
} // namespace java::nio::channels::spi

