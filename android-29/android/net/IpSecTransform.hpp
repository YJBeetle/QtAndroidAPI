#pragma once

#include "../../JObject.hpp"


namespace android::net
{
	class IpSecTransform : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecTransform(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecTransform(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jstring toString();
	};
} // namespace android::net

