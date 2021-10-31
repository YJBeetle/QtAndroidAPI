#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Byte2 : public __JniBaseClass
	{
	public:
		// Fields
		jbyte x();
		jbyte y();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Byte2(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Byte2(QAndroidJniObject obj);
		
		// Constructors
		Byte2();
		Byte2(jbyte arg0, jbyte arg1);
		
		// Methods
	};
} // namespace android::renderscript

