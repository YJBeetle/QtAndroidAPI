#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Short2 : public __JniBaseClass
	{
	public:
		// Fields
		jshort x();
		jshort y();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Short2(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Short2(QAndroidJniObject obj);
		
		// Constructors
		Short2();
		Short2(jshort arg0, jshort arg1);
		
		// Methods
	};
} // namespace android::renderscript

