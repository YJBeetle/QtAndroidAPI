#pragma once

#include "../../../JObject.hpp"

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
	class AsynchronousChannelGroup : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AsynchronousChannelGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousChannelGroup(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::AsynchronousChannelGroup withCachedThreadPool(JObject arg0, jint arg1);
		static java::nio::channels::AsynchronousChannelGroup withFixedThreadPool(jint arg0, JObject arg1);
		static java::nio::channels::AsynchronousChannelGroup withThreadPool(JObject arg0);
		jboolean awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jboolean isShutdown();
		jboolean isTerminated();
		java::nio::channels::spi::AsynchronousChannelProvider provider();
		void shutdown();
		void shutdownNow();
	};
} // namespace java::nio::channels

