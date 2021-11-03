#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class Double3 : public JObject
	{
	public:
		// Fields
		jdouble x();
		jdouble y();
		jdouble z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Double3(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Double3(QAndroidJniObject obj);
		
		// Constructors
		Double3();
		Double3(jdouble arg0, jdouble arg1, jdouble arg2);
		
		// Methods
	};
} // namespace android::renderscript

