#pragma once

#include "../AbstractSet.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ConcurrentSkipListSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentSkipListSet(QJniObject obj);
		
		// Constructors
		ConcurrentSkipListSet();
		ConcurrentSkipListSet(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0);
		JObject ceiling(JObject arg0);
		void clear();
		java::util::concurrent::ConcurrentSkipListSet clone();
		JObject comparator();
		jboolean contains(JObject arg0);
		JObject descendingIterator();
		JObject descendingSet();
		jboolean equals(JObject arg0);
		JObject first();
		JObject floor(JObject arg0);
		JObject headSet(JObject arg0);
		JObject headSet(JObject arg0, jboolean arg1);
		JObject higher(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		JObject last();
		JObject lower(JObject arg0);
		JObject pollFirst();
		JObject pollLast();
		jboolean remove(JObject arg0);
		jboolean removeAll(JObject arg0);
		jint size();
		JObject spliterator();
		JObject subSet(JObject arg0, JObject arg1);
		JObject subSet(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3);
		JObject tailSet(JObject arg0);
		JObject tailSet(JObject arg0, jboolean arg1);
	};
} // namespace java::util::concurrent

