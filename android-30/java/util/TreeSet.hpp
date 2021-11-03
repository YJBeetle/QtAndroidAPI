#pragma once

#include "../../JObject.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"

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
		jboolean add(jobject arg0);
		jboolean addAll(JObject arg0);
		jobject ceiling(jobject arg0);
		void clear();
		jobject clone();
		JObject comparator();
		jboolean contains(jobject arg0);
		JObject descendingIterator();
		JObject descendingSet();
		jobject first();
		jobject floor(jobject arg0);
		JObject headSet(jobject arg0, jboolean arg1);
		JObject headSet(jobject arg0);
		jobject higher(jobject arg0);
		jboolean isEmpty();
		JObject iterator();
		jobject last();
		jobject lower(jobject arg0);
		jobject pollFirst();
		jobject pollLast();
		jboolean remove(jobject arg0);
		jint size();
		JObject spliterator();
		JObject subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		JObject subSet(jobject arg0, jobject arg1);
		JObject tailSet(jobject arg0, jboolean arg1);
		JObject tailSet(jobject arg0);
	};
} // namespace java::util

