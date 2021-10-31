#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class StringBuilder;
}

namespace java::nio::file::attribute
{
	class PosixFilePermissions : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PosixFilePermissions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PosixFilePermissions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass asFileAttribute(__JniBaseClass arg0);
		static __JniBaseClass fromString(jstring arg0);
		static jstring toString(__JniBaseClass arg0);
	};
} // namespace java::nio::file::attribute

