#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractMap.hpp"

namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::util
{
	class WeakHashMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		WeakHashMap(QAndroidJniObject obj);
		// Constructors
		WeakHashMap();
		WeakHashMap(jint arg0);
		WeakHashMap(__JniBaseClass arg0);
		WeakHashMap(jint arg0, jfloat arg1);
		
		// Methods
		void clear();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject entrySet();
		void forEach(__JniBaseClass arg0);
		jobject get(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject remove(jobject arg0);
		void replaceAll(__JniBaseClass arg0);
		jint size();
		QAndroidJniObject values();
	};
} // namespace java::util

