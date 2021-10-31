#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::net
{
	class StandardProtocolFamily : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INET();
		static QAndroidJniObject INET6();
		static QAndroidJniObject UNIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardProtocolFamily(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		StandardProtocolFamily(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::net

