#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Dictionary : public __JniBaseClass
	{
	public:
		// Fields
		
		Dictionary(QAndroidJniObject obj);
		// Constructors
		Dictionary();
		
		// Methods
		QAndroidJniObject elements();
		jobject get(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject keys();
		jobject put(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jint size();
	};
} // namespace java::util

