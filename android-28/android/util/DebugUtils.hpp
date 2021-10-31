#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class DebugUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DebugUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DebugUtils(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isObjectSelected(jobject arg0);
	};
} // namespace android::util
