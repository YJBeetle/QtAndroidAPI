#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telecom
{
	class Connection_RttTextStream : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Connection_RttTextStream(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Connection_RttTextStream(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring read();
		jstring readImmediately();
		void write(jstring arg0);
	};
} // namespace android::telecom

