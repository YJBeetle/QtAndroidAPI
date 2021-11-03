#pragma once

#include "./HashMap.hpp"

class JObjectArray;
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;

namespace java::util
{
	class LinkedHashMap : public java::util::HashMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkedHashMap(const char *className, const char *sig, Ts...agv) : java::util::HashMap(className, sig, std::forward<Ts>(agv)...) {}
		LinkedHashMap(QJniObject obj);
		
		// Constructors
		LinkedHashMap();
		LinkedHashMap(jint arg0);
		LinkedHashMap(JObject arg0);
		LinkedHashMap(jint arg0, jfloat arg1);
		LinkedHashMap(jint arg0, jfloat arg1, jboolean arg2);
		
		// Methods
		void clear();
		jboolean containsValue(JObject arg0);
		JObject entrySet();
		void forEach(JObject arg0);
		JObject get(JObject arg0);
		JObject getOrDefault(JObject arg0, JObject arg1);
		JObject keySet();
		void replaceAll(JObject arg0);
		JObject values();
	};
} // namespace java::util

