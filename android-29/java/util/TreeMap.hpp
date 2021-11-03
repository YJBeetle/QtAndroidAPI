#pragma once

#include "./AbstractMap.hpp"

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
	class TreeMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TreeMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		TreeMap(QJniObject obj);
		
		// Constructors
		TreeMap();
		TreeMap(JObject arg0);
		
		// Methods
		JObject ceilingEntry(JObject arg0);
		JObject ceilingKey(JObject arg0);
		void clear();
		JObject clone();
		JObject comparator();
		JObject compute(JObject arg0, JObject arg1);
		JObject computeIfAbsent(JObject arg0, JObject arg1);
		JObject computeIfPresent(JObject arg0, JObject arg1);
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject descendingKeySet();
		JObject descendingMap();
		JObject entrySet();
		JObject firstEntry();
		JObject firstKey();
		JObject floorEntry(JObject arg0);
		JObject floorKey(JObject arg0);
		void forEach(JObject arg0);
		JObject get(JObject arg0);
		JObject headMap(JObject arg0, jboolean arg1);
		JObject headMap(JObject arg0);
		JObject higherEntry(JObject arg0);
		JObject higherKey(JObject arg0);
		JObject keySet();
		JObject lastEntry();
		JObject lastKey();
		JObject lowerEntry(JObject arg0);
		JObject lowerKey(JObject arg0);
		JObject merge(JObject arg0, JObject arg1, JObject arg2);
		JObject navigableKeySet();
		JObject pollFirstEntry();
		JObject pollLastEntry();
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject putIfAbsent(JObject arg0, JObject arg1);
		JObject remove(JObject arg0);
		jboolean replace(JObject arg0, JObject arg1, JObject arg2);
		JObject replace(JObject arg0, JObject arg1);
		void replaceAll(JObject arg0);
		jint size();
		JObject subMap(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3);
		JObject subMap(JObject arg0, JObject arg1);
		JObject tailMap(JObject arg0, jboolean arg1);
		JObject tailMap(JObject arg0);
		JObject values();
	};
} // namespace java::util

