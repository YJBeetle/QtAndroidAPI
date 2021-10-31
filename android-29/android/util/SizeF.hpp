#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class SizeF : public __JniBaseClass
	{
	public:
		// Fields
		
		SizeF(QAndroidJniObject obj);
		// Constructors
		SizeF(jfloat arg0, jfloat arg1);
		SizeF() = default;
		
		// Methods
		static QAndroidJniObject parseSizeF(jstring arg0);
		jboolean equals(jobject arg0);
		jfloat getHeight();
		jfloat getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace android::util

