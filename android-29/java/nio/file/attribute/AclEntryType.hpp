#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Enum.hpp"


namespace java::nio::file::attribute
{
	class AclEntryType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALARM();
		static QAndroidJniObject ALLOW();
		static QAndroidJniObject AUDIT();
		static QAndroidJniObject DENY();
		
		AclEntryType(QAndroidJniObject obj);
		// Constructors
		AclEntryType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute

