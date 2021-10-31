#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class ArrayMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrayMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ArrayMap(QAndroidJniObject obj);
		
		// Constructors
		ArrayMap();
		ArrayMap(android::util::ArrayMap &arg0);
		ArrayMap(jint arg0);
		
		// Methods
		void clear();
		jboolean containsAll(__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		void ensureCapacity(jint arg0);
		__JniBaseClass entrySet();
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		jint hashCode();
		jint indexOfKey(jobject arg0);
		jboolean isEmpty();
		jobject keyAt(jint arg0);
		__JniBaseClass keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(android::util::ArrayMap arg0);
		void putAll(__JniBaseClass arg0);
		jobject remove(jobject arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jobject removeAt(jint arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jobject setValueAt(jint arg0, jobject arg1);
		jint size();
		jstring toString();
		jobject valueAt(jint arg0);
		__JniBaseClass values();
	};
} // namespace android::util

