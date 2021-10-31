#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class Layout_Directions : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Layout_Directions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Layout_Directions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::text

