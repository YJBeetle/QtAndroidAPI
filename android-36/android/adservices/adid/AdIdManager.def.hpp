#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::adservices::adid
{
	class AdIdManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdIdManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdIdManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::adid::AdIdManager get(android::content::Context arg0);
		void getAdId(JObject arg0, JObject arg1) const;
	};
} // namespace android::adservices::adid

