#pragma once

#include "./AbstractMap.hpp"

class JObjectArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JClass;
class JObject;

namespace java::util
{
	class HashMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HashMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		HashMap(QJniObject obj);
		
		// Constructors
		HashMap();
		HashMap(jint arg0);
		HashMap(JObject arg0);
		HashMap(jint arg0, jfloat arg1);
		
		// Methods
		void clear();
		JObject clone();
		JObject compute(JObject arg0, JObject arg1);
		JObject computeIfAbsent(JObject arg0, JObject arg1);
		JObject computeIfPresent(JObject arg0, JObject arg1);
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject entrySet();
		void forEach(JObject arg0);
		JObject get(JObject arg0);
		JObject getOrDefault(JObject arg0, JObject arg1);
		jboolean isEmpty();
		JObject keySet();
		JObject merge(JObject arg0, JObject arg1, JObject arg2);
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject putIfAbsent(JObject arg0, JObject arg1);
		jboolean remove(JObject arg0, JObject arg1);
		JObject remove(JObject arg0);
		jboolean replace(JObject arg0, JObject arg1, JObject arg2);
		JObject replace(JObject arg0, JObject arg1);
		void replaceAll(JObject arg0);
		jint size();
		JObject values();
	};
} // namespace java::util

