#include "./Pipe_SinkChannel.hpp"
#include "./Pipe_SourceChannel.hpp"
#include "./Pipe.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	Pipe::Pipe(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Pipe::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Pipe",
			"open",
			"()Ljava/nio/channels/Pipe;"
		);
	}
	QAndroidJniObject Pipe::sink()
	{
		return callObjectMethod(
			"sink",
			"()Ljava/nio/channels/Pipe$SinkChannel;"
		);
	}
	QAndroidJniObject Pipe::source()
	{
		return callObjectMethod(
			"source",
			"()Ljava/nio/channels/Pipe$SourceChannel;"
		);
	}
} // namespace java::nio::channels

