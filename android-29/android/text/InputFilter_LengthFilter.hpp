#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class InputFilter_LengthFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		InputFilter_LengthFilter(QAndroidJniObject obj);
		// Constructors
		InputFilter_LengthFilter(jint &arg0);
		InputFilter_LengthFilter() = default;
		
		// Methods
		jstring filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jstring filter(const QString &arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jint getMax();
	};
} // namespace android::text

