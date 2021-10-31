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
		java::io::FileDescriptor fd();
		jshort revents();
		jobject userData();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StructPollfd(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StructPollfd(QAndroidJniObject obj);
		
		// Constructors
		StructPollfd();
		
		// Methods
		jstring toString();
	};
} // namespace android::system

