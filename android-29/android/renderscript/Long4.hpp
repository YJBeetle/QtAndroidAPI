#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Long4 : public __JniBaseClass
	{
	public:
		// Fields
		jlong w();
		jlong x();
		jlong y();
		jlong z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Long4(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Long4(QAndroidJniObject obj);
		
		// Constructors
		Long4();
		Long4(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		
		// Methods
	};
} // namespace android::renderscript

