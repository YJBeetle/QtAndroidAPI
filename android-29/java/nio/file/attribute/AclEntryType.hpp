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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntryType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AclEntryType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute

