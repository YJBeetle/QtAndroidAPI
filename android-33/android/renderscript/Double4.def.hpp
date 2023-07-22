#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Double4 : public JObject
	{
	public:
		// Fields
		jdouble w();
		jdouble x();
		jdouble y();
		jdouble z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Double4(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Double4(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Double4();
		Double4(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3);
		
		// Methods
	};
} // namespace android::renderscript

