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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TreeSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		TreeSet(QAndroidJniObject obj);
		
		// Constructors
		TreeSet();
		TreeSet(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		JObject ceiling(JObject arg0) const;
		void clear() const;
		JObject clone() const;
		JObject comparator() const;
		jboolean contains(JObject arg0) const;
		JObject descendingIterator() const;
		JObject descendingSet() const;
		JObject first() const;
		JObject floor(JObject arg0) const;
		JObject headSet(JObject arg0, jboolean arg1) const;
		JObject headSet(JObject arg0) const;
		JObject higher(JObject arg0) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		JObject last() const;
		JObject lower(JObject arg0) const;
		JObject pollFirst() const;
		JObject pollLast() const;
		jboolean remove(JObject arg0) const;
		jint size() const;
		JObject spliterator() const;
		JObject subSet(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3) const;
		JObject subSet(JObject arg0, JObject arg1) const;
		JObject tailSet(JObject arg0, jboolean arg1) const;
		JObject tailSet(JObject arg0) const;
	};
} // namespace java::util

