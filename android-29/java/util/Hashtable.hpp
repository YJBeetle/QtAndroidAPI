#pragma once

#include "./Dictionary.hpp"

class JArray;
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
namespace java::lang
{
	class Void;
}

namespace java::util
{
	class Hashtable : public java::util::Dictionary
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Hashtable(const char *className, const char *sig, Ts...agv) : java::util::Dictionary(className, sig, std::forward<Ts>(agv)...) {}
		Hashtable(QJniObject obj);
		
		// Constructors
		Hashtable();
		Hashtable(jint arg0);
		Hashtable(JObject arg0);
		Hashtable(jint arg0, jfloat arg1);
		
		// Methods
		void clear();
		JObject clone();
		JObject compute(JObject arg0, JObject arg1);
		JObject computeIfAbsent(JObject arg0, JObject arg1);
		JObject computeIfPresent(JObject arg0, JObject arg1);
		jboolean contains(JObject arg0);
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject elements();
		JObject entrySet();
		jboolean equals(JObject arg0);
		void forEach(JObject arg0);
		JObject get(JObject arg0);
		JObject getOrDefault(JObject arg0, JObject arg1);
		jint hashCode();
		jboolean isEmpty();
		JObject keySet();
		JObject keys();
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
		JString toString();
		JObject values();
	};
} // namespace java::util

