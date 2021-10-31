#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Double4 : public __JniBaseClass
	{
	public:
		// Fields
		jdouble w();
		jdouble x();
		jdouble y();
		jdouble z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Double4(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Double4(QJniObject obj);
		
		// Constructors
		Double4();
		Double4(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3);
		
		// Methods
	};
} // namespace android::renderscript

