#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Property : public __JniBaseClass
	{
	public:
		// Fields
		
		Property(QAndroidJniObject obj);
		// Constructors
		Property(jclass arg0, jstring arg1);
		Property() = default;
		
		// Methods
		static QAndroidJniObject of(jclass arg0, jclass arg1, jstring arg2);
		jobject get(jobject arg0);
		jstring getName();
		jclass getType();
		jboolean isReadOnly();
		void set(jobject arg0, jobject arg1);
	};
} // namespace android::util

