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
		void clear() const;
		JObject clone() const;
		JObject compute(JObject arg0, JObject arg1) const;
		JObject computeIfAbsent(JObject arg0, JObject arg1) const;
		JObject computeIfPresent(JObject arg0, JObject arg1) const;
		jboolean contains(JObject arg0) const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		JObject elements() const;
		JObject entrySet() const;
		jboolean equals(JObject arg0) const;
		void forEach(JObject arg0) const;
		JObject get(JObject arg0) const;
		JObject getOrDefault(JObject arg0, JObject arg1) const;
		jint hashCode() const;
		jboolean isEmpty() const;
		JObject keySet() const;
		JObject keys() const;
		JObject merge(JObject arg0, JObject arg1, JObject arg2) const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject putIfAbsent(JObject arg0, JObject arg1) const;
		jboolean remove(JObject arg0, JObject arg1) const;
		JObject remove(JObject arg0) const;
		jboolean replace(JObject arg0, JObject arg1, JObject arg2) const;
		JObject replace(JObject arg0, JObject arg1) const;
		void replaceAll(JObject arg0) const;
		jint size() const;
		JString toString() const;
		JObject values() const;
	};
} // namespace java::util

