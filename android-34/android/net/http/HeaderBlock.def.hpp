#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class HeaderBlock : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HeaderBlock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HeaderBlock(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HeaderBlock();
		
		// Methods
		JObject getAsList() const;
		JObject getAsMap() const;
	};
} // namespace android::net::http

