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
		JObject ceilingEntry(JObject arg0) const;
		JObject ceilingKey(JObject arg0) const;
		void clear() const;
		JObject clone() const;
		JObject comparator() const;
		JObject compute(JObject arg0, JObject arg1) const;
		JObject computeIfAbsent(JObject arg0, JObject arg1) const;
		JObject computeIfPresent(JObject arg0, JObject arg1) const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		JObject descendingKeySet() const;
		JObject descendingMap() const;
		JObject entrySet() const;
		JObject firstEntry() const;
		JObject firstKey() const;
		JObject floorEntry(JObject arg0) const;
		JObject floorKey(JObject arg0) const;
		void forEach(JObject arg0) const;
		JObject get(JObject arg0) const;
		JObject headMap(JObject arg0, jboolean arg1) const;
		JObject headMap(JObject arg0) const;
		JObject higherEntry(JObject arg0) const;
		JObject higherKey(JObject arg0) const;
		JObject keySet() const;
		JObject lastEntry() const;
		JObject lastKey() const;
		JObject lowerEntry(JObject arg0) const;
		JObject lowerKey(JObject arg0) const;
		JObject merge(JObject arg0, JObject arg1, JObject arg2) const;
		JObject navigableKeySet() const;
		JObject pollFirstEntry() const;
		JObject pollLastEntry() const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject putIfAbsent(JObject arg0, JObject arg1) const;
		JObject remove(JObject arg0) const;
		jboolean replace(JObject arg0, JObject arg1, JObject arg2) const;
		JObject replace(JObject arg0, JObject arg1) const;
		void replaceAll(JObject arg0) const;
		jint size() const;
		JObject subMap(JObject arg0, jboolean arg1, JObject arg2, jboolean arg3) const;
		JObject subMap(JObject arg0, JObject arg1) const;
		JObject tailMap(JObject arg0, jboolean arg1) const;
		JObject tailMap(JObject arg0) const;
		JObject values() const;
	};
} // namespace java::util

