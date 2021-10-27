#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class AbstractMap_SimpleImmutableEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		AbstractMap_SimpleImmutableEntry(QAndroidJniObject obj);
		// Constructors
		AbstractMap_SimpleImmutableEntry(__JniBaseClass &arg0);
		AbstractMap_SimpleImmutableEntry(jobject &arg0, jobject &arg1);
		AbstractMap_SimpleImmutableEntry() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jobject getKey();
		jobject getValue();
		jint hashCode();
		jobject setValue(jobject arg0);
		jstring toString();
	};
} // namespace java::util

