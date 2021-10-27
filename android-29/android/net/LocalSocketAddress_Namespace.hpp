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
		
		LocalSocketAddress_Namespace(QAndroidJniObject obj);
		// Constructors
		LocalSocketAddress_Namespace() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::net

