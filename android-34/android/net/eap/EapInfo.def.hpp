#pragma once

#include "../../../JObject.hpp"

namespace android::net::eap
{
	class EapInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EapInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getEapMethodType() const;
	};
} // namespace android::net::eap

