#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class AbstractMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void clear();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		__JniBaseClass entrySet();
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		jint hashCode();
		jboolean isEmpty();
		__JniBaseClass keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject remove(jobject arg0);
		jint size();
		jstring toString();
		__JniBaseClass values();
	};
} // namespace java::util

