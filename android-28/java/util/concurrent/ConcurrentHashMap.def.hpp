#pragma once

#include "../AbstractMap.def.hpp"

class JArray;
class JArray;
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
class JString;
namespace java::util::concurrent
{
	class ConcurrentHashMap_KeySetView;
}

namespace java::util::concurrent
{
	class ConcurrentHashMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConcurrentHashMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentHashMap(QJniObject obj) : java::util::AbstractMap(obj) {}
		
		// Constructors
		ConcurrentHashMap();
		ConcurrentHashMap(jint arg0);
		ConcurrentHashMap(JObject arg0);
		ConcurrentHashMap(jint arg0, jfloat arg1);
		ConcurrentHashMap(jint arg0, jfloat arg1, jint arg2);
		
		// Methods
		static java::util::concurrent::ConcurrentHashMap_KeySetView newKeySet();
		static java::util::concurrent::ConcurrentHashMap_KeySetView newKeySet(jint arg0);
		void clear() const;
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
		void forEach(jlong arg0, JObject arg1) const;
		void forEach(jlong arg0, JObject arg1, JObject arg2) const;
		void forEachEntry(jlong arg0, JObject arg1) const;
		void forEachEntry(jlong arg0, JObject arg1, JObject arg2) const;
		void forEachKey(jlong arg0, JObject arg1) const;
		void forEachKey(jlong arg0, JObject arg1, JObject arg2) const;
		void forEachValue(jlong arg0, JObject arg1) const;
		void forEachValue(jlong arg0, JObject arg1, JObject arg2) const;
		JObject get(JObject arg0) const;
		JObject getOrDefault(JObject arg0, JObject arg1) const;
		jint hashCode() const;
		jboolean isEmpty() const;
		java::util::concurrent::ConcurrentHashMap_KeySetView keySet() const;
		java::util::concurrent::ConcurrentHashMap_KeySetView keySet(JObject arg0) const;
		JObject keys() const;
		jlong mappingCount() const;
		JObject merge(JObject arg0, JObject arg1, JObject arg2) const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject putIfAbsent(JObject arg0, JObject arg1) const;
		JObject reduce(jlong arg0, JObject arg1, JObject arg2) const;
		JObject reduceEntries(jlong arg0, JObject arg1, JObject arg2) const;
		JObject reduceEntries(jlong arg0, JObject arg1) const;
		jdouble reduceEntriesToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const;
		jint reduceEntriesToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const;
		jlong reduceEntriesToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const;
		JObject reduceKeys(jlong arg0, JObject arg1) const;
		JObject reduceKeys(jlong arg0, JObject arg1, JObject arg2) const;
		jdouble reduceKeysToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const;
		jint reduceKeysToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const;
		jlong reduceKeysToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const;
		jdouble reduceToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const;
		jint reduceToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const;
		jlong reduceToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const;
		JObject reduceValues(jlong arg0, JObject arg1) const;
		JObject reduceValues(jlong arg0, JObject arg1, JObject arg2) const;
		jdouble reduceValuesToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3) const;
		jint reduceValuesToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3) const;
		jlong reduceValuesToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3) const;
		jboolean remove(JObject arg0, JObject arg1) const;
		JObject remove(JObject arg0) const;
		jboolean replace(JObject arg0, JObject arg1, JObject arg2) const;
		JObject replace(JObject arg0, JObject arg1) const;
		void replaceAll(JObject arg0) const;
		JObject search(jlong arg0, JObject arg1) const;
		JObject searchEntries(jlong arg0, JObject arg1) const;
		JObject searchKeys(jlong arg0, JObject arg1) const;
		JObject searchValues(jlong arg0, JObject arg1) const;
		jint size() const;
		JString toString() const;
		JObject values() const;
	};
} // namespace java::util::concurrent

