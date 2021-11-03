#pragma once

#include "../AbstractQueue.hpp"

class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class LinkedTransferQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkedTransferQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		LinkedTransferQueue(QJniObject obj);
		
		// Constructors
		LinkedTransferQueue();
		LinkedTransferQueue(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0);
		void clear();
		jboolean contains(JObject arg0);
		jint drainTo(JObject arg0);
		jint drainTo(JObject arg0, jint arg1);
		void forEach(JObject arg0);
		jint getWaitingConsumerCount();
		jboolean hasWaitingConsumer();
		jboolean isEmpty();
		JObject iterator();
		jboolean offer(JObject arg0);
		jboolean offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		JObject peek();
		JObject poll();
		JObject poll(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void put(JObject arg0);
		jint remainingCapacity();
		jboolean remove(JObject arg0);
		jboolean removeAll(JObject arg0);
		jboolean removeIf(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		JObject take();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
		JString toString();
		void transfer(JObject arg0);
		jboolean tryTransfer(JObject arg0);
		jboolean tryTransfer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
	};
} // namespace java::util::concurrent

