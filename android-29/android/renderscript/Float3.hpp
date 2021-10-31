#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Float3 : public __JniBaseClass
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		jfloat z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Float3(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Float3(QAndroidJniObject obj);
		
		// Constructors
		Float3();
		Float3(jfloat arg0, jfloat arg1, jfloat arg2);
		
		// Methods
	};
} // namespace android::renderscript

