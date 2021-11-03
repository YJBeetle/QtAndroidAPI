#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::net
{
	class IpSecTransform : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecTransform(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecTransform(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		JString toString() const;
	};
} // namespace android::net

