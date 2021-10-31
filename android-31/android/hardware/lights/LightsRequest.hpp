#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::lights
{
	class LightsRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LightsRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LightsRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getLightStates();
		__JniBaseClass getLights();
		__JniBaseClass getLightsAndStates();
	};
} // namespace android::hardware::lights

