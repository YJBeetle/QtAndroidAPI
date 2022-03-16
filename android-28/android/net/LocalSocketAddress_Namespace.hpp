#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::net
{
	class LocalSocketAddress_Namespace : public java::lang::Enum
	{
	public:
		// Fields
		static android::net::LocalSocketAddress_Namespace ABSTRACT();
		static android::net::LocalSocketAddress_Namespace FILESYSTEM();
		static android::net::LocalSocketAddress_Namespace RESERVED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalSocketAddress_Namespace(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		LocalSocketAddress_Namespace(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::LocalSocketAddress_Namespace valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::net

