#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::transition
{
	class Transition;
}

namespace android::transition
{
	class Transition_EpicenterCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Transition_EpicenterCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Transition_EpicenterCallback(QAndroidJniObject obj);
		
		// Constructors
		Transition_EpicenterCallback();
		
		// Methods
		android::graphics::Rect onGetEpicenter(android::transition::Transition arg0);
	};
} // namespace android::transition

