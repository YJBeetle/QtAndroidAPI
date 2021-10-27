#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./spi/AbstractInterruptibleChannel.hpp"
#include "./SelectableChannel.hpp"
#include "./spi/AbstractSelectableChannel.hpp"

namespace java::nio::channels::spi
{
	class SelectorProvider;
}

namespace java::nio::channels
{
	class Pipe_SourceChannel : public java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		// Fields
		
		Pipe_SourceChannel(QAndroidJniObject obj);
		// Constructors
		Pipe_SourceChannel() = default;
		
		// Methods
		jint validOps();
	};
} // namespace java::nio::channels

