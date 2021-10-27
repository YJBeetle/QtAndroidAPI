#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::channels
{
	class Pipe_SinkChannel;
}
namespace __jni_impl::java::nio::channels
{
	class Pipe_SourceChannel;
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
		static QAndroidJniObject open();
		QAndroidJniObject sink();
		QAndroidJniObject source();
	};
} // namespace __jni_impl::java::nio::channels

#include "Pipe_SinkChannel.hpp"
#include "Pipe_SourceChannel.hpp"

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

