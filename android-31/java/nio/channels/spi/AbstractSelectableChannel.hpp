#pragma once

#include "../../../../JObject.hpp"
#include "./AbstractInterruptibleChannel.hpp"
#include "../SelectableChannel.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractSelectableChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::SelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSelectableChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jobject blockingLock();
		java::nio::channels::SelectableChannel configureBlocking(jboolean arg0);
		jboolean isBlocking();
		jboolean isRegistered();
		java::nio::channels::SelectionKey keyFor(java::nio::channels::Selector arg0);
		java::nio::channels::spi::SelectorProvider provider();
		java::nio::channels::SelectionKey _register(java::nio::channels::Selector arg0, jint arg1, jobject arg2);
	};
} // namespace java::nio::channels::spi

