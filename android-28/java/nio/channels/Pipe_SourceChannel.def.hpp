#pragma once

#include "./spi/AbstractSelectableChannel.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Pipe_SourceChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractSelectableChannel(className, sig, std::forward<Ts>(agv)...) {}
		Pipe_SourceChannel(QJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
		
		// Constructors
		
		// Methods
		jint validOps() const;
	};
} // namespace java::nio::channels

