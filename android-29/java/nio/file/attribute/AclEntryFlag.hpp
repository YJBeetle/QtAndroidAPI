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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntryFlag(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AclEntryFlag(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute

