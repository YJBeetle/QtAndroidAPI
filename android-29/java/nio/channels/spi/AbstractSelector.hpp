#pragma once

#ifndef JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR
#define JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR

#include "../../../../__JniBaseClass.hpp"
#include "../Selector.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicBoolean;
}
namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
}
namespace __jni_impl::java::nio::channels
{
	class SelectionKey;
}
namespace __jni_impl::java::nio::channels::spi
{
	class AbstractSelectableChannel;
}
namespace __jni_impl::java::nio::channels::spi
{
	class AbstractSelectionKey;
}

namespace __jni_impl::java::nio::channels::spi
{
	class AbstractSelector : public __jni_impl::java::nio::channels::Selector
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isOpen();
		QAndroidJniObject provider();
		void close();
	};
} // namespace __jni_impl::java::nio::channels::spi

#include "../../../util/concurrent/atomic/AtomicBoolean.hpp"
#include "SelectorProvider.hpp"
#include "../SelectionKey.hpp"
#include "AbstractSelectableChannel.hpp"
#include "AbstractSelectionKey.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	// Fields
	
	// Constructors
	void AbstractSelector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.spi.AbstractSelector",
			"(V)V");
	}
	
	// Methods
	jboolean AbstractSelector::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	QAndroidJniObject AbstractSelector::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	void AbstractSelector::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace __jni_impl::java::nio::channels::spi

namespace java::nio::channels::spi
{
	class AbstractSelector : public __jni_impl::java::nio::channels::spi::AbstractSelector
	{
	public:
		AbstractSelector(QAndroidJniObject obj) { __thiz = obj; }
		AbstractSelector()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels::spi

#endif // JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR

