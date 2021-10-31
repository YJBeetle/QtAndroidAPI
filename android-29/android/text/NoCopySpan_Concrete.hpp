#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class NoCopySpan_Concrete : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoCopySpan_Concrete(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NoCopySpan_Concrete(QAndroidJniObject obj);
		
		// Constructors
		NoCopySpan_Concrete();
		
		// Methods
	};
} // namespace android::text

