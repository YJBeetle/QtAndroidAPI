#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class FloatMath : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloatMath(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FloatMath(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

