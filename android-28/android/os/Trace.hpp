#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class Trace : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Trace(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Trace(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void beginSection(jstring arg0);
		static void endSection();
	};
} // namespace android::os

