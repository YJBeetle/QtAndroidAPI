#include "./Pipe_SinkChannel.hpp"
#include "./Pipe_SourceChannel.hpp"
#include "./Pipe.hpp"

namespace java::nio::channels
{
	// Fields
	
	Pipe::Pipe(QAndroidJniObject obj) { __thiz = obj; }
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
		return __thiz.callObjectMethod(
			"sink",
			"()Ljava/nio/channels/Pipe$SinkChannel;"
		);
	}
	QAndroidJniObject Pipe::source()
	{
		return __thiz.callObjectMethod(
			"source",
			"()Ljava/nio/channels/Pipe$SourceChannel;"
		);
	}
} // namespace java::nio::channels

