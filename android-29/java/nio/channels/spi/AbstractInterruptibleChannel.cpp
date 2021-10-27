#include "../../../lang/Thread.hpp"
#include "./AbstractInterruptibleChannel.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	AbstractInterruptibleChannel::AbstractInterruptibleChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AbstractInterruptibleChannel::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean AbstractInterruptibleChannel::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
} // namespace java::nio::channels::spi

