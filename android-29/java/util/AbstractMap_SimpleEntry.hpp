#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class AbstractMap_SimpleEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		AbstractMap_SimpleEntry(QAndroidJniObject obj);
		// Constructors
		AbstractMap_SimpleEntry(__JniBaseClass &arg0);
		AbstractMap_SimpleEntry(jobject &arg0, jobject &arg1);
		AbstractMap_SimpleEntry() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jobject getKey();
		jobject getValue();
		jint hashCode();
		jobject setValue(jobject arg0);
		jstring toString();
	};
} // namespace java::util

