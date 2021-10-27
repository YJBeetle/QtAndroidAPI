#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::system
{
	class StructPollfd : public __JniBaseClass
	{
	public:
		// Fields
		jshort events();
		QAndroidJniObject fd();
		jshort revents();
		jobject userData();
		
		StructPollfd(QAndroidJniObject obj);
		// Constructors
		StructPollfd();
		
		// Methods
		jstring toString();
	};
} // namespace android::system

