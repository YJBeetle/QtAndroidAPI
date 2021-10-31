#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class InputFilter_LengthFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputFilter_LengthFilter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputFilter_LengthFilter(QAndroidJniObject obj);
		
		// Constructors
		InputFilter_LengthFilter(jint arg0);
		
		// Methods
		jstring filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jint getMax();
	};
} // namespace android::text

