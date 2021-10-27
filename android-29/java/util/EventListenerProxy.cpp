#include "./EventListenerProxy.hpp"

namespace java::util
{
	// Fields
	
	EventListenerProxy::EventListenerProxy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EventListenerProxy::EventListenerProxy(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EventListenerProxy",
			"(Ljava/util/EventListener;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject EventListenerProxy::getListener()
	{
		return __thiz.callObjectMethod(
			"getListener",
			"()Ljava/util/EventListener;"
		);
	}
} // namespace java::util

