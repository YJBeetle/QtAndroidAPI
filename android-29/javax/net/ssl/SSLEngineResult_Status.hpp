#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace javax::net::ssl
{
	class SSLEngineResult_Status : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BUFFER_OVERFLOW();
		static QAndroidJniObject BUFFER_UNDERFLOW();
		static QAndroidJniObject CLOSED();
		static QAndroidJniObject OK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLEngineResult_Status(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngineResult_Status(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace javax::net::ssl

