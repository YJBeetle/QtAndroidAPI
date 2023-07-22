#pragma once

#include "./Pipe_SinkChannel.def.hpp"
#include "./Pipe_SourceChannel.def.hpp"
#include "./Pipe.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::Pipe Pipe::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.Pipe",
			"open",
			"()Ljava/nio/channels/Pipe;"
		);
	}
	inline java::nio::channels::Pipe_SinkChannel Pipe::sink() const
	{
		return callObjectMethod(
			"sink",
			"()Ljava/nio/channels/Pipe$SinkChannel;"
		);
	}
	inline java::nio::channels::Pipe_SourceChannel Pipe::source() const
	{
		return callObjectMethod(
			"source",
			"()Ljava/nio/channels/Pipe$SourceChannel;"
		);
	}
} // namespace java::nio::channels

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
