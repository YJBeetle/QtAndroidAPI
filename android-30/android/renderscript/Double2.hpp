#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class Double2 : public JObject
	{
	public:
		// Fields
		jdouble x();
		jdouble y();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Double2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Double2(QAndroidJniObject obj);
		
		// Constructors
		Double2();
		Double2(jdouble arg0, jdouble arg1);
		
		// Methods
	};
} // namespace android::renderscript

