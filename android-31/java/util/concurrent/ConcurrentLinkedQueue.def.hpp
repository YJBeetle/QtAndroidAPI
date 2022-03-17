#pragma once

#include "../AbstractQueue.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConcurrentLinkedQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentLinkedQueue(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
		
		// Constructors
		ConcurrentLinkedQueue();
		ConcurrentLinkedQueue(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		void clear() const;
		jboolean contains(JObject arg0) const;
		void forEach(JObject arg0) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		jboolean offer(JObject arg0) const;
		JObject peek() const;
		JObject poll() const;
		jboolean remove(JObject arg0) const;
		jboolean removeAll(JObject arg0) const;
		jboolean removeIf(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		jint size() const;
		JObject spliterator() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
		JString toString() const;
	};
} // namespace java::util::concurrent

