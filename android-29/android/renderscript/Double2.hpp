#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Double2 : public __JniBaseClass
	{
	public:
		// Fields
		jdouble x();
		jdouble y();
		
		// QJniObject forward
		template<typename ...Ts> explicit Double2(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Double2(QJniObject obj);
		
		// Constructors
		Double2();
		Double2(jdouble arg0, jdouble arg1);
		
		// Methods
	};
} // namespace android::renderscript

