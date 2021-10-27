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
		
		Transition_EpicenterCallback(QAndroidJniObject obj);
		// Constructors
		Transition_EpicenterCallback();
		
		// Methods
		QAndroidJniObject onGetEpicenter(android::transition::Transition arg0);
	};
} // namespace android::transition

