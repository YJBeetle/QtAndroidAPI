#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Enum.hpp"


namespace java::nio::file::attribute
{
	class AclEntryFlag : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIRECTORY_INHERIT();
		static QAndroidJniObject FILE_INHERIT();
		static QAndroidJniObject INHERIT_ONLY();
		static QAndroidJniObject NO_PROPAGATE_INHERIT();
		
		AclEntryFlag(QAndroidJniObject obj);
		// Constructors
		AclEntryFlag() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute

