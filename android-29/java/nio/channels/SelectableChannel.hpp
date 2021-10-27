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
		
		SelectableChannel(QAndroidJniObject obj);
		// Constructors
		SelectableChannel() = default;
		
		// Methods
		jobject blockingLock();
		QAndroidJniObject configureBlocking(jboolean arg0);
		jboolean isBlocking();
		jboolean isRegistered();
		QAndroidJniObject keyFor(java::nio::channels::Selector arg0);
		QAndroidJniObject provider();
		QAndroidJniObject _register(java::nio::channels::Selector arg0, jint arg1);
		QAndroidJniObject _register(java::nio::channels::Selector arg0, jint arg1, jobject arg2);
		jint validOps();
	};
} // namespace java::nio::channels

