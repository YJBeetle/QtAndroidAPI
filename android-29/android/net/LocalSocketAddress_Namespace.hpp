#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::net
{
	class LocalSocketAddress_Namespace : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ABSTRACT();
		static QAndroidJniObject FILESYSTEM();
		static QAndroidJniObject RESERVED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalSocketAddress_Namespace(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		LocalSocketAddress_Namespace(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::net

