#pragma once

#include "../../../JObject.hpp"
#include "../AbstractMap.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::util
{
	class AbstractMap_SimpleImmutableEntry;
}
namespace java::util::concurrent::atomic
{
	class LongAdder;
}

namespace java::util::concurrent
{
	class ConcurrentSkipListMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConcurrentSkipListMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentSkipListMap(QJniObject obj);
		
		// Constructors
		ConcurrentSkipListMap();
		ConcurrentSkipListMap(JObject arg0);
		
		// Methods
		JObject ceilingEntry(jobject arg0);
		jobject ceilingKey(jobject arg0);
		void clear();
		java::util::concurrent::ConcurrentSkipListMap clone();
		JObject comparator();
		jobject compute(jobject arg0, JObject arg1);
		jobject computeIfAbsent(jobject arg0, JObject arg1);
		jobject computeIfPresent(jobject arg0, JObject arg1);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		JObject descendingKeySet();
		JObject descendingMap();
		JObject entrySet();
		jboolean equals(jobject arg0);
		JObject firstEntry();
		jobject firstKey();
		JObject floorEntry(jobject arg0);
		jobject floorKey(jobject arg0);
		void forEach(JObject arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		JObject headMap(jobject arg0);
		JObject headMap(jobject arg0, jboolean arg1);
		JObject higherEntry(jobject arg0);
		jobject higherKey(jobject arg0);
		jboolean isEmpty();
		JObject keySet();
		JObject lastEntry();
		jobject lastKey();
		JObject lowerEntry(jobject arg0);
		jobject lowerKey(jobject arg0);
		jobject merge(jobject arg0, jobject arg1, JObject arg2);
		JObject navigableKeySet();
		JObject pollFirstEntry();
		JObject pollLastEntry();
		jobject put(jobject arg0, jobject arg1);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(JObject arg0);
		jint size();
		JObject subMap(jobject arg0, jobject arg1);
		JObject subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		JObject tailMap(jobject arg0);
		JObject tailMap(jobject arg0, jboolean arg1);
		JObject values();
	};
} // namespace java::util::concurrent

