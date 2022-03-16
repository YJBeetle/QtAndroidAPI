#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class FileDescriptor;
}
class JObject;
class JString;

namespace android::system
{
	class StructPollfd : public JObject
	{
	public:
		// Fields
		jshort events();
		java::io::FileDescriptor fd();
		jshort revents();
		JObject userData();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StructPollfd(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructPollfd(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		StructPollfd();
		
		// Methods
		JString toString() const;
	};
} // namespace android::system

