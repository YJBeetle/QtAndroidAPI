#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class AbstractMap : public __JniBaseClass
	{
	public:
		// Fields
		
		AbstractMap(QAndroidJniObject obj);
		// Constructors
		AbstractMap() = default;
		
		// Methods
		void clear();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject entrySet();
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		jint hashCode();
		jboolean isEmpty();
		QAndroidJniObject keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject remove(jobject arg0);
		jint size();
		jstring toString();
		QAndroidJniObject values();
	};
} // namespace java::util

