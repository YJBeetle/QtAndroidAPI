#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Vector(const char *className, const char *sig, Ts...agv) : java::util::AbstractList(className, sig, std::forward<Ts>(agv)...) {}
		Vector(QJniObject obj);
		
		// Constructors
		Vector();
		Vector(jint arg0);
		Vector(JObject arg0);
		Vector(jint arg0, jint arg1);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(JObject arg0);
		jboolean addAll(jint arg0, JObject arg1);
		void addElement(jobject arg0);
		jint capacity();
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		jboolean containsAll(JObject arg0);
		void copyInto(jobjectArray arg0);
		jobject elementAt(jint arg0);
		JObject elements();
		void ensureCapacity(jint arg0);
		jboolean equals(jobject arg0);
		jobject firstElement();
		void forEach(JObject arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jint indexOf(jobject arg0, jint arg1);
		void insertElementAt(jobject arg0, jint arg1);
		jboolean isEmpty();
		JObject iterator();
		jobject lastElement();
		jint lastIndexOf(jobject arg0);
		jint lastIndexOf(jobject arg0, jint arg1);
		JObject listIterator();
		JObject listIterator(jint arg0);
		jboolean remove(jobject arg0);
		jobject remove(jint arg0);
		jboolean removeAll(JObject arg0);
		void removeAllElements();
		jboolean removeElement(jobject arg0);
		void removeElementAt(jint arg0);
		jboolean removeIf(JObject arg0);
		void replaceAll(JObject arg0);
		jboolean retainAll(JObject arg0);
		jobject set(jint arg0, jobject arg1);
		void setElementAt(jobject arg0, jint arg1);
		void setSize(jint arg0);
		jint size();
		void sort(JObject arg0);
		JObject spliterator();
		JObject subList(jint arg0, jint arg1);
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
		void trimToSize();
	};
} // namespace java::util

