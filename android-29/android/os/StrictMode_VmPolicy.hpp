#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class HashMap;
}

namespace android::os
{
	class StrictMode_VmPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject LAX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrictMode_VmPolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_VmPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::os

