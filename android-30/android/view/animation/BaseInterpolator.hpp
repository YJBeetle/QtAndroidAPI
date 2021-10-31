#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::animation
{
	class BaseInterpolator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseInterpolator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BaseInterpolator(QAndroidJniObject obj);
		
		// Constructors
		BaseInterpolator();
		
		// Methods
	};
} // namespace android::view::animation

