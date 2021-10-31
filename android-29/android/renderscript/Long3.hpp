#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Long3 : public __JniBaseClass
	{
	public:
		// Fields
		jlong x();
		jlong y();
		jlong z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Long3(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Long3(QAndroidJniObject obj);
		
		// Constructors
		Long3();
		Long3(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::renderscript

