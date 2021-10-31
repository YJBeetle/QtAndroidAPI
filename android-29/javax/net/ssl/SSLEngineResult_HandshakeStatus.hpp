#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace javax::net::ssl
{
	class SSLEngineResult_HandshakeStatus : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FINISHED();
		static QAndroidJniObject NEED_TASK();
		static QAndroidJniObject NEED_UNWRAP();
		static QAndroidJniObject NEED_UNWRAP_AGAIN();
		static QAndroidJniObject NEED_WRAP();
		static QAndroidJniObject NOT_HANDSHAKING();
		
		SSLEngineResult_HandshakeStatus(QAndroidJniObject obj);
		// Constructors
		SSLEngineResult_HandshakeStatus() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace javax::net::ssl

