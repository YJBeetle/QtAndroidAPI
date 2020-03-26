#pragma once

#ifndef JAVA_NIO_CHANNELS_PIPE
#define JAVA_NIO_CHANNELS_PIPE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::channels
{
	class Pipe_SourceChannel;
}
namespace __jni_impl::java::nio::channels
{
	class Pipe_SinkChannel;
}

namespace __jni_impl::java::nio::channels
{
	class Pipe : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject source();
		static QAndroidJniObject open();
		QAndroidJniObject sink();
	};
} // namespace __jni_impl::java::nio::channels

#include "Pipe_SourceChannel.hpp"
#include "Pipe_SinkChannel.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void Pipe::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.Pipe",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Pipe::source()
	{
		return __thiz.callObjectMethod(
			"source",
			"()Ljava/nio/channels/Pipe$SourceChannel;"
		);
	}
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
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class Pipe : public __jni_impl::java::nio::channels::Pipe
	{
	public:
		Pipe(QAndroidJniObject obj) { __thiz = obj; }
		Pipe()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_PIPE

