#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::adservices::adid
{
	class AdId : public JObject
	{
	public:
		// Fields
		static JString ZERO_OUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdId(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdId(JString arg0, jboolean arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getAdId() const;
		jint hashCode() const;
		jboolean isLimitAdTrackingEnabled() const;
	};
} // namespace android::adservices::adid

