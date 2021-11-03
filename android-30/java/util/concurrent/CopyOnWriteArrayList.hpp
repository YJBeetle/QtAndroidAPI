#pragma once

#include "../../../JObject.hpp"

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
namespace java::lang::reflect
{
	class Field;
}

namespace java::util::concurrent
{
	class CopyOnWriteArrayList : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CopyOnWriteArrayList(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CopyOnWriteArrayList(QJniObject obj);
		
		// Constructors
		CopyOnWriteArrayList();
		CopyOnWriteArrayList(JObjectArray arg0);
		CopyOnWriteArrayList(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0);
		void add(jint arg0, JObject arg1);
		jboolean addAll(JObject arg0);
		jboolean addAll(jint arg0, JObject arg1);
		jint addAllAbsent(JObject arg0);
		jboolean addIfAbsent(JObject arg0);
		void clear();
		JObject clone();
		jboolean contains(JObject arg0);
		jboolean containsAll(JObject arg0);
		jboolean equals(JObject arg0);
		void forEach(JObject arg0);
		JObject get(jint arg0);
		jint hashCode();
		jint indexOf(JObject arg0);
		jint indexOf(JObject arg0, jint arg1);
		jboolean isEmpty();
		JObject iterator();
		jint lastIndexOf(JObject arg0);
		jint lastIndexOf(JObject arg0, jint arg1);
		JObject listIterator();
		JObject listIterator(jint arg0);
		jboolean remove(JObject arg0);
		JObject remove(jint arg0);
		jboolean removeAll(JObject arg0);
		jboolean removeIf(JObject arg0);
		void replaceAll(JObject arg0);
		jboolean retainAll(JObject arg0);
		JObject set(jint arg0, JObject arg1);
		jint size();
		void sort(JObject arg0);
		JObject spliterator();
		JObject subList(jint arg0, jint arg1);
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
		JString toString();
	};
} // namespace java::util::concurrent

