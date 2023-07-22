#pragma once

#include "./EapInfo.def.hpp"

class JByteArray;

namespace android::net::eap
{
	class EapAkaInfo : public android::net::eap::EapInfo
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EapAkaInfo(const char *className, const char *sig, Ts...agv) : android::net::eap::EapInfo(className, sig, std::forward<Ts>(agv)...) {}
		EapAkaInfo(QJniObject obj) : android::net::eap::EapInfo(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getReauthId() const;
	};
} // namespace android::net::eap

