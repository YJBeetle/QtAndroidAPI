#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content
{
	class Context;
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
		SEService(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SEService(android::content::Context arg0, JObject arg1, JObject arg2);
		
		// Methods
		JArray getReaders() const;
		JString getVersion() const;
		jboolean isConnected() const;
		void shutdown() const;
	};
} // namespace android::se::omapi

