#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_fraction : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_fraction(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_fraction(QAndroidJniObject obj);
		
		// Constructors
		R_fraction();
		
		// Methods
	};
} // namespace android

