#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R(QAndroidJniObject obj);
		
		// Constructors
		R();
		
		// Methods
	};
} // namespace android

