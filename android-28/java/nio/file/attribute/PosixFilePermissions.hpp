#pragma once

#include "../../../../JObject.hpp"

namespace java::lang
{
	class StringBuilder;
}

namespace java::nio::file::attribute
{
	class PosixFilePermissions : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PosixFilePermissions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PosixFilePermissions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject asFileAttribute(JObject arg0);
		static JObject fromString(jstring arg0);
		static jstring toString(JObject arg0);
	};
} // namespace java::nio::file::attribute

