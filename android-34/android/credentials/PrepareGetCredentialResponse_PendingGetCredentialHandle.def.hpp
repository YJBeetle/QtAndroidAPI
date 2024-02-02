#pragma once

#include "../../JObject.hpp"

namespace android::credentials
{
	class PrepareGetCredentialResponse_PendingGetCredentialHandle : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrepareGetCredentialResponse_PendingGetCredentialHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrepareGetCredentialResponse_PendingGetCredentialHandle(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::credentials

