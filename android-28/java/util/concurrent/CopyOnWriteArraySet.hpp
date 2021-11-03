#pragma once

#include "../AbstractSet.hpp"

class JObjectArray;
class JObject;
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
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		void clear();
		jboolean contains(JObject arg0);
		jboolean containsAll(JObject arg0);
		jboolean equals(JObject arg0);
		void forEach(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		jboolean remove(JObject arg0);
		jboolean removeAll(JObject arg0);
		jboolean removeIf(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObject spliterator();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
	};
} // namespace java::util::concurrent

