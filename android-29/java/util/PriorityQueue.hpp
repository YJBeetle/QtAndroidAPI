#pragma once

#include "../../JObject.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractQueue.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

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
		jboolean add(jobject arg0);
		void clear();
		JObject comparator();
		jboolean contains(jobject arg0);
		void forEach(JObject arg0);
		JObject iterator();
		jboolean offer(jobject arg0);
		jobject peek();
		jobject poll();
		jboolean remove(jobject arg0);
		jboolean removeAll(JObject arg0);
		jboolean removeIf(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util

