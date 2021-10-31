#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"

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
	class ArrayList : public java::util::AbstractList
	{
	public:
		// Fields
		
		ArrayList(QAndroidJniObject obj);
		// Constructors
		ArrayList();
		ArrayList(jint arg0);
		ArrayList(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(__JniBaseClass arg0);
		jboolean addAll(jint arg0, __JniBaseClass arg1);
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		void ensureCapacity(jint arg0);
		jboolean equals(jobject arg0);
		void forEach(__JniBaseClass arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jint lastIndexOf(jobject arg0);
		QAndroidJniObject listIterator();
		QAndroidJniObject listIterator(jint arg0);
		jboolean remove(jobject arg0);
		jobject remove(jint arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jboolean removeIf(__JniBaseClass arg0);
		void replaceAll(__JniBaseClass arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jobject set(jint arg0, jobject arg1);
		jint size();
		void sort(__JniBaseClass arg0);
		QAndroidJniObject spliterator();
		QAndroidJniObject subList(jint arg0, jint arg1);
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		void trimToSize();
	};
} // namespace java::util

