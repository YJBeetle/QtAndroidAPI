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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PriorityQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractQueue(className, sig, std::forward<Ts>(agv)...) {}
		PriorityQueue(QAndroidJniObject obj);
		
		// Constructors
		PriorityQueue();
		PriorityQueue(jint arg0);
		PriorityQueue(JObject arg0);
		PriorityQueue(java::util::PriorityQueue &arg0);
		PriorityQueue(jint arg0, JObject arg1);
		
		// Methods
		jboolean add(JObject arg0);
		void clear();
		JObject comparator();
		jboolean contains(JObject arg0);
		void forEach(JObject arg0);
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
	};
} // namespace java::util

