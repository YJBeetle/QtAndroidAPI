#pragma once

#include "../../../JObject.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractSet.hpp"

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
		ConcurrentSkipListSet(QAndroidJniObject obj);
		
		// Constructors
		ConcurrentSkipListSet();
		ConcurrentSkipListSet(JObject arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jobject ceiling(jobject arg0);
		void clear();
		java::util::concurrent::ConcurrentSkipListSet clone();
		JObject comparator();
		jboolean contains(jobject arg0);
		JObject descendingIterator();
		JObject descendingSet();
		jboolean equals(jobject arg0);
		jobject first();
		jobject floor(jobject arg0);
		JObject headSet(jobject arg0);
		JObject headSet(jobject arg0, jboolean arg1);
		jobject higher(jobject arg0);
		jboolean isEmpty();
		JObject iterator();
		jobject last();
		jobject lower(jobject arg0);
		jobject pollFirst();
		jobject pollLast();
		jboolean remove(jobject arg0);
		jboolean removeAll(JObject arg0);
		jint size();
		JObject spliterator();
		JObject subSet(jobject arg0, jobject arg1);
		JObject subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		JObject tailSet(jobject arg0);
		JObject tailSet(jobject arg0, jboolean arg1);
	};
} // namespace java::util::concurrent

