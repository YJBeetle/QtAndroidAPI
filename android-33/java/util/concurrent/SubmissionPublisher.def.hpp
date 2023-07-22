#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::lang
{
	class Thread;
}
class JThrowable;
namespace java::util::concurrent
{
	class CompletableFuture;
}
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace java::util::concurrent
{
	class SubmissionPublisher : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubmissionPublisher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubmissionPublisher(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SubmissionPublisher();
		SubmissionPublisher(JObject arg0, jint arg1);
		SubmissionPublisher(JObject arg0, jint arg1, JObject arg2);
		
		// Methods
		void close() const;
		void closeExceptionally(JThrowable arg0) const;
		java::util::concurrent::CompletableFuture consume(JObject arg0) const;
		jint estimateMaximumLag() const;
		jlong estimateMinimumDemand() const;
		JThrowable getClosedException() const;
		JObject getExecutor() const;
		jint getMaxBufferCapacity() const;
		jint getNumberOfSubscribers() const;
		JObject getSubscribers() const;
		jboolean hasSubscribers() const;
		jboolean isClosed() const;
		jboolean isSubscribed(JObject arg0) const;
		jint offer(JObject arg0, JObject arg1) const;
		jint offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, JObject arg3) const;
		jint submit(JObject arg0) const;
		void subscribe(JObject arg0) const;
	};
} // namespace java::util::concurrent

