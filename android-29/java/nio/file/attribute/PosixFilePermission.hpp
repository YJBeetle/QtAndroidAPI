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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PosixFilePermission(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PosixFilePermission(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute

