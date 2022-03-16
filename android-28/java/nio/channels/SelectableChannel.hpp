#pragma once

#include "./spi/AbstractInterruptibleChannel.hpp"

class JObject;
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

namespace java::nio::channels
{
	class SelectableChannel : public java::nio::channels::spi::AbstractInterruptibleChannel
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SelectableChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractInterruptibleChannel(className, sig, std::forward<Ts>(agv)...) {}
		SelectableChannel(QAndroidJniObject obj) : java::nio::channels::spi::AbstractInterruptibleChannel(obj) {}
		
		// Constructors
		
		// Methods
		JObject blockingLock() const;
		java::nio::channels::SelectableChannel configureBlocking(jboolean arg0) const;
		jboolean isBlocking() const;
		jboolean isRegistered() const;
		java::nio::channels::SelectionKey keyFor(java::nio::channels::Selector arg0) const;
		java::nio::channels::spi::SelectorProvider provider() const;
		java::nio::channels::SelectionKey register_(java::nio::channels::Selector arg0, jint arg1) const;
		java::nio::channels::SelectionKey register_(java::nio::channels::Selector arg0, jint arg1, JObject arg2) const;
		jint validOps() const;
	};
} // namespace java::nio::channels

