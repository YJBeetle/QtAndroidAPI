#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../AbstractMap.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
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
		ConcurrentHashMap(__JniBaseClass arg0);
		ConcurrentHashMap(jint arg0, jfloat arg1);
		ConcurrentHashMap(jint arg0, jfloat arg1, jint arg2);
		
		// Methods
		static java::util::concurrent::ConcurrentHashMap_KeySetView newKeySet();
		static java::util::concurrent::ConcurrentHashMap_KeySetView newKeySet(jint arg0);
		void clear();
		jobject compute(jobject arg0, __JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __JniBaseClass arg1);
		jboolean contains(jobject arg0);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		__JniBaseClass elements();
		__JniBaseClass entrySet();
		jboolean equals(jobject arg0);
		void forEach(__JniBaseClass arg0);
		void forEach(jlong arg0, __JniBaseClass arg1);
		void forEach(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void forEachEntry(jlong arg0, __JniBaseClass arg1);
		void forEachEntry(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void forEachKey(jlong arg0, __JniBaseClass arg1);
		void forEachKey(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void forEachValue(jlong arg0, __JniBaseClass arg1);
		void forEachValue(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		jint hashCode();
		jboolean isEmpty();
		java::util::concurrent::ConcurrentHashMap_KeySetView keySet();
		java::util::concurrent::ConcurrentHashMap_KeySetView keySet(jobject arg0);
		__JniBaseClass keys();
		jlong mappingCount();
		jobject merge(jobject arg0, jobject arg1, __JniBaseClass arg2);
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jobject reduce(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		jobject reduceEntries(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		__JniBaseClass reduceEntries(jlong arg0, __JniBaseClass arg1);
		jdouble reduceEntriesToDouble(jlong arg0, __JniBaseClass arg1, jdouble arg2, __JniBaseClass arg3);
		jint reduceEntriesToInt(jlong arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3);
		jlong reduceEntriesToLong(jlong arg0, __JniBaseClass arg1, jlong arg2, __JniBaseClass arg3);
		jobject reduceKeys(jlong arg0, __JniBaseClass arg1);
		jobject reduceKeys(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		jdouble reduceKeysToDouble(jlong arg0, __JniBaseClass arg1, jdouble arg2, __JniBaseClass arg3);
		jint reduceKeysToInt(jlong arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3);
		jlong reduceKeysToLong(jlong arg0, __JniBaseClass arg1, jlong arg2, __JniBaseClass arg3);
		jdouble reduceToDouble(jlong arg0, __JniBaseClass arg1, jdouble arg2, __JniBaseClass arg3);
		jint reduceToInt(jlong arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3);
		jlong reduceToLong(jlong arg0, __JniBaseClass arg1, jlong arg2, __JniBaseClass arg3);
		jobject reduceValues(jlong arg0, __JniBaseClass arg1);
		jobject reduceValues(jlong arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		jdouble reduceValuesToDouble(jlong arg0, __JniBaseClass arg1, jdouble arg2, __JniBaseClass arg3);
		jint reduceValuesToInt(jlong arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3);
		jlong reduceValuesToLong(jlong arg0, __JniBaseClass arg1, jlong arg2, __JniBaseClass arg3);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__JniBaseClass arg0);
		jobject search(jlong arg0, __JniBaseClass arg1);
		jobject searchEntries(jlong arg0, __JniBaseClass arg1);
		jobject searchKeys(jlong arg0, __JniBaseClass arg1);
		jobject searchValues(jlong arg0, __JniBaseClass arg1);
		jint size();
		jstring toString();
		__JniBaseClass values();
	};
} // namespace java::util::concurrent

