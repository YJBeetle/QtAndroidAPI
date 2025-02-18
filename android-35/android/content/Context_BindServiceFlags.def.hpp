#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context_BindServiceFlags : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Context_BindServiceFlags(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Context_BindServiceFlags(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::Context_BindServiceFlags of(jlong arg0);
	};
} // namespace android::content

