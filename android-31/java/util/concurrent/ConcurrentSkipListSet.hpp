#pragma once

#include "../../../__JniBaseClass.hpp"
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
		ConcurrentSkipListSet(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jobject ceiling(jobject arg0);
		void clear();
		java::util::concurrent::ConcurrentSkipListSet clone();
		__JniBaseClass comparator();
		jboolean contains(jobject arg0);
		__JniBaseClass descendingIterator();
		__JniBaseClass descendingSet();
		jboolean equals(jobject arg0);
		jobject first();
		jobject floor(jobject arg0);
		__JniBaseClass headSet(jobject arg0);
		__JniBaseClass headSet(jobject arg0, jboolean arg1);
		jobject higher(jobject arg0);
		jboolean isEmpty();
		__JniBaseClass iterator();
		jobject last();
		jobject lower(jobject arg0);
		jobject pollFirst();
		jobject pollLast();
		jboolean remove(jobject arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jint size();
		__JniBaseClass spliterator();
		__JniBaseClass subSet(jobject arg0, jobject arg1);
		__JniBaseClass subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		__JniBaseClass tailSet(jobject arg0);
		__JniBaseClass tailSet(jobject arg0, jboolean arg1);
	};
} // namespace java::util::concurrent

