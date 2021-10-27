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
		
		TreeSet(QAndroidJniObject obj);
		// Constructors
		TreeSet();
		TreeSet(__JniBaseClass &arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		jobject ceiling(jobject arg0);
		void clear();
		jobject clone();
		QAndroidJniObject comparator();
		jboolean contains(jobject arg0);
		QAndroidJniObject descendingIterator();
		QAndroidJniObject descendingSet();
		jobject first();
		jobject floor(jobject arg0);
		QAndroidJniObject headSet(jobject arg0, jboolean arg1);
		QAndroidJniObject headSet(jobject arg0);
		jobject higher(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jobject last();
		jobject lower(jobject arg0);
		jobject pollFirst();
		jobject pollLast();
		jboolean remove(jobject arg0);
		jint size();
		QAndroidJniObject spliterator();
		QAndroidJniObject subSet(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		QAndroidJniObject subSet(jobject arg0, jobject arg1);
		QAndroidJniObject tailSet(jobject arg0, jboolean arg1);
		QAndroidJniObject tailSet(jobject arg0);
	};
} // namespace java::util

