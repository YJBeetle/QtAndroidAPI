#pragma once

#include "../../__JniBaseClass.hpp"
#include "./TransitionPropagation.hpp"

namespace android::transition
{
	class TransitionValues;
}

namespace android::transition
{
	class VisibilityPropagation : public android::transition::TransitionPropagation
	{
	public:
		// Fields
		
		VisibilityPropagation(QAndroidJniObject obj);
		// Constructors
		VisibilityPropagation();
		
		// Methods
		void captureValues(android::transition::TransitionValues arg0);
		jarray getPropagationProperties();
		jint getViewVisibility(android::transition::TransitionValues arg0);
		jint getViewX(android::transition::TransitionValues arg0);
		jint getViewY(android::transition::TransitionValues arg0);
	};
} // namespace android::transition

