#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class LoginFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		LoginFilter(QAndroidJniObject obj);
		// Constructors
		LoginFilter() = default;
		
		// Methods
		jstring filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jstring filter(const QString &arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jboolean isAllowed(jchar arg0);
		void onInvalidCharacter(jchar arg0);
		void onStart();
		void onStop();
	};
} // namespace android::text

