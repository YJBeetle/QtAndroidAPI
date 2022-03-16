#pragma once

#include "./AbstractMap.def.hpp"

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
	class IdentityHashMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityHashMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		IdentityHashMap(QJniObject obj) : java::util::AbstractMap(obj) {}
		
		// Constructors
		IdentityHashMap();
		IdentityHashMap(jint arg0);
		IdentityHashMap(JObject arg0);
		
		// Methods
		void clear() const;
		JObject clone() const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		JObject entrySet() const;
		jboolean equals(JObject arg0) const;
		void forEach(JObject arg0) const;
		JObject get(JObject arg0) const;
		jint hashCode() const;
		jboolean isEmpty() const;
		JObject keySet() const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject remove(JObject arg0) const;
		void replaceAll(JObject arg0) const;
		jint size() const;
		JObject values() const;
	};
} // namespace java::util

