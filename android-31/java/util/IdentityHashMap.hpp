#pragma once

#include "./AbstractMap.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IdentityHashMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		IdentityHashMap(QAndroidJniObject obj);
		
		// Constructors
		IdentityHashMap();
		IdentityHashMap(jint arg0);
		IdentityHashMap(JObject arg0);
		
		// Methods
		void clear();
		JObject clone();
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject entrySet();
		jboolean equals(JObject arg0);
		void forEach(JObject arg0);
		JObject get(JObject arg0);
		jint hashCode();
		jboolean isEmpty();
		JObject keySet();
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject remove(JObject arg0);
		void replaceAll(JObject arg0);
		jint size();
		JObject values();
	};
} // namespace java::util

