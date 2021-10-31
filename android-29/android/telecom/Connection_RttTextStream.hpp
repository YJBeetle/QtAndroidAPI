#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::telecom
{
	class Connection_RttTextStream : public __JniBaseClass
	{
	public:
		// Fields
		
		Connection_RttTextStream(QAndroidJniObject obj);
		// Constructors
		Connection_RttTextStream() = default;
		
		// Methods
		jstring read();
		jstring readImmediately();
		void write(jstring arg0);
	};
} // namespace android::telecom

