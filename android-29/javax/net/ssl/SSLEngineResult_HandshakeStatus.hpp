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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLEngineResult_HandshakeStatus(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngineResult_HandshakeStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace javax::net::ssl

