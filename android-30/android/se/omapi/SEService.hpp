#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content
{
	class Context;
}
namespace android::se::omapi
{
	class Reader;
}
class JString;

namespace android::se::omapi
{
	class SEService : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SEService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SEService(QJniObject obj);
		
		// Constructors
		SEService(android::content::Context arg0, JObject arg1, JObject arg2);
		
		// Methods
		JArray getReaders();
		android::se::omapi::Reader getUiccReader(jint arg0);
		JString getVersion();
		jboolean isConnected();
		void shutdown();
	};
} // namespace android::se::omapi

