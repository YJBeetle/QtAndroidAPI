#pragma once

#include "../../java/net/SocketAddress.def.hpp"

namespace android::system
{
	class VmSocketAddress : public java::net::SocketAddress
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VmSocketAddress(const char *className, const char *sig, Ts...agv) : java::net::SocketAddress(className, sig, std::forward<Ts>(agv)...) {}
		VmSocketAddress(QJniObject obj) : java::net::SocketAddress(obj) {}
		
		// Constructors
		VmSocketAddress(jint arg0, jint arg1);
		
		// Methods
		jint getSvmCid() const;
		jint getSvmPort() const;
	};
} // namespace android::system

