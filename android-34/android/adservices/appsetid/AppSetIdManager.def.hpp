#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::adservices::appsetid
{
	class AppSetIdManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSetIdManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSetIdManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::appsetid::AppSetIdManager get(android::content::Context arg0);
		void getAppSetId(JObject arg0, JObject arg1) const;
	};
} // namespace android::adservices::appsetid

