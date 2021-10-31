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
	class Vector : public java::util::AbstractList
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Vector(const char *className, const char *sig, Ts...agv) : java::util::AbstractList(className, sig, std::forward<Ts>(agv)...) {}
		Vector(QAndroidJniObject obj);
		
		// Constructors
		Vector();
		Vector(jint arg0);
		Vector(__JniBaseClass arg0);
		Vector(jint arg0, jint arg1);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(__JniBaseClass arg0);
		jboolean addAll(jint arg0, __JniBaseClass arg1);
		void addElement(jobject arg0);
		jint capacity();
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		jboolean containsAll(__JniBaseClass arg0);
		void copyInto(jobjectArray arg0);
		jobject elementAt(jint arg0);
		__JniBaseClass elements();
		void ensureCapacity(jint arg0);
		jboolean equals(jobject arg0);
		jobject firstElement();
		void forEach(__JniBaseClass arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jint indexOf(jobject arg0, jint arg1);
		void insertElementAt(jobject arg0, jint arg1);
		jboolean isEmpty();
		__JniBaseClass iterator();
		jobject lastElement();
		jint lastIndexOf(jobject arg0);
		jint lastIndexOf(jobject arg0, jint arg1);
		__JniBaseClass listIterator();
		__JniBaseClass listIterator(jint arg0);
		jboolean remove(jobject arg0);
		jobject remove(jint arg0);
		jboolean removeAll(__JniBaseClass arg0);
		void removeAllElements();
		jboolean removeElement(jobject arg0);
		void removeElementAt(jint arg0);
		jboolean removeIf(__JniBaseClass arg0);
		void replaceAll(__JniBaseClass arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jobject set(jint arg0, jobject arg1);
		void setElementAt(jobject arg0, jint arg1);
		void setSize(jint arg0);
		jint size();
		void sort(__JniBaseClass arg0);
		__JniBaseClass spliterator();
		__JniBaseClass subList(jint arg0, jint arg1);
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
		void trimToSize();
	};
} // namespace java::util

