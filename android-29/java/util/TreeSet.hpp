#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TreeSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		TreeSet(QAndroidJniObject obj);
		
		// Constructors
		TreeSet();
		TreeSet(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		jobject ceiling(jobject arg0);
		void clear();
		jobject clone();
		__JniBaseClass comparator();
		jboolean contains(jobject arg0);
		__JniBaseClass descendingIterator();
		__JniBaseClass descendingSet();
		jobject first();
		jobject floor(jobject arg0);
		__JniBaseClass headSet(jobject arg0, jboolean arg1);
		__JniBaseClass headSet(jobject arg0);
		jobject higher(jobject arg0);
		jboolean isEmpty();
		__JniBaseClass iterator();
		jobject last();
		jobject lower(jobject arg0);
		jobject pollFirst();
		jobject pollLast();
		jboolean remove(jobject arg0);
		jint size();
		__JniBaseClass spliterator();
		__JniBaseClass subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		__JniBaseClass subSet(jobject arg0, jobject arg1);
		__JniBaseClass tailSet(jobject arg0, jboolean arg1);
		__JniBaseClass tailSet(jobject arg0);
	};
} // namespace java::util

