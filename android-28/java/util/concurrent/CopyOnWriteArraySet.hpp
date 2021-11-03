#pragma once

#include "../../../JObject.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractSet.hpp"

namespace java::util::concurrent
{
	class CopyOnWriteArrayList;
}

namespace java::util::concurrent
{
	class CopyOnWriteArraySet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CopyOnWriteArraySet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		CopyOnWriteArraySet(QJniObject obj);
		
		// Constructors
		CopyOnWriteArraySet();
		CopyOnWriteArraySet(JObject arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(JObject arg0);
		void clear();
		jboolean contains(jobject arg0);
		jboolean containsAll(JObject arg0);
		jboolean equals(jobject arg0);
		void forEach(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(JObject arg0);
		jboolean removeIf(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util::concurrent

