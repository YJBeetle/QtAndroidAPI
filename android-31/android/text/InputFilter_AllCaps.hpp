#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}

namespace android::text
{
	class InputFilter_AllCaps : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputFilter_AllCaps(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputFilter_AllCaps(QAndroidJniObject obj);
		
		// Constructors
		InputFilter_AllCaps();
		InputFilter_AllCaps(java::util::Locale arg0);
		
		// Methods
		jstring filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
	};
} // namespace android::text

