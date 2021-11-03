#pragma once

#include "./AbstractSet.hpp"

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
	class TreeSet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TreeSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		TreeSet(QJniObject obj);
		
		// Constructors
		TreeSet();
		TreeSet(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		JObject ceiling(JObject arg0);
		void clear();
		JObject clone();
		JObject comparator();
		jboolean contains(JObject arg0);
		JObject descendingIterator();
		JObject descendingSet();
		JObject first();
		JObject floor(JObject arg0);
		JObject headSet(JObject arg0, jboolean arg1);
		JObject headSet(JObject arg0);
		JObject higher(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		JObject last();
		JObject lower(JObject arg0);
		JObject pollFirst();
		JObject pollLast();
		jboolean remove(JObject arg0);
		jint size();
		JObject spliterator();
		JObject subSet(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3);
		JObject subSet(JObject arg0, JObject arg1);
		JObject tailSet(JObject arg0, jboolean arg1);
		JObject tailSet(JObject arg0);
	};
} // namespace java::util

