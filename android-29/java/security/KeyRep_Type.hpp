#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::security
{
	class KeyRep_Type : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PRIVATE();
		static QAndroidJniObject PUBLIC();
		static QAndroidJniObject SECRET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyRep_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		KeyRep_Type(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security

