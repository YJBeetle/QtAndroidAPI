#pragma once

#include "../SelectableChannel.hpp"

class JArray;
class JObject;
namespace java::nio::channels
{
	class SelectableChannel;
}
namespace java::nio::channels
{
	class SelectionKey;
}
namespace java::nio::channels
{
	class Selector;
}
namespace java::nio::channels::spi
{
	class SelectorProvider;
}

namespace java::nio::channels::spi
{
	class AbstractSelectableChannel : public java::nio::channels::SelectableChannel
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractSelectableChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::SelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSelectableChannel(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject blockingLock() const;
		java::nio::channels::SelectableChannel configureBlocking(jboolean arg0) const;
		jboolean isBlocking() const;
		jboolean isRegistered() const;
		java::nio::channels::SelectionKey keyFor(java::nio::channels::Selector arg0) const;
		java::nio::channels::spi::SelectorProvider provider() const;
		java::nio::channels::SelectionKey _register(java::nio::channels::Selector arg0, jint arg1, JObject arg2) const;
	};
} // namespace java::nio::channels::spi

