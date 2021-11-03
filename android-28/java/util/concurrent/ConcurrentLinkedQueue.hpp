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
	class ConcurrentLinkedQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConcurrentLinkedQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentLinkedQueue(QJniObject obj);
		
		// Constructors
		ConcurrentLinkedQueue();
		ConcurrentLinkedQueue(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		void clear();
		jboolean contains(JObject arg0);
		void forEach(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		jboolean offer(JObject arg0);
		JObject peek();
		JObject poll();
		jboolean remove(JObject arg0);
		jboolean removeAll(JObject arg0);
		jboolean removeIf(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
		JString toString();
	};
} // namespace java::util::concurrent

