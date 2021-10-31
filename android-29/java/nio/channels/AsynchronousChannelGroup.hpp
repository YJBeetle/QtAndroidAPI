#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio::channels::spi
{
	class AsynchronousChannelProvider;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::nio::channels
{
	class AsynchronousChannelGroup : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsynchronousChannelGroup(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousChannelGroup(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject withCachedThreadPool(__JniBaseClass arg0, jint arg1);
		static QAndroidJniObject withFixedThreadPool(jint arg0, __JniBaseClass arg1);
		static QAndroidJniObject withThreadPool(__JniBaseClass arg0);
		jboolean awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jboolean isShutdown();
		jboolean isTerminated();
		QAndroidJniObject provider();
		void shutdown();
		void shutdownNow();
	};
} // namespace java::nio::channels

