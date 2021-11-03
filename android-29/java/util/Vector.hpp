#pragma once

#include "./AbstractList.hpp"

class JLongArray;
class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;

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
		jboolean add(JObject arg0);
		void add(jint arg0, JObject arg1);
		jboolean addAll(JObject arg0);
		jboolean addAll(jint arg0, JObject arg1);
		void addElement(JObject arg0);
		jint capacity();
		void clear();
		JObject clone();
		jboolean contains(JObject arg0);
		jboolean containsAll(JObject arg0);
		void copyInto(JObjectArray arg0);
		JObject elementAt(jint arg0);
		JObject elements();
		void ensureCapacity(jint arg0);
		jboolean equals(JObject arg0);
		JObject firstElement();
		void forEach(JObject arg0);
		JObject get(jint arg0);
		jint hashCode();
		jint indexOf(JObject arg0);
		jint indexOf(JObject arg0, jint arg1);
		void insertElementAt(JObject arg0, jint arg1);
		jboolean isEmpty();
		JObject iterator();
		JObject lastElement();
		jint lastIndexOf(JObject arg0);
		jint lastIndexOf(JObject arg0, jint arg1);
		JObject listIterator();
		JObject listIterator(jint arg0);
		jboolean remove(JObject arg0);
		JObject remove(jint arg0);
		jboolean removeAll(JObject arg0);
		void removeAllElements();
		jboolean removeElement(JObject arg0);
		void removeElementAt(jint arg0);
		jboolean removeIf(JObject arg0);
		void replaceAll(JObject arg0);
		jboolean retainAll(JObject arg0);
		JObject set(jint arg0, JObject arg1);
		void setElementAt(JObject arg0, jint arg1);
		void setSize(jint arg0);
		jint size();
		void sort(JObject arg0);
		JObject spliterator();
		JObject subList(jint arg0, jint arg1);
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
		JString toString();
		void trimToSize();
	};
} // namespace java::util

