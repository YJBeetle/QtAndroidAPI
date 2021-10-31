#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableDouble : public __JniBaseClass
	{
	public:
		// Fields
		jdouble value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MutableDouble(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MutableDouble(QAndroidJniObject obj);
		
		// Constructors
		MutableDouble(jdouble arg0);
		
		// Methods
	};
} // namespace android::util

