#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class StrictMode_ThreadPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static android::os::StrictMode_ThreadPolicy LAX();
		
		// QJniObject forward
		template<typename ...Ts> explicit StrictMode_ThreadPolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_ThreadPolicy(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::os

