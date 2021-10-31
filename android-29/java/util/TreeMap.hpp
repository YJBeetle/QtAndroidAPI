#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractMap.hpp"

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
	class TreeMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		TreeMap(QAndroidJniObject obj);
		// Constructors
		TreeMap();
		TreeMap(__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject ceilingEntry(jobject arg0);
		jobject ceilingKey(jobject arg0);
		void clear();
		jobject clone();
		QAndroidJniObject comparator();
		jobject compute(jobject arg0, __JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __JniBaseClass arg1);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject descendingKeySet();
		QAndroidJniObject descendingMap();
		QAndroidJniObject entrySet();
		QAndroidJniObject firstEntry();
		jobject firstKey();
		QAndroidJniObject floorEntry(jobject arg0);
		jobject floorKey(jobject arg0);
		void forEach(__JniBaseClass arg0);
		jobject get(jobject arg0);
		QAndroidJniObject headMap(jobject arg0, jboolean arg1);
		QAndroidJniObject headMap(jobject arg0);
		QAndroidJniObject higherEntry(jobject arg0);
		jobject higherKey(jobject arg0);
		QAndroidJniObject keySet();
		QAndroidJniObject lastEntry();
		jobject lastKey();
		QAndroidJniObject lowerEntry(jobject arg0);
		jobject lowerKey(jobject arg0);
		jobject merge(jobject arg0, jobject arg1, __JniBaseClass arg2);
		QAndroidJniObject navigableKeySet();
		QAndroidJniObject pollFirstEntry();
		QAndroidJniObject pollLastEntry();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__JniBaseClass arg0);
		jint size();
		QAndroidJniObject subMap(jobject arg0, jboolean arg1, jobject arg2, jboolean arg3);
		QAndroidJniObject subMap(jobject arg0, jobject arg1);
		QAndroidJniObject tailMap(jobject arg0, jboolean arg1);
		QAndroidJniObject tailMap(jobject arg0);
		QAndroidJniObject values();
	};
} // namespace java::util

