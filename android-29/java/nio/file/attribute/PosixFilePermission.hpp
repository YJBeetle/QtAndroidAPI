#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Enum.hpp"


namespace java::nio::file::attribute
{
	class PosixFilePermission : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject GROUP_EXECUTE();
		static QAndroidJniObject GROUP_READ();
		static QAndroidJniObject GROUP_WRITE();
		static QAndroidJniObject OTHERS_EXECUTE();
		static QAndroidJniObject OTHERS_READ();
		static QAndroidJniObject OTHERS_WRITE();
		static QAndroidJniObject OWNER_EXECUTE();
		static QAndroidJniObject OWNER_READ();
		static QAndroidJniObject OWNER_WRITE();
		
		PosixFilePermission(QAndroidJniObject obj);
		// Constructors
		PosixFilePermission() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute

