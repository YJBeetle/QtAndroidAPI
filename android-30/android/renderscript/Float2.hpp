#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Float2 : public __JniBaseClass
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Float2(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Float2(QAndroidJniObject obj);
		
		// Constructors
		Float2();
		Float2(jfloat arg0, jfloat arg1);
		
		// Methods
	};
} // namespace android::renderscript

