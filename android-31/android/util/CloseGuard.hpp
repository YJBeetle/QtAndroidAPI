#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class CloseGuard : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CloseGuard(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CloseGuard(QAndroidJniObject obj);
		
		// Constructors
		CloseGuard();
		
		// Methods
		void close();
		void open(jstring arg0);
		void warnIfOpen();
	};
} // namespace android::util

