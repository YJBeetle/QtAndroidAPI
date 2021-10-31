#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

namespace android::transition
{
	class TransitionValues : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject values();
		QAndroidJniObject view();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransitionValues(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TransitionValues(QAndroidJniObject obj);
		
		// Constructors
		TransitionValues();
		TransitionValues(android::view::View arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::transition

