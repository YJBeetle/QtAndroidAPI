#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Short3 : public __JniBaseClass
	{
	public:
		// Fields
		jshort x();
		jshort y();
		jshort z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Short3(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Short3(QAndroidJniObject obj);
		
		// Constructors
		Short3();
		Short3(jshort arg0, jshort arg1, jshort arg2);
		
		// Methods
	};
} // namespace android::renderscript

