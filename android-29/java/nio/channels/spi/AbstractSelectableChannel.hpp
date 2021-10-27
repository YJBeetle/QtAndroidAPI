#pragma once

#include "../../../../__JniBaseClass.hpp"
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
		
		AbstractSelectableChannel(QAndroidJniObject obj);
		// Constructors
		AbstractSelectableChannel() = default;
		
		// Methods
		jobject blockingLock();
		QAndroidJniObject configureBlocking(jboolean arg0);
		jboolean isBlocking();
		jboolean isRegistered();
		QAndroidJniObject keyFor(java::nio::channels::Selector arg0);
		QAndroidJniObject provider();
		QAndroidJniObject _register(java::nio::channels::Selector arg0, jint arg1, jobject arg2);
	};
} // namespace java::nio::channels::spi

