#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::transition
{
	class Transition;
}
namespace android::transition
{
	class TransitionManager;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class TransitionInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		TransitionInflater(QAndroidJniObject obj);
		// Constructors
		TransitionInflater() = default;
		
		// Methods
		static QAndroidJniObject from(android::content::Context arg0);
		QAndroidJniObject inflateTransition(jint arg0);
		QAndroidJniObject inflateTransitionManager(jint arg0, android::view::ViewGroup arg1);
	};
} // namespace android::transition

