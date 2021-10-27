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
		
		SSLEngineResult_Status(QAndroidJniObject obj);
		// Constructors
		SSLEngineResult_Status() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace javax::net::ssl

