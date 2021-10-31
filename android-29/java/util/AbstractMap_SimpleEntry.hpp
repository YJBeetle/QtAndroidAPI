#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class AbstractMap_SimpleEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractMap_SimpleEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap_SimpleEntry(QAndroidJniObject obj);
		
		// Constructors
		AbstractMap_SimpleEntry(__JniBaseClass arg0);
		AbstractMap_SimpleEntry(jobject arg0, jobject arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jobject getKey();
		jobject getValue();
		jint hashCode();
		jobject setValue(jobject arg0);
		jstring toString();
	};
} // namespace java::util

