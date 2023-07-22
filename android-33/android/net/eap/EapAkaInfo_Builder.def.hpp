#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::net::eap
{
	class EapAkaInfo;
}

namespace android::net::eap
{
	class EapAkaInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapAkaInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapAkaInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EapAkaInfo_Builder();
		
		// Methods
		android::net::eap::EapAkaInfo build() const;
		android::net::eap::EapAkaInfo_Builder setReauthId(JByteArray arg0) const;
	};
} // namespace android::net::eap

