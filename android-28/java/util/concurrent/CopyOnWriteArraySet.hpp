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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CopyOnWriteArraySet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		CopyOnWriteArraySet(QAndroidJniObject obj);
		
		// Constructors
		CopyOnWriteArraySet();
		CopyOnWriteArraySet(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		void clear() const;
		jboolean contains(JObject arg0) const;
		jboolean containsAll(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		void forEach(JObject arg0) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		jboolean remove(JObject arg0) const;
		jboolean removeAll(JObject arg0) const;
		jboolean removeIf(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		jint size() const;
		JObject spliterator() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
	};
} // namespace java::util::concurrent

