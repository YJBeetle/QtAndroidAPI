#pragma once

#include "../AbstractMap.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConcurrentHashMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentHashMap(QAndroidJniObject obj);
		
		// Constructors
		ConcurrentHashMap();
		ConcurrentHashMap(jint arg0);
		ConcurrentHashMap(JObject arg0);
		ConcurrentHashMap(jint arg0, jfloat arg1);
		ConcurrentHashMap(jint arg0, jfloat arg1, jint arg2);
		
		// Methods
		static java::util::concurrent::ConcurrentHashMap_KeySetView newKeySet();
		static java::util::concurrent::ConcurrentHashMap_KeySetView newKeySet(jint arg0);
		void clear();
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
		void forEach(jlong arg0, JObject arg1);
		void forEach(jlong arg0, JObject arg1, JObject arg2);
		void forEachEntry(jlong arg0, JObject arg1);
		void forEachEntry(jlong arg0, JObject arg1, JObject arg2);
		void forEachKey(jlong arg0, JObject arg1);
		void forEachKey(jlong arg0, JObject arg1, JObject arg2);
		void forEachValue(jlong arg0, JObject arg1);
		void forEachValue(jlong arg0, JObject arg1, JObject arg2);
		JObject get(JObject arg0);
		JObject getOrDefault(JObject arg0, JObject arg1);
		jint hashCode();
		jboolean isEmpty();
		java::util::concurrent::ConcurrentHashMap_KeySetView keySet();
		java::util::concurrent::ConcurrentHashMap_KeySetView keySet(JObject arg0);
		JObject keys();
		jlong mappingCount();
		JObject merge(JObject arg0, JObject arg1, JObject arg2);
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject putIfAbsent(JObject arg0, JObject arg1);
		JObject reduce(jlong arg0, JObject arg1, JObject arg2);
		JObject reduceEntries(jlong arg0, JObject arg1, JObject arg2);
		JObject reduceEntries(jlong arg0, JObject arg1);
		jdouble reduceEntriesToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3);
		jint reduceEntriesToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3);
		jlong reduceEntriesToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3);
		JObject reduceKeys(jlong arg0, JObject arg1);
		JObject reduceKeys(jlong arg0, JObject arg1, JObject arg2);
		jdouble reduceKeysToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3);
		jint reduceKeysToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3);
		jlong reduceKeysToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3);
		jdouble reduceToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3);
		jint reduceToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3);
		jlong reduceToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3);
		JObject reduceValues(jlong arg0, JObject arg1);
		JObject reduceValues(jlong arg0, JObject arg1, JObject arg2);
		jdouble reduceValuesToDouble(jlong arg0, JObject arg1, jdouble arg2, JObject arg3);
		jint reduceValuesToInt(jlong arg0, JObject arg1, jint arg2, JObject arg3);
		jlong reduceValuesToLong(jlong arg0, JObject arg1, jlong arg2, JObject arg3);
		jboolean remove(JObject arg0, JObject arg1);
		JObject remove(JObject arg0);
		jboolean replace(JObject arg0, JObject arg1, JObject arg2);
		JObject replace(JObject arg0, JObject arg1);
		void replaceAll(JObject arg0);
		JObject search(jlong arg0, JObject arg1);
		JObject searchEntries(jlong arg0, JObject arg1);
		JObject searchKeys(jlong arg0, JObject arg1);
		JObject searchValues(jlong arg0, JObject arg1);
		jint size();
		JString toString();
		JObject values();
	};
} // namespace java::util::concurrent

