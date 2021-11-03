#pragma once

#include "./AbstractQueue.hpp"

class JLongArray;
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

namespace java::util
{
	class PriorityQueue : public java::util::AbstractQueue
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PriorityQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		PriorityQueue(QJniObject obj);
		
		// Constructors
		PriorityQueue();
		PriorityQueue(jint arg0);
		PriorityQueue(JObject arg0);
		PriorityQueue(java::util::PriorityQueue &arg0);
		PriorityQueue(jint arg0, JObject arg1);
		
		// Methods
		jboolean add(JObject arg0) const;
		void clear() const;
		JObject comparator() const;
		jboolean contains(JObject arg0) const;
		void forEach(JObject arg0) const;
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
	};
} // namespace java::util

