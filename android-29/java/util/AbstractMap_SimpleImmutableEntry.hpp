#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class AbstractMap_SimpleImmutableEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractMap_SimpleImmutableEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap_SimpleImmutableEntry(QAndroidJniObject obj);
		
		// Constructors
		AbstractMap_SimpleImmutableEntry(__JniBaseClass arg0);
		AbstractMap_SimpleImmutableEntry(jobject arg0, jobject arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jobject getKey();
		jobject getValue();
		jint hashCode();
		jobject setValue(jobject arg0);
		jstring toString();
	};
} // namespace java::util

