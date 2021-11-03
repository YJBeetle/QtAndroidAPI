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
	class ArrayList : public java::util::AbstractList
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrayList(const char *className, const char *sig, Ts...agv) : java::util::AbstractList(className, sig, std::forward<Ts>(agv)...) {}
		ArrayList(QAndroidJniObject obj);
		
		// Constructors
		ArrayList();
		ArrayList(jint arg0);
		ArrayList(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		void add(jint arg0, JObject arg1) const;
		jboolean addAll(JObject arg0) const;
		jboolean addAll(jint arg0, JObject arg1) const;
		void clear() const;
		JObject clone() const;
		jboolean contains(JObject arg0) const;
		void ensureCapacity(jint arg0) const;
		jboolean equals(JObject arg0) const;
		void forEach(JObject arg0) const;
		JObject get(jint arg0) const;
		jint hashCode() const;
		jint indexOf(JObject arg0) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		jint lastIndexOf(JObject arg0) const;
		JObject listIterator() const;
		JObject listIterator(jint arg0) const;
		jboolean remove(JObject arg0) const;
		JObject remove(jint arg0) const;
		jboolean removeAll(JObject arg0) const;
		jboolean removeIf(JObject arg0) const;
		void replaceAll(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		JObject set(jint arg0, JObject arg1) const;
		jint size() const;
		void sort(JObject arg0) const;
		JObject spliterator() const;
		JObject subList(jint arg0, jint arg1) const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
		void trimToSize() const;
	};
} // namespace java::util

