#include "./Pipe_SinkChannel.hpp"
#include "./Pipe_SourceChannel.hpp"
#include "./Pipe.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	Pipe::Pipe(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::Pipe Pipe::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.Pipe",
			"open",
			"()Ljava/nio/channels/Pipe;"
		);
	}
	java::nio::channels::Pipe_SinkChannel Pipe::sink() const
	{
		return callObjectMethod(
			"sink",
			"()Ljava/nio/channels/Pipe$SinkChannel;"
		);
	}
	java::nio::channels::Pipe_SourceChannel Pipe::source() const
	{
		return callObjectMethod(
			"source",
			"()Ljava/nio/channels/Pipe$SourceChannel;"
		);
	}
} // namespace java::nio::channels

