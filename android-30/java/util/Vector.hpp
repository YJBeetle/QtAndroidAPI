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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Vector(const char *className, const char *sig, Ts...agv) : java::util::AbstractList(className, sig, std::forward<Ts>(agv)...) {}
		Vector(QAndroidJniObject obj) : java::util::AbstractList(obj) {}
		
		// Constructors
		Vector();
		Vector(jint arg0);
		Vector(JObject arg0);
		Vector(jint arg0, jint arg1);
		
		// Methods
		jboolean add(JObject arg0) const;
		void add(jint arg0, JObject arg1) const;
		jboolean addAll(JObject arg0) const;
		jboolean addAll(jint arg0, JObject arg1) const;
		void addElement(JObject arg0) const;
		jint capacity() const;
		void clear() const;
		JObject clone() const;
		jboolean contains(JObject arg0) const;
		jboolean containsAll(JObject arg0) const;
		void copyInto(JObjectArray arg0) const;
		JObject elementAt(jint arg0) const;
		JObject elements() const;
		void ensureCapacity(jint arg0) const;
		jboolean equals(JObject arg0) const;
		JObject firstElement() const;
		void forEach(JObject arg0) const;
		JObject get(jint arg0) const;
		jint hashCode() const;
		jint indexOf(JObject arg0) const;
		jint indexOf(JObject arg0, jint arg1) const;
		void insertElementAt(JObject arg0, jint arg1) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		JObject lastElement() const;
		jint lastIndexOf(JObject arg0) const;
		jint lastIndexOf(JObject arg0, jint arg1) const;
		JObject listIterator() const;
		JObject listIterator(jint arg0) const;
		jboolean remove(JObject arg0) const;
		JObject remove(jint arg0) const;
		jboolean removeAll(JObject arg0) const;
		void removeAllElements() const;
		jboolean removeElement(JObject arg0) const;
		void removeElementAt(jint arg0) const;
		jboolean removeIf(JObject arg0) const;
		void replaceAll(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		JObject set(jint arg0, JObject arg1) const;
		void setElementAt(JObject arg0, jint arg1) const;
		void setSize(jint arg0) const;
		jint size() const;
		void sort(JObject arg0) const;
		JObject spliterator() const;
		JObject subList(jint arg0, jint arg1) const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
		JString toString() const;
		void trimToSize() const;
	};
} // namespace java::util

