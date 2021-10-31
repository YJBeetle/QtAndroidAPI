#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class LoginFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LoginFilter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LoginFilter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jboolean isAllowed(jchar arg0);
		void onInvalidCharacter(jchar arg0);
		void onStart();
		void onStop();
	};
} // namespace android::text

