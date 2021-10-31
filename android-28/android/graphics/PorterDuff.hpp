#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class PorterDuff : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PorterDuff(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuff(QAndroidJniObject obj);
		
		// Constructors
		PorterDuff();
		
		// Methods
	};
} // namespace android::graphics

