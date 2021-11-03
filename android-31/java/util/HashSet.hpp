#pragma once

#include "./AbstractSet.hpp"

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
namespace java::util
{
	class HashMap;
}

namespace java::util
{
	class HashSet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HashSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		HashSet(QJniObject obj);
		
		// Constructors
		HashSet();
		HashSet(jint arg0);
		HashSet(JObject arg0);
		HashSet(jint arg0, jfloat arg1);
		
		// Methods
		jboolean add(JObject arg0) const;
		void clear() const;
		JObject clone() const;
		jboolean contains(JObject arg0) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		jboolean remove(JObject arg0) const;
		jint size() const;
		JObject spliterator() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
	};
} // namespace java::util

