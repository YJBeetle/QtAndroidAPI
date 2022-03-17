#pragma once

#include "../AbstractSet.def.hpp"

class JObject;
namespace java::lang::reflect
{
	class Field;
}

namespace java::util::concurrent
{
	class ConcurrentSkipListSet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConcurrentSkipListSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentSkipListSet(QAndroidJniObject obj) : java::util::AbstractSet(obj) {}
		
		// Constructors
		ConcurrentSkipListSet();
		ConcurrentSkipListSet(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		JObject ceiling(JObject arg0) const;
		void clear() const;
		java::util::concurrent::ConcurrentSkipListSet clone() const;
		JObject comparator() const;
		jboolean contains(JObject arg0) const;
		JObject descendingIterator() const;
		JObject descendingSet() const;
		jboolean equals(JObject arg0) const;
		JObject first() const;
		JObject floor(JObject arg0) const;
		JObject headSet(JObject arg0) const;
		JObject headSet(JObject arg0, jboolean arg1) const;
		JObject higher(JObject arg0) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		JObject last() const;
		JObject lower(JObject arg0) const;
		JObject pollFirst() const;
		JObject pollLast() const;
		jboolean remove(JObject arg0) const;
		jboolean removeAll(JObject arg0) const;
		jint size() const;
		JObject spliterator() const;
		JObject subSet(JObject arg0, JObject arg1) const;
		JObject subSet(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3) const;
		JObject tailSet(JObject arg0) const;
		JObject tailSet(JObject arg0, jboolean arg1) const;
	};
} // namespace java::util::concurrent

