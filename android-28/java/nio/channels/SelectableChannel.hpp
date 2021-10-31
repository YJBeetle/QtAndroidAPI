#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./spi/AbstractInterruptibleChannel.hpp"

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
		SelectableChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jobject blockingLock();
		java::nio::channels::SelectableChannel configureBlocking(jboolean arg0);
		jboolean isBlocking();
		jboolean isRegistered();
		java::nio::channels::SelectionKey keyFor(java::nio::channels::Selector arg0);
		java::nio::channels::spi::SelectorProvider provider();
		java::nio::channels::SelectionKey _register(java::nio::channels::Selector arg0, jint arg1);
		java::nio::channels::SelectionKey _register(java::nio::channels::Selector arg0, jint arg1, jobject arg2);
		jint validOps();
	};
} // namespace java::nio::channels

