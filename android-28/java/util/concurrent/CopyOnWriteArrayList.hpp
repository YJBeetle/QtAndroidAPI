#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang::reflect
{
	class Field;
}

namespace java::util::concurrent
{
	class CopyOnWriteArrayList : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CopyOnWriteArrayList(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CopyOnWriteArrayList(QJniObject obj);
		
		// Constructors
		CopyOnWriteArrayList();
		CopyOnWriteArrayList(jobjectArray arg0);
		CopyOnWriteArrayList(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(__JniBaseClass arg0);
		jboolean addAll(jint arg0, __JniBaseClass arg1);
		jint addAllAbsent(__JniBaseClass arg0);
		jboolean addIfAbsent(jobject arg0);
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		jboolean containsAll(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		void forEach(__JniBaseClass arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jint indexOf(jobject arg0, jint arg1);
		jboolean isEmpty();
		__JniBaseClass iterator();
		jint lastIndexOf(jobject arg0);
		jint lastIndexOf(jobject arg0, jint arg1);
		__JniBaseClass listIterator();
		__JniBaseClass listIterator(jint arg0);
		jboolean remove(jobject arg0);
		jobject remove(jint arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jboolean removeIf(__JniBaseClass arg0);
		void replaceAll(__JniBaseClass arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jobject set(jint arg0, jobject arg1);
		jint size();
		void sort(__JniBaseClass arg0);
		__JniBaseClass spliterator();
		__JniBaseClass subList(jint arg0, jint arg1);
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace java::util::concurrent

